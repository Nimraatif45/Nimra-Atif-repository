
#include <iostream>
using namespace std;
struct studentgrading {
	string name ;
	int sapid;
	string address;
	string departmant;
	int marksofsub1;
	int marksofsub2;
	

       int calculatemaxmarks(     )
       {
       	
       	return (marksofsub1 > marksofsub2)? marksofsub1 : marksofsub2;
       	
	   }
         void displaystudentinfo()
         {
         	
         	cout<<" NAME  : " << name <<endl ;
         	 
         	 cout<< " SAP ID : " << sapid <<endl;
         	
         	 cout<<" ADDRESS : " <<address << endl;
         	 
         	 cout<< " DEPARTMENT : " <<departmant <<endl;
         	 
         	 cout<<" SUBJECT 01 : "<<marksofsub1 ;
         	cout<<" SUBJECT 02 : "<<marksofsub2 ;
         	 
         	cout<< " Max Nnumbers " << calculatemaxmarks() << endl;
         	
         	cout << "-----------------------------" << endl;
		 }
	};
            int main() {
            	system("color B1");
             const int numstudent=5;
             studentgrading student [numstudent];
             
              for( int i =0 ; i<numstudent ; i++)
              {
              	
              	cout<< " ENTER THE DETAILS OF THE STUDENT : "<<i+1 <<endl;
              	
              	cout<<" NAME OF THE STUDENT : ";
         	 getline ( cin , student[i] .name);
         	 cout<< " SAP ID : ";
         	cin>>  student[i] . sapid ;
         	 cout<<" ADDRESS : ";
         	 cin.ignore(); 
         	 getline  ( cin, student[i] . address) ;
         	 cout<< "  DEPARTMENT : ";
         	 getline ( cin , student[i] . departmant );
         	 cout<<" MARKS OF SUBJECT 01 : ";
         	 cin>> student[i] . marksofsub1 ;
         	 cout<< " MARKS OF SUBJECT 01 : ";
         	cin>> student[i] . marksofsub2 ;
         	
         	cout << "-----------------------------" << endl;
              	
			  }
			  
		 
			  cout<< "  STUDENT INFORMATION : " << endl;
			  for(  int i =0 ; i<numstudent ; i++)
			  
			  {
			  	 
			 student [i] . displaystudentinfo();
			  	
			  }
			  
			  
		return 0;	  
			  
}







