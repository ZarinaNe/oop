#pragma once
#include "TextBox.h"
class TextBoxMac : public TextBox
{
public:
	std::string draw() override {
		std::cout << this->TextBox::draw() << std::endl;
		return std::string("Some MAcOS draw functions");
	};
};