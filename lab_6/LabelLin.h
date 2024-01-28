#pragma once
#include "Label.h"

class LabelLin : public Label {
public:
	std::string draw() override {
		std::cout << this->Label::draw() << std::endl;
		return std::string("Some linux draw functions");
	};
};