#pragma once


struct func
{
	int & i;
	func (int &i_):i(i_){};
	
	void
	operator ()();
};			     

void
oops();
