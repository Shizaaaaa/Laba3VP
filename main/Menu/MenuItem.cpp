#include "MenuItem.h"
#include <iostream>

namespace DDI {
	MenuItem::MenuItem(char* itemName, Func func) {
		m_item_name = itemName;
		m_func = func;
	}

	char* MenuItem::getName() {
		return m_item_name;
	}

	void MenuItem::print() {
		std::cout << m_item_name;
	}

	int MenuItem::run() {
		return m_func();
	}
}