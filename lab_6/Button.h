#pragma once
#include "Control.h"
#include <iostream>
class Button : public Control
{
private:
    std::string _btn_text;
public:
    Button() : Control() {
        std::cout << "Button constructor" << std::endl;
        this->setName("Button");
        this->setSize(Point2D(5, 2));
    };
    ~Button() {
    };
    void setText(std::string text);
    std::string getText();
    std::string draw() override;
};

