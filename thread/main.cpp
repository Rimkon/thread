#include <iostream>
#include <thread>
#include "./resources/function/headers/foo.hpp"

using namespace std;



std::thread f() {
		return std::thread (countSpace);	// и вернули ее в потоке.
}; // thread f()


std::thread g() {							
                 std::thread t (countNumber,3000);	// передали ее в поток
				return t;								// вернули ее
}; // thread g()


int main() {
	std::thread t1 = f();
	t1.detach();

	std::thread t2 = g();
    t2.join();
}//main
