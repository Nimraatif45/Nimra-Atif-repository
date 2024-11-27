#include <iostream>
using namespace std;
struct student{
	
	char name[20];
	int rollnumber;
	int age;
	float markssubject1;
	float markssubject2;
	
		
	
};

	int main()
	{
		
		
		system("color  D6");
		student s1[5];
		for ( int i=0; i<5; i++){
			
			cout<<"\n ENTER DETAILS FOR STUDENT "<<i+1<<":\n";
			
			cout<<" ENTER STUDENT NAME :";
			cin.getline(s1[i].name,20) ;
			
			cout<<" ENTER ROLL NUMBER :";
			cin>>s1[i].rollnumber;
			
			cout<<" ENTER AGE :";
			cin>>s1[i].age;
			
			cout<<" ENTER MARKS OF SUBJECT 1 :";
			cin>>s1[i].markssubject1;
			
			cout<<" ENTER MARKS OF SUBJECT 2 :";
			cin>>s1[i].markssubject2;
			
			//clear the input buffer
			cin.ignore();
			
		}
		for( int i=0; i<5; i++)
		{
			system("color  C6");
			cout<<"\nSTUDENT INFORMATION :\n";
			cout<<"NAME :"<<s1[i].name <<endl;
			cout<<"ROLL NUMBER"<<s1[i].rollnumber<<endl;
			cout<<" ENTER AGE :"<<s1[i].age<<endl;
			cout<<" ENTER MARKS OF SUBJECT 1 :"<<s1[i].markssubject1<<endl;
			cout<<" ENTER MARKS OF SUBJECT 2 :"<<s1[i].markssubject2<<endl;
		
		}
		
		return 0;
	}
	