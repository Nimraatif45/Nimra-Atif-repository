#include<iostream>                                                                                        
using namespace std; 
//function defination 
void passbyvalue(int num)
{
	
num=num+10;
cout<<" INSIDE FUNCTION (pass by value ): "	<<num<<endl;

}

int main()
{
	int number=5;
	cout<<" BEFORE FUNCTION CALL :" <<number <<endl;
	passbyvalue(number);
	cout<<" AFTER FUNCTION CALL : " <<number <<endl;
	
	
	return 0;
}





