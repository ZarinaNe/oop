#pragma once
#include "TextBox.h"
class TextBoxWin : public TextBox
{
public:
	std::string draw() override {
		std::cout << this->TextBox::draw() << std::endl;
		return std::string("Some windows draw functions");
	};
};