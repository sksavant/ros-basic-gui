#ifndef REGUI_GUI_FRAME
#define REGUI_GUI_FRAME

#include <QFrame>
#include <QSlider>
#include <QWidget>
#include <QVBoxLayout>
#include <ros/ros.h>

#include <regui/SliderVal.h>

namespace regui
{

class GuiFrame : public QFrame
{
  Q_OBJECT
public:
  GuiFrame(const ros::NodeHandle& nh , QWidget* parent=0, Qt::WindowFlags f = 0);
  ~GuiFrame();

private:
  QSlider* slider;
  QVBoxLayout *layout;
  QWidget* sliderWidget;

  ros::NodeHandle nh_;
  ros::Publisher slider_val_;


public slots:
  void printtheval(int);
signals:
  void valueChanged(int newvalue);
};

}
#endif
