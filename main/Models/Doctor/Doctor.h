#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>
#include "../AbstractClass/AbstractClass.h"

using namespace std;

namespace DDI {
	class Doctor : public User {
		public:
			Doctor();
			Doctor(string speciality);
			void setSpeciality(string speciality);
			string getSpeciality();
			void print() {
				cout << "\nСпециальность: " << m_speciality << endl;
			}

			friend ostream& operator<<(ostream& out, Doctor& obj);
			friend istream& operator>>(istream& in, Doctor& obj);
			bool operator==(const Doctor& other);
			bool operator>(const Doctor& other);
			Doctor& operator=(const Doctor& other);

		private:
			string m_speciality{};
	};
}

#endif