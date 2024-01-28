#pragma once
#include "Control.h"
#include <iostream>
class Label : public Control
{
private:
    std::string _text;
public:
    Label() : Control() {
        std::cout << "label constructor" << std::endl;
        this->setName("Label");
    };
    Label(std::string& text) : Control() {
        this->_text = text;
    };
    virtual ~Label() {};
    void setText(std::string text);
    std::string getText();
    virtual std::string draw() override;
};

