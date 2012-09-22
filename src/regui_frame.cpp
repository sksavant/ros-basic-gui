#include "regui/regui_frame.h"

#include <QPointF>
#include <QObject>
#include <QtGui>

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

    connect(slider,SIGNAL(valueChanged(int)),&sliderval_,SLOT(printtheval(int)));
    //To put some objects etc
}

GuiFrame::~GuiFrame()
{
    delete slider;
    delete layout;
    delete sliderWidget;
}

void GuiFrame::whatever(){
    while(1){
        std::cout<<slider->tickPosition()<<std::endl;
    }
}

void GuiFrame::valueChanged(int newval){
    emit slider->valueChanged(newval);
}

void printtheval(int val){
    std::cout<<val<<std::endl;
}

}
