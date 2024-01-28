#pragma once
#include "TextBox.h"
class TextBoxLin : public TextBox
{
public:
	std::string draw() override {
		std::cout << this->TextBox::draw() << std::endl;
		return std::string("Some Linux draw functions");
	};
};