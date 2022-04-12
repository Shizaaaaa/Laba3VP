#include <iostream>
#include <Windows.h>
#include "Menu/Menu.h"
#include "Menu/MenuItem.h"
#include "Models/Patient/Patient.h"
#include "Models/Doctor/Doctor.h"
#include "Models/AbstractClass/AbstractClass.h"
#include "Essences/Card.h"
#include "Essences/Consultation.h"
#include "Menu/ManageMenu.h"

using namespace DDI;

int maxCount = 10;
int class1_count{}, class2_count{}, class3_count{}, class4_count{};

#pragma region functions

int RootCalculation() {
	std::cout << "\nКвадратный корень из 36 равен: " << pow(36, 0.5) << std::endl;
	
	return 1;
}

int Welcome() {
	char name[20]{};
	std::cout << "\nВведите ваше имя: ";
	std::cin.ignore();
	std::cin.getline(name, 20);
	std::cout << "\nЗдравствуйте, " << name << "!" << std::endl;

	return 2;
}

int PrintPicture() {
	std::cout << "\n__$$$$$______________________________________$$$\n";
	std::cout << "__$$____$$$_______$$$$$$_$$$_$$$$$______$$$$___$\n";
	std::cout << "__$_$$_____$$$$$$__________________$$$$$$_____$$\n";
	std::cout << "__$___$__________$___________________________$__$\n";
	std::cout << "__$____$___________________________________$$___$\n";
	std::cout << "__$______$$_______________________________$_____$\n";
	std::cout << "__$_______$____________________________$$_______$\n";
	std::cout << "__$______$________________________________$_____$\n";
	std::cout << "___$____$__________________________________$___$\n";
	std::cout << "__$$___$____________________________________$___$\n";
	std::cout << "__$_$$$______________________________________$_$\n";
	std::cout << "_$___$________________________________________$$_$\n";
	std::cout << "_$________________$$$$$$____$$$$$$______________$_$\n";
	std::cout << "$__$____________$$$$$$$$____$$$$$$$$____________$_$\n";
	std::cout << "$__$__________$$__$$$$$$____$$$____$$$$_________$_$\n";
	std::cout << "$_$$________$$$_$$$__$$$____$$___$$$_$$$_________$_$\n";
	std::cout << "$_$$________$$_$$$$$$_$______$_$$$$$$$$_$_______$$_$\n";
	std::cout << "$_$$______$__$_$$$$_$$________$$_$$$$$_$__$_____$$_$\n";
	std::cout << "$_$$$____$$$_$$_$$$_$$$______$$$__$$$_$_$_$____$$$_$\n";
	std::cout << "$_$_$____$_$$__$___$$$________$$$___$__$$_$____$_$_$\n";
	std::cout << "$_$$_$__$___$$___$$$$$________$$$$$___$$$__$__$__$_$\n";
	std::cout << "_$_$_$_$$___$$$$_$$$$$________$$$$__$$$$___$____$_$\n";
	std::cout << "__$_$_$$______$$__$$_$________$$$__$$$___$__$$$$_$\n";
	std::cout << "___$$$$____$___$$____$________$___$$$___$______$\n";
	std::cout << "_____$$$$______$$____$________$___$$$_______$$\n";
	std::cout << "_______$$$$____$$___$__________$___$$______$\n";
	std::cout << "_________$$____$$___$__________$___$$____$$\n";
	std::cout << "___________$$_$$$___$__________$___$$_$$$\n";
	std::cout << "______________$_$___$__________$___$_$\n";
	std::cout << "_______________$$___$__________$___$$\n";
	std::cout << "________________$___$_$$$$$$$$_$___$\n";
	std::cout << "________________$___$$$$$$$$$$$$___$\n";
	std::cout << "_________________$__$$$$$$$$$$$$__$\n";
	std::cout << "__________________$_$$$$$$$$$$$$_$";
	std::cout << std::endl;

	return 3;
}

int exitProgramm() {
	system("cls");
	cout << "ВЫХОД ИЗ ПРОГРАММЫ!";
	system("pause");
	exit(0);
}

void addCard(Card* card) {
	int count{};
	cout << "Введите количество амбулаторных карт, которых хотите добавить: ";
	cin >> count;
	for (int i = class1_count; i < count; i++) {
		cout << "Введите информацию о карте:\n";
		cin >> card[i];
	}

	class1_count += count;
}

void addPatient(Patient* patient) {
	int count{};
	cout << "Введите количество пациентов, которых хотите добавить: ";
	cin >> count;
	for (int i = class2_count; i < count; i++) {
		cout << "Введите информацию о пациенте:\n";
		cin >> patient[i];
	}

	class2_count += count;
}

void addDoctor(Doctor* doctor) {
	int count{};
	cout << "Введите количество специальностей врачей, которые хотите добавить: ";
	cin >> count;
	for (int i = class3_count; i < count; i++) {
		cout << "Введите специальность:\n";
		cin >> doctor[i];
	}

	class3_count += count;
}
void addConsultation(Consultation* consultation) {
	int count{};
	cout << "Введите количество врачей, которых хотите добавить: ";
	cin >> count;
	for (int i = class4_count; i < count; i++) {
		cout << "Введите информацию о враче:\n";
		cin >> consultation[i];
	}

	class4_count += count;
}

void addClass(Card* card, Patient* patient, Doctor* doctor, Consultation* consultation) {
	system("cls");
	cout << "Выберете класс для добавления информации:\n1) Card\n2) Patient\n3) Doctor\n4) Consultation\n\nВведите команду: ";

	int command{};
	cin >> command;

	switch (command) {
		case 1:
			addCard(card);
			break;

		case 2:
			addPatient(patient);
			break;

		case 3:
			addDoctor(doctor);
			break;

		case 4:
			addConsultation(consultation);
			break;

		default:
			cout << "Вы ввели неверную команду, попробуйте ещё раз!\n\n";
	}
}

void printCard(Card* card) {
	for (int i = 0; i < class1_count; i++) {
		cout << "\n\nВывод информации об объектах класса Card номер " << i + 1 << "\n";
		cout << card[i] << endl;
	}
}

void printPatient(Patient* patient) {
	for (int i = 0; i < class2_count; i++) {
		cout << "\n\nВывод информации об объектах класса Patient номер " << i + 1 << "\n";
		cout << patient[i];
	}
}

void printDoctor(Doctor* doctor) {
	for (int i = 0; i < class3_count; i++) {
		cout << "\n\nВывод информации об объектах класса Doctor номер " << i + 1 << "\n";
		cout << doctor[i];
	}
}

void printConsultation(Consultation* consultation) {
	for (int i = 0; i < class4_count; i++) {
		cout << "\n\nВывод информации об объектах класса Consultation номер " << i + 1 << "\n";
		cout << consultation[i];
	}
}

void printClass(Card* card, Patient* patient, Doctor* doctor, Consultation* consultation) {
	system("cls");
	cout << "Выберете класс для вывода информации:\n1) Card\n2) Patient\n3) Doctor\n4) Consultation\n\nВведите команду: ";

	int command{};
	cin >> command;

	switch (command) {
	case 1:
		printCard(card);
		break;

	case 2:
		printPatient(patient);
		break;

	case 3:
		printDoctor(doctor);
		break;

	case 4:
		printConsultation(consultation);
		break;

	default:
		cout << "Вы ввели неверную команду, попробуйте ещё раз!\n\n";
	}
}

void sortCard(Card* card) {
	system("cls");
	for (int i = 0; i < class1_count - 1; i++) {
		if (card[i] > card[i + 1]) {
			Card tempCard = card[i + 1];
			card[i + 1] = card[i];
			card[i] = tempCard;
		}
	}

	printCard(card);
}

void sortPatient(Patient* patient) {
	system("cls");
	for (int i = 0; i < class2_count - 1; i++) {
		if (patient[i] > patient[i + 1]) {
			Card tempPatient = patient[i + 1];
			patient[i + 1] = patient[i];
			patient[i] = tempPatient;
		}
	}

	printPatient(patient);
}
void sortDoctor(Doctor* doctor) {
	system("cls");
	for (int i = 0; i < class3_count - 1; i++) {
		if (doctor[i] > doctor[i + 1]) {
			Doctor tempDoctor = doctor[i + 1];
			doctor[i + 1] = doctor[i];
			doctor[i] = tempDoctor;
		}
	}

	printDoctor(doctor);
}
void sortConsultation(Consultation* consultation) {
	system("cls");
	for (int i = 0; i < class4_count - 1; i++) {
		if (consultation[i] > consultation[i + 1]) {
			Consultation tempConsultation = consultation[i + 1];
			consultation[i + 1] = consultation[i];
			consultation[i] = tempConsultation;
		}
	}

	printConsultation(consultation);
}

void sortClass(Card* card, Patient* patient, Doctor* doctor, Consultation* consultation) {
	system("cls");
	cout << "Выберете класс для сортировки информации:\n1) Card\n2) Patient\n3) Doctor\n4) Consultation\n\nВведите команду: ";

	int command{};
	cin >> command;

	switch (command) {
	case 1:
		sortCard(card);
		break;

	case 2:
		sortPatient(patient);
		break;

	case 3:
		sortDoctor(doctor);
		break;

	case 4:
		sortConsultation(consultation);
		break;

	default:
		cout << "Вы ввели неверную команду, попробуйте ещё раз!\n\n";
	}
}

void deleteCard(Card* card) {
	printCard(card);
	cout << "\nВыберете номер объекта для удаления: ";
	int deleteNumber{};
	cin >> deleteNumber;

	for (int i = deleteNumber - 1; i < maxCount - 1; i++) {
		card[i] = card[i + 1];
	}

	class1_count--;
	cout << endl << endl;
}

void deletePatient(Patient* patient) {
	printPatient(patient);
	cout << "\nВыберете номер объекта для удаления: ";
	int deleteNumber{};
	cin >> deleteNumber;

	for (int i = deleteNumber - 1; i < maxCount - 1; i++) {
		patient[i] = patient[i + 1];
	}

	class2_count--;
	cout << endl << endl;
}

void deleteDoctor(Doctor* doctor) {
	printDoctor(doctor);
	cout << "\nВыберете номер объекта для удаления: ";
	int deleteNumber{};
	cin >> deleteNumber;

	for (int i = deleteNumber - 1; i < maxCount - 1; i++) {
		doctor[i] = doctor[i + 1];
	}

	class3_count--;
	cout << endl << endl;
}

void deleteConsultation(Consultation* consultation) {
	printConsultation(consultation);
	cout << "\nВыберете номер объекта для удаления: ";
	int deleteNumber{};
	cin >> deleteNumber;

	for (int i = deleteNumber - 1; i < maxCount - 1; i++) {
		consultation[i] = consultation[i + 1];
	}

	class4_count--;
	cout << endl << endl;
}

void deleteClass(Card* card, Patient* patient, Doctor* doctor, Consultation* consultation) {
	system("cls");
	cout << "Выберете класс для удаления информации:/n1) Card\n2) Patient\n3) Doctor\n4)Consultation\n\nВведите число:";

	int command{};
	cin >> command;

	switch (command) {
		case 1:
			deleteCard(card);
			break;

		case 2:
			deletePatient(patient);
			break;

		case 3:
			deleteDoctor(doctor);
			break;

		case 4:
			deleteConsultation(consultation);
			break;

		default:
			cout << "Вы ввели неверную команду, попробуйте ещё раз!\n";
	}
}

int infoClasses() {
	return 4;
}

int addClass() {
	return 1;
}

int printClass() {
	return 2;
}

int sortClass() {
	return 3;
}

int deleteClass() {
	return 4;
}

int exitMainMenu() {
	return 5;
}

#pragma endregion

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int items_number = 5;
	const int runMenuClasses = 5;

	Patient* patient = new Patient[maxCount];
	Doctor* doctor = new Doctor[maxCount];
	Card* card = new Card[maxCount];
	Consultation* consultation = new Consultation[maxCount];


	MenuItem items[items_number]{ MenuItem{"Вычислить корень из 36", RootCalculation}, MenuItem{"Приветствие", Welcome }, 
		MenuItem{"Картинка с псевдографикой", PrintPicture}, MenuItem{"Информация о классах", infoClasses}, MenuItem{"Выход из программы", exitProgramm} };
	Menu menu("  ГЛАВНОЕ МЕНЮ!", items, items_number);

	MenuItem items_classes[runMenuClasses]{ MenuItem{"Добавить информацию", addClass}, MenuItem{"Вывести информацию", printClass},
		MenuItem{"Отсортировать информацию", sortClass}, MenuItem{"Удалить информацию", deleteClass}, MenuItem{"Выход в главное меню", exitMainMenu} };
	Menu menu_classes("Меню управления классами!", items_classes, runMenuClasses);
	ManageMenu managerOfMenu(menu, menu_classes);

	while (managerOfMenu.runMainMenu()){
		if (managerOfMenu.getMaintSelect() == infoClasses()) {
			do {
				system("cls");
				managerOfMenu.runSubMenu();
				if (managerOfMenu.getSubSelect() == addClass()) {
					addClass(card, patient, doctor, consultation);
				}
				else if (managerOfMenu.getSubSelect() == printClass()) {
					printClass(card, patient, doctor, consultation);
				}
				else if (managerOfMenu.getSubSelect() == sortClass()) {
					sortClass(card, patient, doctor, consultation);
				}
				else if (managerOfMenu.getSubSelect() == deleteClass()) {
					deleteClass(card, patient, doctor, consultation);
				}
			} while (managerOfMenu.getSubSelect() != exitMainMenu());
			system("cls");
		}
	}

	return 0;
}

