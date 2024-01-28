#pragma once
#include "Button.h"
class ButtonWin : public Button
{
public:
	std::string draw() override {
		std::cout << this->Button::draw() << std::endl;
		return std::string("Some windows draw functions");
	};
};