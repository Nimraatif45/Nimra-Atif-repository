#include<iostream>                                                                                        
using namespace std; 
//function defination 
void passbyvalue(int num)
{
num=num+10;
cout<<" INSIDE FUNCTION (pass by value ): "	<<num<<endl;
}

void product(int num)
{
num=num*10;		
cout<<" INSIDE FUNCTION (pass by value ): "	<<num<<endl;	
}

void subtraction(int num)
{
num=num-10;		
cout<<" INSIDE FUNCTION (pass by value ): "	<<num<<endl;	
}
//main function
int main()
{
	int number=5;
	cout<<" BEFORE FUNCTION CALL :" <<number <<endl;
	passbyvalue(number);
	product(number);
	subtraction(number);
	
	return 0;
}
