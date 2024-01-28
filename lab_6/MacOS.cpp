#include "MacOS.h"
#include "LabelMac.h"
#include "TextBoxMac.h"
#include "ButtonMac.h"
#include "ComboBoxMac.h"

void MacOS::buildTestPage(Label& label, TextBox& textbox, ComboBox& cmbox, Button& btn)
{
	label = LabelMac();
	textbox = TextBoxMac();
	cmbox = ComboBoxMac();
	btn = ButtonMac();


}
