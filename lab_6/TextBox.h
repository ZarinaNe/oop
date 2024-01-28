#pragma once
#include "Control.h"
#include <iostream>
class TextBox : public Control
{
private:
    std::string _text;
public:
    TextBox() : Control() {
        std::cout << "TextBox constructor" << std::endl;
        this->setName("TextBox");
        this->setSize(Point2D(5, 5));
    };
    virtual ~TextBox() {};
    std::string getText();
    void setText(std::string text);
    std::string draw() override;
};

