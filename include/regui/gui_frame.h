
#include <QFrame>
#include <QSlider>
#include <QWidget>
#include <QVBoxLayout>
#include <ros/ros.h>

namespace regui
{

class GuiFrame : public QFrame
{
  Q_OBJECT
public:
  GuiFrame(QWidget* parent=0, Qt::WindowFlags f = 0);
  ~GuiFrame();
  void PrintthePosition(int );

private:
  QSlider* slider;
  QVBoxLayout *layout;
  QWidget* sliderWidget;
};


}
