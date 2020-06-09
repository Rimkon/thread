// различные способы создания и использования потока
//
#include <iostream>
#include <thread>
#include "./resources/function/headers/foo.hpp"
#include "./resources/class/headers/class.hpp"
#include "./resources/oops/headers/oops.hpp"

void some(){};
int main()
{
// ---------- создание потока -------------------------------------------
//
/*	std::thread t (countSpace);
	t.detach();
	countNumber(); */
// ======================================================================


// --------- поток из экземпляра класса operator ()() const -------------
/*
	{
	background_task some;
	std::thread t(some);
	t.detach();
	countSpace();
	}
*/
// ======================================================================


// ----------- поток использую лямбда функцию --------------------------
/*
	std::thread t ([] {
			      countSpace();
			   });
	t.detach();	
	countStar();*/
// =====================================================================

	oops();
int n =44;
func i(n);
}//main
