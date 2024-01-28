#pragma once
#include "Button.h"
class ButtonLin : public Button
{
public:
	std::string draw() override {
		std::cout << this->Button::draw() << std::endl;
		return std::string("Some linux draw functions");
	};
};