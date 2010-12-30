#ifndef BUILDGOLANG_H
#define BUILDGOLANG_H

#include <QObject>
#include "../../api/ibuild.h"
#include "../../api/iproject.h"
#include "../../api/ieditor.h"
#include "../../util/processoutput.h"

class BuildGolang : public QObject, public IBuild
{
    Q_OBJECT
public:
    explicit BuildGolang(QObject *parent = 0);
    virtual QString buildName() const;
    virtual bool buildProject(IProject *proj);
    virtual bool buildEditor(IEditor *edit);
public:
    ProcessOutput   process8g;
    ProcessOutput   process8l;
    QString         target;
private slots:
    void outputText(const QString &text);
    void linkProject();
};

#endif // BUILDGOLANG_H