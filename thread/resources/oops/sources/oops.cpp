#include "../headers/oops.hpp"
#include "../../function/headers/foo.hpp"
#include <thread>

void 
oops ()
{
            int some_locale_state = 0;			// локальная! переменная 
	       func my_func   (some_locale_state);	// класс func + конструктор по умолчанию
	std::thread my_thread (my_func);			// передали в поток класс func точнее operator ()
       
      my_thread.detach();						// отсоеденить поток
}
void
func::operator ()()
{
	for ( unsigned i=0; i<10000; i++)
	{
		countNumber (1000);
	}
};
