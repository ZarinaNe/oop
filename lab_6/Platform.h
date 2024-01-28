#pragma once
#include <string>
#include <iostream>
#include "Label.h"
#include "Button.h"
#include "ComboBox.h"
#include "TextBox.h"

class Label;
class Button;
class ComboBox;
class TextBox;

class Platform
{
private:
	std::string _name;
public:
	Platform() {
		this->setName(std::string("base class platform"));
		std::cout << this->getName() << " constructor" << std::endl;
	};
	virtual ~Platform() {
		std::cout << this->getName() << " destructor" << std::endl;
	};
	void setName(std::string name);
	std::string getName();
	virtual void buildTestPage(Label& label, TextBox& textbox, ComboBox& cmbox, Button& btn);

};

