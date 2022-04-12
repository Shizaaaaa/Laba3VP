#ifndef CONSULTATION_H
#define CONSULTATION_H
#include <string>

using namespace std;

namespace DDI {
	class Consultation {
		public:
			Consultation();
			Consultation(int timeOfReceiptStart, int timeOfReceiptEnd, string recommendations, string doctorName);
			void setTimeOfReceiptStart(int timeOfReceiptStart);
			int getTimeOfRecepitStart();
			void setTimeOfReceiptEnd(int timeOfReceiptEnd);
			int getTimeOfRecepitEnd();
			void setRecommendations(string recommendations);
			string getRecommendations();
			void setDoctorName(string doctorName);
			string getDoctorName();
			void print();

			friend ostream& operator<<(ostream& out, Consultation& obj);
			friend istream& operator>>(istream& in, Consultation& obj);
			bool operator==(const Consultation& other);
			bool operator>(const Consultation& other);
			Consultation& operator=(const Consultation& other);

		private:
			int m_timeOfReceiptStart{};
			int m_timeOfReceiptEnd{};
			string m_recommendations{};
			string m_doctorName{};
	};
}

#endif