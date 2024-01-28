#pragma once
#include "Label.h"
class LabelMac : public Label {
public:
	std::string draw() override {
		std::cout << this->Label::draw() << std::endl;
		return std::string("Some MacOS draw functions");
	};
 };