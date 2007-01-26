// File autogenerated

// Qt includes
#include <qstring.h>
#include <qstringlist.h>

// Qt D-Bus includes
#include <dbus/qdbusdatalist.h>
#include <dbus/qdbuserror.h>
#include <dbus/qdbusmessage.h>
#include <dbus/qdbusvariant.h>

// local includes
#include "dapi.h"

namespace org
{
namespace freedesktop
{

QDBusMessage dapi::callCapabilities(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    Q_INT32 _capabilities;

    if (Capabilities(_capabilities, error))
    {
        reply = QDBusMessage::methodReply(message);
        reply << QDBusData::fromInt32(_capabilities);
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

QDBusMessage dapi::callOpenUrl(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    QString _url = message[0].toString();
    QDBusVariant _windowinfo = message[1].toVariant();

    if (OpenUrl(_url, _windowinfo, error))
    {
        reply = QDBusMessage::methodReply(message);
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

QDBusMessage dapi::callExecuteUrl(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    QString _url = message[0].toString();
    QDBusVariant _windowinfo = message[1].toVariant();

    if (ExecuteUrl(_url, _windowinfo, error))
    {
        reply = QDBusMessage::methodReply(message);
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

QDBusMessage dapi::callButtonOrder(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    Q_INT32 _order;

    if (ButtonOrder(_order, error))
    {
        reply = QDBusMessage::methodReply(message);
        reply << QDBusData::fromInt32(_order);
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

QDBusMessage dapi::callRunAsUser(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    QString _user = message[0].toString();
    QString _command = message[1].toString();
    QDBusVariant _windowinfo = message[2].toVariant();

    if (RunAsUser(_user, _command, _windowinfo, error))
    {
        reply = QDBusMessage::methodReply(message);
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

QDBusMessage dapi::callSuspendScreenSaving(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    Q_UINT32 _client_id = message[0].toUInt32();
    bool _suspend = message[1].toBool();

    if (SuspendScreenSaving(_client_id, _suspend, error))
    {
        reply = QDBusMessage::methodReply(message);
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

QDBusMessage dapi::callMailTo(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    QString _subject = message[0].toString();
    QString _body = message[1].toString();
    QString _to = message[2].toString();
    QString _cc = message[3].toString();
    QString _bcc = message[4].toString();
    QStringList _attachments = message[5].toList().toQStringList();
    QDBusVariant _windowinfo = message[6].toVariant();

    if (MailTo(_subject, _body, _to, _cc, _bcc, _attachments, _windowinfo, error))
    {
        reply = QDBusMessage::methodReply(message);
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

QDBusMessage dapi::callLocalFile(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    QString _url = message[0].toString();
    QString _local = message[1].toString();
    bool _allow_download = message[2].toBool();
    QString _filename;
    QDBusVariant _windowinfo = message[3].toVariant();

    if (LocalFile(_url, _local, _allow_download, _filename, _windowinfo, error))
    {
        reply = QDBusMessage::methodReply(message);
        reply << QDBusData::fromString(_filename);
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

QDBusMessage dapi::callUploadFile(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    QString _local = message[0].toString();
    QString _url = message[1].toString();
    bool _remove_local = message[2].toBool();
    QDBusVariant _windowinfo = message[3].toVariant();

    if (UploadFile(_local, _url, _remove_local, _windowinfo, error))
    {
        reply = QDBusMessage::methodReply(message);
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

QDBusMessage dapi::callRemoveTemporaryLocalFile(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    QString _local = message[0].toString();

    if (RemoveTemporaryLocalFile(_local, error))
    {
        reply = QDBusMessage::methodReply(message);
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

QDBusMessage dapi::callAddressBookList(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    QStringList _contact_ids;

    if (AddressBookList(_contact_ids, error))
    {
        reply = QDBusMessage::methodReply(message);
        reply << QDBusData::fromList(QDBusDataList(_contact_ids));
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

QDBusMessage dapi::callAddressBookOwner(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    QString _contact_id;

    if (AddressBookOwner(_contact_id, error))
    {
        reply = QDBusMessage::methodReply(message);
        reply << QDBusData::fromString(_contact_id);
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

QDBusMessage dapi::callAddressBookFindByName(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    QString _name = message[0].toString();
    QStringList _contact_ids;

    if (AddressBookFindByName(_name, _contact_ids, error))
    {
        reply = QDBusMessage::methodReply(message);
        reply << QDBusData::fromList(QDBusDataList(_contact_ids));
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

QDBusMessage dapi::callAddressBookGetName(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    QString _contact_id = message[0].toString();
    QString _given_name;
    QString _family_name;
    QString _full_name;

    if (AddressBookGetName(_contact_id, _given_name, _family_name, _full_name, error))
    {
        reply = QDBusMessage::methodReply(message);
        reply << QDBusData::fromString(_given_name);
        reply << QDBusData::fromString(_family_name);
        reply << QDBusData::fromString(_full_name);
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

QDBusMessage dapi::callAddressBookGetEmails(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    QString _contact_id = message[0].toString();
    QStringList _email_addresses;

    if (AddressBookGetEmails(_contact_id, _email_addresses, error))
    {
        reply = QDBusMessage::methodReply(message);
        reply << QDBusData::fromList(QDBusDataList(_email_addresses));
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

QDBusMessage dapi::callAddressBookGetVCard30(const QDBusMessage& message)
{
    QDBusError   error;
    QDBusMessage reply;

    QString _contact_id = message[0].toString();
    QString _vcard;

    if (AddressBookGetVCard30(_contact_id, _vcard, error))
    {
        reply = QDBusMessage::methodReply(message);
        reply << QDBusData::fromString(_vcard);
    }
    else
    {
        reply = QDBusMessage::methodError(message, error);
    }

    return reply;
}

bool dapi::handleMethodCall(const QDBusMessage& message)
{
    if (message.interface() != "org.freedesktop.dapi") return false;

    if (message.member() == "Capabilities")
    {
        QDBusMessage reply = callCapabilities(message);
        handleMethodReply(reply);

        return true;
    }

    if (message.member() == "OpenUrl")
    {
        QDBusMessage reply = callOpenUrl(message);
        handleMethodReply(reply);

        return true;
    }

    if (message.member() == "ExecuteUrl")
    {
        QDBusMessage reply = callExecuteUrl(message);
        handleMethodReply(reply);

        return true;
    }

    if (message.member() == "ButtonOrder")
    {
        QDBusMessage reply = callButtonOrder(message);
        handleMethodReply(reply);

        return true;
    }

    if (message.member() == "RunAsUser")
    {
        QDBusMessage reply = callRunAsUser(message);
        handleMethodReply(reply);

        return true;
    }

    if (message.member() == "SuspendScreenSaving")
    {
        QDBusMessage reply = callSuspendScreenSaving(message);
        handleMethodReply(reply);

        return true;
    }

    if (message.member() == "MailTo")
    {
        QDBusMessage reply = callMailTo(message);
        handleMethodReply(reply);

        return true;
    }

    if (message.member() == "LocalFile")
    {
        QDBusMessage reply = callLocalFile(message);
        handleMethodReply(reply);

        return true;
    }

    if (message.member() == "UploadFile")
    {
        QDBusMessage reply = callUploadFile(message);
        handleMethodReply(reply);

        return true;
    }

    if (message.member() == "RemoveTemporaryLocalFile")
    {
        QDBusMessage reply = callRemoveTemporaryLocalFile(message);
        handleMethodReply(reply);

        return true;
    }

    if (message.member() == "AddressBookList")
    {
        QDBusMessage reply = callAddressBookList(message);
        handleMethodReply(reply);

        return true;
    }

    if (message.member() == "AddressBookOwner")
    {
        QDBusMessage reply = callAddressBookOwner(message);
        handleMethodReply(reply);

        return true;
    }

    if (message.member() == "AddressBookFindByName")
    {
        QDBusMessage reply = callAddressBookFindByName(message);
        handleMethodReply(reply);

        return true;
    }

    if (message.member() == "AddressBookGetName")
    {
        QDBusMessage reply = callAddressBookGetName(message);
        handleMethodReply(reply);

        return true;
    }

    if (message.member() == "AddressBookGetEmails")
    {
        QDBusMessage reply = callAddressBookGetEmails(message);
        handleMethodReply(reply);

        return true;
    }

    if (message.member() == "AddressBookGetVCard30")
    {
        QDBusMessage reply = callAddressBookGetVCard30(message);
        handleMethodReply(reply);

        return true;
    }

    return false; 
}
}; // namespace freedesktop

}; // namespace org

// End of File

