#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
#include "../AbstractClass/AbstractClass.h"
#include "../../Essences/Card.h"

using namespace std;

namespace DDI {
	class Patient : public User, public Card {
		public:
			Patient();
			Patient(Card card);
			//Patient(string name, string surname, int age, string login, string password, Card card);
			void print() {
				cout << "\n���: " << m_name << endl;
				cout << "�������: " << m_surname << endl;
				cout << "�������: " << m_age << endl;
				cout << "�����: " << m_login << endl;
				cout << "������: " << m_password << endl;
				cout << "����� ������������ �����: " << m_numberCard << endl;
			}

			friend ostream& operator<<(ostream& out, Patient& obj);
			friend istream& operator>>(istream& in, Patient& obj);
			bool operator==(const Patient& other);
			bool operator>(const Patient& other);
			Patient& operator=(const Patient& other);
	};
}

#endif