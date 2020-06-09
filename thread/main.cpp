// различные способы создания и использования потока
//
#include <iostream>
#include <thread>
#include "./resources/function/headers/foo.hpp"

int main()
{
	std::thread t ([]{
				countNumber(1500);
				countStar();
				}
			);
	t.detach();
	countSpace();
}//main
