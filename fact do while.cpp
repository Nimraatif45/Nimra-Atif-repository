#include<iostream>
using namespace std;
int main()
{
	int n;
	long fact=1.0;
	int i=1;
		cout<<"Enter an Integer = ";
	cin>>n;
	do
	{
		i++;
	fact*=i;
	
	}
	while(i<=n);
		
	cout<<"fact of "<<n <<"is :"<<fact;
	
		return 0;
}