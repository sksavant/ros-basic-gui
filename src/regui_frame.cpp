#include <regui/gui_frame.h>

#include <QPointF>

#include <ros/package.h>
#include <cstdlib>

namespace regui
{

GuiFrame::GuiFrame(QWidget* parent, Qt::WindowFlags f) : QFrame(parent,f)
{
    setMinimumSize(100,100);
    setFixedSize(500,500);
    setWindowTitle("ROS Basic GUI");
    slider = new QSlider(Qt::Horizontal);
    slider->setFocusPolicy(Qt::StrongFocus);
    slider->setTickPosition(QSlider::TicksBothSides);
    slider->setTickInterval(10);
    slider->setSingleStep(0.1);

    layout = new QVBoxLayout;
    sliderWidget = new QWidget;
    layout->addWidget(sliderWidget);
    layout->addWidget(slider);
    setLayout(layout);
    //To put some objects etc
}

GuiFrame::~GuiFrame()
{

}

GuiFrame::PrintthePostion(int y)
{
    int x;
    while(x<10){
    std::cout<<slider->tickPosition()<<std::endl;
    }
}

}
