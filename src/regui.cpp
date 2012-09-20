
#include <QApplication>

#include <ros/ros.h>

class GuiApp : public QApplication
{
public:
  ros::NodeHandlePtr nh_;

  GuiApp(int argc, char** argv) : QApplication(argc, argv){
    ros::init(argc,argv,"regui",ros::init_options::NoSigintHandler);
    //nh_.reset(new ros::NodeHandle);
  }

  int exec(){
    std::cout<<"Hello! I'm executed!"<<std::endl;
    return 0;
  }

};

int main(int argc, char** argv)
{
    GuiApp app(argc,argv);
    return app.exec();
}
