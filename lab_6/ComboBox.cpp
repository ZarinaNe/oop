#include "ComboBox.h"
#include <iostream>

void ComboBox::addItem(std::string item)
{
	Point2D size = this->getSize();
	this->setSize(Point2D(size.x + 3, size.y + 3));
	this->items.emplace_back(item);
}

void ComboBox::removeItem(std::string item)
{
	this->items.erase(std::remove(this->items.begin(), this->items.end(), item), this->items.end());
}

std::string ComboBox::getItem(int index)
{
	return std::string(this->items.at(index));
}

void ComboBox::setItem(int index, std::string& item)
{
	this->items.at(index) = item;
}

void ComboBox::setTitle(std::string title)
{
	this->_title = title;
}

std::string ComboBox::getTitle()
{
	return std::string(this->_title);
}

std::string ComboBox::draw()
{
	std::cout << this->Control::draw() << std::endl;
	for (int i = 0; i < this->items.size(); i++) {
		std::cout << i << "-" << this->items.at(i) << std::endl;
	}
	return std::string(this->_title);
}
