#include "Button.h"
#include <iostream>

void Button::setText(std::string text)
{
    this->_btn_text = text;
}
std::string Button::getText()
{
    return std::string(this->_btn_text);
}
std::string Button::draw()
{
    std::cout << this->Control::draw() << std::endl;
    return std::string(this->getText());
}
