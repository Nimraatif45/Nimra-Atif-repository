#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char source[]="Hello,World!";
	char destination [50];//make sure the destination array
	//use
	strcpy(destination,source);
	cout<<"source string :"<<source<<endl;
	cout<<"destination string :"<<destination <<endl;
	return 0;
}