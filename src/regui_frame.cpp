
#include "regui/gui_frame.h"

#include <QPointF>

#include <ros/package.h>
#include <cstdlib>

namespace regui
{

GuiFrame::GuiFrame(QWidget* parent, Qt::WindowFlags f) : QFrame(parent,f)
{
    setFixedSize(500, 500);
    setWindowTitle("ROS Basic GUI");

    //To put some objects etc
}

GuiFrame::~GuiFrame()
{

}

}
