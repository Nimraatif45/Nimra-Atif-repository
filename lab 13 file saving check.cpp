#include<iostream>
#include<fstream>//header file
using namespace std;
int main()
{
	
	//creating a file
	ofstream file("newfile.txt") ; //built in function...ofstream is used to creat a file
	
     file<<"Hello my name is Nimra";
     file.close();
	
	string Text;
	//READING DATA FROM FILE
	ifstream readfile("newfile.txt");
	while	(getline(readfile,Text))
{
	cout<<Text;
	}	
	readfile.close();
	
	return 0;
}