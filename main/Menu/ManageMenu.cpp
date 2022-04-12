#include "ManageMenu.h"
#include "../Models/Doctor/Doctor.h"
#include "../Models/Patient/Patient.h"
#include "../Essences/Card.h"
#include "../Essences/Consultation.h"

using namespace DDI;

ManageMenu::ManageMenu(Menu mainMenu, Menu subMenu) {
	m_mainMenu = mainMenu;
	m_subMenu = subMenu;
}

int ManageMenu::runMainMenu() {
	ManageMenu::m_mainMenu.runCommand();
	return 1;
}

int ManageMenu::runSubMenu() {
	ManageMenu::m_subMenu.runCommand();
	return 1;
}

int ManageMenu::getMaintSelect() {
	return ManageMenu::m_mainMenu.getSelect();
}

int ManageMenu::getSubSelect() {
	return ManageMenu::m_subMenu.getSelect();
}