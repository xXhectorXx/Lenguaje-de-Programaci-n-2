

#include<fstream>
#include<iostream>
#include "my_string.h"
#include "my_string.cpp"
using namespace std;

int main ()
{
	
	std::string 	str = "hola"; 
	std::string a, b, c; 
	a= str + str; 
	
	b = a; 
	c = a+b;
	c = " ";
	cout<< b[3]<<endl;
	cout<<a;
	a[1]  = 'H'; 
	
}
