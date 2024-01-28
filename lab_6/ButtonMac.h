#pragma once
#include "Button.h"
class ButtonMac : public Button
{
public:
	std::string draw() override {
		std::cout << this->Button::draw() << std::endl;
		return std::string("Some MacOS draw functions");
	};
};
