#include <iostream>
#include "Menu.h"

namespace DDI {
	Menu::Menu(char *title, MenuItem *items, size_t count) {
		m_title = title;
		m_items = items;
		m_count = count;
	}

	Menu::Menu() {}

	int Menu::getSelect() const {
		return m_select;
	}

	bool Menu::isRun() const {
		return m_running;
	}

	size_t Menu::getCount() const {
		return m_count;
	}

	char *Menu::getTitle() {
		return m_title;
	}

	MenuItem *Menu::getItems() {
		return m_items;
	}

	void Menu::print() {
		std::cout << m_title << "\n";
		for (size_t i{}; i < m_count; ++i) {
			std::cout << "   ";
			std::cout << i + 1 << ". ";
			m_items[i].print();
			std::cout << std::endl;
		}
	}

	int Menu::runCommand() {
		print();
		std::cout << "\n   ¬ведите номер пункта меню: ";
		std::cin >> m_select;
		return m_items[m_select - 1].run();
	}

	void Menu::setMenuPtr(int *ptr) {
		m_ptr = ptr;
	}
}