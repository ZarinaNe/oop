#pragma once
#include "Control.h"
#include <vector>
#include <iostream>
class ComboBox : public Control
{
private:
	std::vector<std::string> items;
    std::string _title;
public:
    ComboBox() : Control() {
        std::cout << "ComboBox constructor" << std::endl;
        this->setName(std::string("ComboBox"));
        this->setTitle(std::string("Default ComboBox"));
    };
    virtual ~ComboBox() { 
    };
    void addItem(std::string item);
    void removeItem(std::string item);
    std::string getItem(int index);
    void setItem(int index, std::string& item);
    void setTitle(std::string title);
    std::string getTitle();
    std::string draw() override;
};

