#pragma once
#include "Platform.h"
class Windows : public Platform
{
public:
    Windows() : Platform() {
        this->setName(std::string("Windows"));
    };
    void buildTestPage(Label& label, TextBox& textbox, ComboBox& cmbox, Button& btn) override;
};

