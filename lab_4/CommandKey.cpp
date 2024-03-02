#include "CommandKey.h"

//Этот метод устанавливает вектор клавиш, который передается в качестве аргумента. Внутри метода вектор _keys класса CommandKey присваивается 
//значению, переданному в параметре keys
void CommandKey::setKeys(std::vector<Key> keys)
{
	_keys = keys;
}

//Этот метод выводит на экран команды, связанные с клавишами.
void CommandKey::getKeys()
{
	for (auto i : _keys) {
		if (!(_keys[0].Command == "Shift" && _keys[1].Command == "a"))
		{
			std::cout << i.Command << " ";
		}
	}
	std::cout << " ";
}

void CommandKey::cmdDo() {
	if (_keys.size() == 2) {
		if (_keys[0].Command == "Shift" && _keys[1].Command == "a") {
			std::cout << "Volume up +15%" << std::endl;
			return;
		}
	}
	getKeys();
		//std::cout << std::endl;
	}


void CommandKey::cmdUndo()
{
	if (_keys.size() == 2) {
		if (_keys[0].Command == "Shift" && _keys[1].Command == "a") {
			std::cout << "Volume up -15%" << std::endl;
			return;
		}
	}
	getKeys();
}
