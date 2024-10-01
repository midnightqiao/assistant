#include "inputmessage.h"

inputMessage::inputMessage()
{

}

bool inputMessage::isMissing()
{
    if(m_id.isEmpty()||m_name.isEmpty()||!m_deadline.isValid()||m_filename.isEmpty())
    {
        return true;
    }
    return false;
}

bool inputMessage::setId(QString id)
{
    m_id = id;
    return true;
}

bool inputMessage::setName(QString name)
{
    m_name = name;
    return true;
}

bool inputMessage::setDeadline(QDate date)
{
    m_deadline = date;
    return true;
}

bool inputMessage::setFilename(QString filename)
{
    m_filename = filename;
    return true;
}

const QString inputMessage::id()
{
    return m_id;
}

const QString inputMessage::name()
{
    return m_name;
}

const QDate inputMessage::deadline()
{
    return m_deadline;
}

const QString inputMessage::filename()
{
    return m_filename;
}
