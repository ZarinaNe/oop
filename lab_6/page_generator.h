#pragma once
#include <string>
#include "LabelWin.h"
#include "TextBox.h"
#include "ComboBox.h"
#include "Button.h"

#include "LabelWin.h"
#include "TextBoxWin.h"
#include "ComboBoxWin.h"
#include "ButtonWin.h"

#include "MacOS.h"
#include "LabelMac.h"
#include "TextBoxMac.h"
#include "ButtonMac.h"
#include "ComboBoxMac.h"

#include "Linux.h"
#include "LabelLin.h"
#include "TextBoxLin.h"
#include "ComboBoxLin.h"
#include "ButtonLin.h"


void buildTestPage(std::string os) {
	Label label1;
	TextBox text1;
	ComboBox cmbox1;
	Button btn;

	if (os == "Windows") {
		Windows win;
		win.buildTestPage(label1, text1, cmbox1, btn);
	}
	else if (os == "linux") {
		Linux lin;
		lin.buildTestPage(label1, text1, cmbox1, btn);
	}
	else if (os == "MacOS") {
		MacOS mac;
		mac.buildTestPage(label1, text1, cmbox1, btn);
	}
	else {
		std::cout << "wrong OS" << std::endl;
		return;
	}
	label1.setText(std::string("App"));
	label1.setPosition(Point2D(2, 5));
	label1.setSize(Point2D(3, 10));

	text1.setText(std::string("Test app"));
	text1.setPosition(Point2D(5, 7));
	text1.setSize(Point2D(4, 15));

	cmbox1.addItem(std::string("Var 1"));
	cmbox1.addItem(std::string("Var 2"));
	cmbox1.addItem(std::string("Var 3"));
	cmbox1.setPosition(Point2D(8, 3));

	btn.setText(std::string("Click"));
	btn.setPosition(Point2D(10, 15));

	std::cout << label1.draw() << std::endl;
	std::cout << text1.draw() << std::endl;
	std::cout << cmbox1.draw() << std::endl;
	std::cout << btn.draw() << std::endl;
}