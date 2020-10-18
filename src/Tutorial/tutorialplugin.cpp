#include "tutorialplugin.h"
#include "QGCApplication.h"

#include <QQmlEngine>

TutorialPlugin::TutorialPlugin(QGCApplication* app, QGCToolbox* toolbox)
    : QGCTool(app, toolbox)
{

}

void TutorialPlugin::qmlDebug(QString msg){
    qDebug() << msg;
}
