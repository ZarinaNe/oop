#pragma once
#include "Platform.h"
class Linux : public Platform
{
public:
	Linux() : Platform() {
		this->setName(std::string("Linux"));
	};
	void buildTestPage(Label& label, TextBox& textbox, ComboBox& cmbox, Button& btn) override;
};

