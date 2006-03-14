#include <stdio.h>
#include <unistd.h>

#include "comm.h"
#include "calls.h"
#include "callbacks.h"

static void callback( DapiConnection* conn, int seq, int ord )
    {
    printf( "Order async: %d %d (%s)\n", seq, ord, ord == 0 ? "Failed" : ord == 1 ? "Ok/Cancel" : "Cancel/Ok" );
    }

int main()
    {
    int seq;
    DapiConnection* conn = dapi_connect();
    if( conn == NULL )
        {
        fprintf( stderr, "Cannot connect!\n" );
        return 1;
        }
    if( !dapi_Init( conn ))
        {
        fprintf( stderr, "Initialization failed!\n" );
        return 2;
        }
    seq = dapi_callbackButtonOrder( conn, callback );
    printf( "Order call1: %d\n", seq );
    seq = dapi_callbackButtonOrder( conn, callback );
    printf( "Order call2: %d\n", seq );
    sleep( 1 ); /* give time to process */
    dapi_processCallbacks( conn );
    dapi_close( conn );
    return 0;
    }
