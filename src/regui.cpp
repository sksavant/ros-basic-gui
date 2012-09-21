
#include <QApplication>

#include <ros/ros.h>
#include "regui/gui_frame.h"

class GuiApp : public QApplication
{
public:
  ros::NodeHandlePtr nh_;

  GuiApp(int argc, char** argv) : QApplication(argc, argv){
    ros::init(argc,argv,"regui",ros::init_options::NoSigintHandler);
    nh_.reset(new ros::NodeHandle);
  }

  int exec(){
    ROS_INFO("Hello! I'm executed");
    regui::GuiFrame frame;
    frame.show();
    frame.regui::GuiFrame::PrintthePosition(5);
    return QApplication::exec();
  }

};

int main(int argc, char** argv)
{
    GuiApp app(argc,argv);
    return app.exec();
}

