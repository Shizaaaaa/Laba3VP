#ifndef MANAGEMENU_H
#define MANAGEMENU_H

#include "Menu.h"
#include "MenuItem.h"
#include "../Models/Doctor/Doctor.h"
#include "../Models/Patient/Patient.h"
#include "../Essences/Card.h"
#include "../Essences/Consultation.h"

using namespace DDI;

class ManageMenu {
	public:
		ManageMenu(Menu mainMenu, Menu subMenu);
		int runMainMenu();
		int runSubMenu();
		int getMaintSelect();
		int getSubSelect();

	private:
		Menu m_mainMenu;
		Menu m_subMenu;
};


#endif // !MANAGEMENU_H
