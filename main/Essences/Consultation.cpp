#include <iostream>
#include "Consultation.h"

namespace DDI {
	Consultation::Consultation() {};

	Consultation::Consultation(int timeOfReceiptStart, int timeOfReceiptEnd, string recommendations, string doctorName) {
		m_timeOfReceiptStart = timeOfReceiptStart;
		m_timeOfReceiptEnd = timeOfReceiptEnd;
		m_recommendations = recommendations;
		m_doctorName = doctorName;
	}

	void Consultation::setTimeOfReceiptStart(int timeOfReceiptStart) {
		m_timeOfReceiptStart = timeOfReceiptStart;
	}
	int Consultation::getTimeOfRecepitStart() {
		return m_timeOfReceiptStart;
	}
	void Consultation::setTimeOfReceiptEnd(int timeOfReceiptEnd) {
		m_timeOfReceiptEnd = timeOfReceiptEnd;
	}
	int Consultation::getTimeOfRecepitEnd() {
		return m_timeOfReceiptEnd;
	}
	void Consultation::setRecommendations(string recommendations) {
		m_recommendations = recommendations;
	}
	string Consultation::getRecommendations() {
		return m_recommendations;
	}
	void Consultation::setDoctorName(string doctorName) {
		m_doctorName = doctorName;
	}
	string Consultation::getDoctorName() {
		return m_doctorName;
	}
	void Consultation::print() {
		cout << "Время приёма врача: " << "с " << m_timeOfReceiptStart << ".00 до " << m_timeOfReceiptEnd << ".00" << endl;
		cout << "Рекоммендации: " << m_recommendations << endl;
		cout << "Имя врача: " << m_doctorName << endl;
	}

	ostream& operator<<(ostream& out, Consultation& obj) {
		obj.print();

		return out;
	}

	istream& operator>>(istream& in, Consultation& obj) {
		cout << "\nВведите время приёма врача (с __:__ до __:__): ";
		in >> obj.m_timeOfReceiptStart >> obj.m_timeOfReceiptEnd;
		cout << "Введите рекомендации: ";
		in >> obj.m_recommendations;
		cout << "Введите имя врача: ";
		in >> obj.m_doctorName;

		return in;
	}

	bool Consultation::operator==(const Consultation& other) {
		return m_timeOfReceiptStart == other.m_timeOfReceiptStart && m_timeOfReceiptEnd == other.m_timeOfReceiptEnd &&
			m_recommendations == other.m_recommendations && m_doctorName == other.m_doctorName;
	}

	bool Consultation::operator>(const Consultation& other) {
		return m_doctorName[0] > other.m_doctorName[0];
	}

	Consultation& Consultation::operator=(const Consultation& other) {
		m_timeOfReceiptStart = other.m_timeOfReceiptStart;
		m_timeOfReceiptEnd = other.m_timeOfReceiptEnd;
		m_recommendations = other.m_recommendations;
		m_doctorName = other.m_doctorName;
		return *this;
	}
}