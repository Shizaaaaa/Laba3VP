#include <iostream>
#include "Doctor.h"

namespace DDI {
	Doctor::Doctor() {};

	Doctor::Doctor(string spesiality) {
		m_speciality = spesiality;
	}

	void Doctor::setSpeciality(string speciality) {
		m_speciality = speciality;
	}
	string Doctor::getSpeciality() {
		return m_speciality;
	}

	ostream& operator<<(ostream& out, Doctor& obj) {
		obj.print();

		return out;
	}

	istream& operator>>(istream& in, Doctor& obj) {
		cout << "\n¬ведите специальность: ";
		in >> obj.m_speciality;

		return in;
	}

	bool Doctor::operator==(const Doctor& other) {
		return m_speciality == other.m_speciality;
	}

	bool Doctor::operator>(const Doctor& other) {
		return m_speciality[0] > other.m_speciality[0];
	}

	Doctor& Doctor::operator=(const Doctor& other) {
		m_speciality = other.m_speciality;
		return *this;
	}
}
