#include <iostream>
#include "Card.h"

namespace DDI {
	Card::Card() {};

	Card::Card(string numberCard, vector<string>&medicalHistory) {
		m_numberCard = numberCard;
		m_medicalHistory = medicalHistory;
	}

	void Card::setNumberCard(string numberCard) {
		m_numberCard = numberCard;
	}
	string Card::getNumberCard() {
		return m_numberCard;
	}
	void Card::setMedicalHistory(vector<string>&medicalHistory) {
		m_medicalHistory = medicalHistory;
	}
	vector<string> Card::getMedicalHistory() {
		return m_medicalHistory;
	}
	void Card::print() {
		cout << "\nНомер амбулаторной карты: " << m_numberCard << endl;
		cout << "История болезней: ";
		cout << endl;
		for (int i = 0; i < m_medicalHistory.size(); i++) {
			cout << i + 1 << ") " << m_medicalHistory[i] << endl;
		}
	}

	ostream& operator<<(ostream& out, Card& obj) {
		obj.print();

		return out;
	}

	istream& operator>>(istream& in, Card& obj) {
		cout << "\nВведите номер амбулаторной карты: ";
		in >> obj.m_numberCard;
		cout << "Введите количество болезней: ";
		int count{};
		string oneDisease{};
		in >> count;
		cout << "Введите историю болезней: ";
		for (int i = 0; i < count; i++) {
			in >> oneDisease;
			obj.m_medicalHistory.push_back(oneDisease);
		}

		return in;
	}

	bool Card::operator==(const Card& other) {
		return m_numberCard == other.m_numberCard && m_medicalHistory == other.m_medicalHistory;
	}

	bool Card::operator>(const Card& other){
		return m_medicalHistory > other.m_medicalHistory;
	}

	Card& Card::operator=(const Card& other) {
		m_numberCard = other.m_numberCard;
		m_medicalHistory = other.m_medicalHistory;
		return *this;
	}
}