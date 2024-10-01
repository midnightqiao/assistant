#ifndef INPUTMESSAGE_H
#define INPUTMESSAGE_H

#include <QString>
#include <QDate>

//疫苗接种护士录入信息包括工号、姓名、资质有效期、资质文件路径
class inputMessage
{
public:
    inputMessage();
    bool isMissing();
    bool setId(QString id);
    bool setName(QString name);
    bool setDeadline(QDate date);
    bool setFilename(QString filename);
    const QString id();
    const QString name();
    const QDate deadline();
    const QString filename();
private:
    QString m_id;
    QString m_name;
    QDate m_deadline;
    QString m_filename;
};

#endif // INPUTMESSAGE_H
