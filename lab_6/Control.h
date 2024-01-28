#pragma once
#include <string>
#include <iostream>
struct Point2D {
    int x, y;
    Point2D() = default;
    Point2D(int x, int y) { this->x = x; this->y = y; };
};

class Control
{
private:
    std::string _name;
    Point2D _position;
    Point2D _size;
public:
    Control() {
        std::cout << this->getName() << " constructor" << std::endl;
        this->_name = std::string();
        this->_position = Point2D(0, 0);
        this->_size = Point2D(0, 0);
    };
    Control(std::string& name, int x, int y, int w, int h);
    virtual ~Control() {
        std::cout << this->getName() << " destructor" << std::endl;
    };
    void setName(std::string name);
    std::string getName();
    Point2D getPosition();
    Point2D getSize();
    void setPosition(Point2D position);
    void setSize(Point2D size);
    virtual std::string draw();
};

