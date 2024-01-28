#include "Windows.h"

#include "LabelWin.h"
#include "TextBoxWin.h"
#include "ComboBoxWin.h"
#include "ButtonWin.h"

void Windows::buildTestPage(Label& label, TextBox& textbox, ComboBox& cmbox, Button& btn)
{
	label = LabelWin();
	textbox = TextBoxWin();
	cmbox = ComboBoxWin();
	btn = ButtonWin();
}
