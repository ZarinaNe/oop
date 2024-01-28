#pragma once
#include "ComboBox.h"
class ComboBoxWin : public ComboBox
{
public:
	std::string draw() override {
		std::cout << this->ComboBox::draw() << std::endl;
		return std::string("Some windows draw functions");
	};
};