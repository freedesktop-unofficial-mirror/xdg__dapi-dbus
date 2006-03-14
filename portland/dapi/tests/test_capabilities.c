#include <stdio.h>
#include <stdlib.h>

#include "comm.h"
#include "calls.h"

int main()
    {
    intarr capabilities;
    int i;
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
    if( dapi_Capabilities( conn, &capabilities ))
        {
        int has_mailto = 0;
        printf( "Capabilities:" );
        for( i = 0;
             i < capabilities.count;
             ++i )
            {
            printf( " %d", capabilities.data[ i ] );
            if( capabilities.data[ i ] == DAPI_COMMAND_MAILTO )
                has_mailto = 1;
            }
        printf( "\nHas mailto: %d\n", has_mailto );
        }
    else
        fprintf( stderr, "Capabilities call failed!\n" );
    dapi_close( conn );
    return 0;
    }
