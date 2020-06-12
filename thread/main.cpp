#include <iostream>
#include <thread>
#include "./resources/function/headers/foo.hpp"

using namespace std;
/*
void
some_function()
{}

void 
some_other_function (int)
{}
*/
std::thread f() {
				return std::thread (countSpace);		// и вернули ее в потоке.
}; // thread f()


std::thread g() {							
				std::thread t (countNumber,3000);	// передали ее в поток
				return t;								// вернули ее
}; // thread g()

/*
void f (std::thread t);

void g ()
{
	void 
	some_function();

	f (std::thread     (some_function));
	   std::thread  t  (some_function);
	f (std::move (t));

}//void g()
*/

int main() {
	std::thread t1 = f();
	t1.detach();

	std::thread t2 = g();
    t2.join();
}//main
