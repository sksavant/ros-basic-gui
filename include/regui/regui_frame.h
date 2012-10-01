#ifndef REGUI_GUI_FRAME
#define REGUI_GUI_FRAME

#include <QPushButton>
#include <QFrame>
#include <QSlider>
#include <QLineEdit>
#include <QString>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QDoubleSpinBox>
#include <ros/ros.h>

#include <regui/SliderVal.h>
#include <regui/TwoInts.h>

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
  QPushButton* button;
  QGridLayout *mainlayout;
  QHBoxLayout* addition;
  QDoubleSpinBox* number1;
  QDoubleSpinBox* number2;
  QVBoxLayout *layout;
  QLineEdit *answer;

  ros::NodeHandle nh_;
  ros::Publisher slider_val_pub_;
  ros::ServiceClient addition_client_;
  TwoInts srv;

public slots:
  void publishVal(int);
  void sendSumRequest();
};

}
#endif
