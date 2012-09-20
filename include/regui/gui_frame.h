
#include <QFrame>

#include <ros/ros.h>

namespace regui
{

class GuiFrame : public QFrame
{
  Q_OBJECT
public:
  GuiFrame(QWidget* parent=0, Qt::WindowFlags f = 0);
  ~GuiFrame();

};


}
