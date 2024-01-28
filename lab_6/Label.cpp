#include "Label.h"
#include <iostream>

void Label::setText(std::string text)
{
	this->_text=text;
}

std::string Label::getText()
{
	return std::string(this->_text);
}

std::string Label::draw()
{
	std::cout << this->Control::draw() << std::endl;
	return std::string(this->_text);
}
