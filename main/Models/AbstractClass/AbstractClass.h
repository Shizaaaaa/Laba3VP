#ifndef ABSTRACTCLASS_H
#define ABSTRACTCLASS_H
#include <string>

using namespace std;

namespace DDI {
	class User {
		protected:
			virtual void print() = 0;

			string m_name{};
			string m_surname{};
			int m_age{};
			string m_login{};
			string m_password{};
	};
}

#endif