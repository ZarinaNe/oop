#include "TextBox.h"
#include <iostream>

std::string TextBox::getText()
{
	return this->_text;
}

void TextBox::setText(std::string text)
{
	this->_text = text;
}



std::string TextBox::draw()
{
	std::cout << this->Control::draw() << std::endl;
	return std::string(this->_text);
}
