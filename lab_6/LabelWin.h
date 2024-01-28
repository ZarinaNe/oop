#pragma once
#include "Label.h"
class LabelWin : public Label
{
public:
	std::string draw() override {
		std::cout << this->Label::draw() << std::endl;
		return std::string("Some windows draw functions");
	};
};

