#pragma once
#include "Platform.h"
class MacOS : public Platform
{
public:
	MacOS() : Platform() {
		this->setName(std::string("MacOS"));
	};
	void buildTestPage(Label& label, TextBox& textbox, ComboBox& cmbox, Button& btn) override;
};

