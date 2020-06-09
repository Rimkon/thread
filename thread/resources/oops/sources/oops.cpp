#include "../headers/oops.hpp"
#include "../../function/headers/foo.hpp"
#include <thread>

void 
oops ()
{
               int  some_locale_state = 0;
	      func  my_func (some_locale_state);
	std::thread my_thread (my_func);
       
       	my_thread.detach();
}
void
func::operator ()()
{
	for ( unsigned i=0; i<10000; i++)
	{
		countNumber (i);
	}
};
