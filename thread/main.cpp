// различные способы создания и использования потока
//
#include <iostream>
#include <thread>
#include "./resources/function/headers/foo.hpp" //countStar. countNumber

int main()
{
	int n =44;
	std::thread t (countSpace);
	t.detach();
	countStar();	
}//main
