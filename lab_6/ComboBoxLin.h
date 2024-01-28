#pragma once
#include "ComboBox.h"
class ComboBoxLin : public ComboBox
{
public:
	std::string draw() override {
		std::cout << this->ComboBox::draw() << std::endl;
		return std::string("Some Linux draw functions");
	};
};