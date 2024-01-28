#pragma once
#include "ComboBox.h"
class ComboBoxMac : public ComboBox
{
public:
	std::string draw() override {
		std::cout << this->ComboBox::draw() << std::endl;
		return std::string("Some MacOS draw functions");
	};
};