#include "Linux.h"
#include "LabelLin.h"
#include "TextBoxLin.h"
#include "ComboBoxLin.h"
#include "ButtonLin.h"


void Linux::buildTestPage(Label& label, TextBox& textbox, ComboBox& cmbox, Button& btn)
{
	label = LabelLin();
	textbox = TextBoxLin();
	cmbox = ComboBoxLin();
	btn = ButtonLin();

}
