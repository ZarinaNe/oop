#include "Control.h"
#include <iostream>

Control::Control(std::string& name, int x, int y, int w, int h)
{
    Point2D p1(x, y);
    Point2D p2(w, h);
    this->setPosition(p1);
    this->setSize(p2);
    this->setName(name);
}

void Control::setName(std::string name)
{
    this->_name = name;
}

std::string Control::getName()
{
    return std::string(_name);
}

Point2D Control::getPosition()
{
    return Point2D(_position);
}

Point2D Control::getSize()
{
    return Point2D(_size);
}

void Control::setPosition(Point2D position)
{
    this->_position = position;
}

void Control::setSize(Point2D size)
{
    this->_size = size;
}

std::string Control::draw()
{
    std::cout << "\n---------Base class Control draw------------" << std::endl;
    std::cout << "Called a method draw() on the control " << this->getName() << std::endl;
    std::cout << "At: " << this->_position.x << " " << this->_position.y << std::endl;
    std::cout << "Size: " << this->_size.x << " " << this->_size.y << std::endl;
    return std::string(this->_name);
}
