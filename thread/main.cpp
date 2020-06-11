#include <iostream>
#include <thread>
#include "./resources/function/headers/foo.hpp"

int main()
{
<<<<<<< HEAD
	{
	oops();
	}
	int n =44;
	func i(n);
countSpace();
countStar();
=======
	std::thread t ([]{
				countNumber(1500);
				countStar();
				}
			);
	t.detach();
	countSpace();
>>>>>>> 0d99404390b9814457ccf64287b04768066d11bb
}//main
