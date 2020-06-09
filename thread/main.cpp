// различные способы создания и использования потока
//
#include <iostream>
#include <thread>
#include "./resources/function/headers/foo.hpp"
#include "./resources/class/headers/class.hpp"

void some(){};
int main()
{
// --------- поток из экземпляра класса operator ()() const -------------
	background_task some;
	std::thread t(some);
	t.detach();
	countSpace();
// =====================================================================

}//main
