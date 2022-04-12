#ifndef CARD_H
#define CARD_H
#include <string>
#include <vector>

using namespace std;

namespace DDI {
	class Card {
		public:
			Card();
			Card(string numberCard, vector<string>&medicalHistory);
			void setNumberCard(string numberCard);
			string getNumberCard();
			void setMedicalHistory(vector<string>&medicalHistory);
			vector<string> getMedicalHistory();
			void print();

			friend ostream& operator<<(ostream& out, Card& obj);
			friend istream& operator>>(istream& in, Card& obj);
			bool operator==(const Card& other);
			bool operator>(const Card& other);
			Card& operator=(const Card& other);

		protected:
			string m_numberCard{};
			vector<string> m_medicalHistory{};
	};
}

#endif
