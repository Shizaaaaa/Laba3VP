#ifndef MAIN_MENU_H
#define MAIN_MENU_H
#include "MenuItem.h"
#include <cstddef>

namespace DDI {
	class Menu {
		public:
			Menu();
			Menu(char*, MenuItem*, size_t);
			int getSelect() const;
			bool isRun() const;
			char *getTitle();
			size_t getCount() const;
			MenuItem *getItems();
			void print();
			int runCommand();
			void setMenuPtr(int* ptr);

		private:
			int m_select{ -1 };
			size_t m_count{};
			bool m_running{};
			char *m_title{};
			MenuItem *m_items{};
			int *m_ptr = nullptr;
	};
}

#endif
