#include "../headers/foo.hpp"
#include <iostream>
using namespace std;

int n=9000;

void 
countStar(){
	    for (int i=0; i<n; i++) { 
		cout<<"*";
	    }
}

void
countSpace(){	
	    for (int i=0; i<n; i++) { 
		cout<<" ";
	    }
}

void
countNumber(int k){
	     for (int i=0; i<k; i++) { 
		 cout<<i;
	     }
}

