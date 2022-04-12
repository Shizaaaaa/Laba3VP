#ifndef MAIN_MENUITEM_H
#define MAIN_MENUITEM_H

namespace DDI {
	class MenuItem {
		public:
			typedef int(*Func)();
			MenuItem(char*, Func);
			Func m_func{};
			char* m_item_name{};
			char* getName();
			void print();
			int run();
	};
}
#endif