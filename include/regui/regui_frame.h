#ifndef REGUI_GUI_FRAME
#define REGUI_GUI_FRAME

#include <QFrame>
#include <QSlider>
#include <QWidget>
#include <QVBoxLayout>
#include <QDoubleSpinBox>
#include <ros/ros.h>

#include <regui/SliderVal.h>

namespace regui
{

class GuiFrame : public QFrame
{
  Q_OBJECT
public:
  GuiFrame(QWidget* parent=0, Qt::WindowFlags f = 0);
  ~GuiFrame();

private:
  QSlider* slider;
  QDoubleSpinBox* number1;
  QDoubleSpinBox* number2;
  QVBoxLayout *layout;

  ros::NodeHandle nh_;
  ros::Publisher slider_val_pub_;

public slots:
  void printtheval(int);
};

}
#endif
