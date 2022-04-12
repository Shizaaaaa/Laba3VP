#include <iostream>
#include "Patient.h"

namespace DDI {
	Patient::Patient() {};
	Patient::Patient(Card card) {
		m_numberCard = card.getNumberCard();
	}
	/*Patient::Patient(string name, string surname, int age, string login, string password, Card card) {
		m_name = name;
		m_surname = surname;
		m_age = age;
		m_login = login;
		m_password = password;
		m_numberCard = card.getNumberCard();
	}*/

	ostream& operator<<(ostream& out, Patient& obj) {
		obj.print();

		return out;
	}

	istream& operator>>(istream& in, Patient& obj) {
		cout << "\n¬ведите им€: ";
		in >> obj.m_name;
		cout << "¬ведите фамилию: ";
		in >> obj.m_surname;
		cout << "¬ведите возраст: ";
		in >> obj.m_age;
		cout << "¬ведите логин: ";
		in >> obj.m_login;
		cout << "¬ведите пароль: ";
		in >> obj.m_password;

		return in;
	}

	bool Patient::operator==(const Patient& other) {
		return m_name == other.m_name && m_surname == other.m_surname && m_age == other.m_age
			&& m_login == other.m_login && m_password == other.m_password && m_numberCard == other.m_numberCard;
	}

	bool Patient::operator>(const Patient& other) {
		return m_surname[0] > other.m_surname[0];
	}

	Patient& Patient::operator=(const Patient& other) {
		m_name = other.m_name;
		m_surname = other.m_surname;
		m_age = other.m_age;
		m_login = other.m_login;
		m_password = other.m_password;
		m_numberCard = other.m_numberCard;
		return *this;
	}
}