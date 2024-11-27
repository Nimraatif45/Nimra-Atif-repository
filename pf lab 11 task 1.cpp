
#include <iostream>
using namespace std;
struct book{

    string title;
    string author;
	int yearofpublication;
	int numberofpages;
};

	void inputbookinfo(book&b)
	{
		
		cout <<" ENTER TITLE : " <<endl;
		getline (cin,b.title);
		cout<< " ENTER AUTHOR : "  <<endl;
		getline (cin,b.author);
		cout << " ENTER YEAR OF PUBLICATION : " << endl;
		cin>>b.yearofpublication;
		cout<< " ENTER NUMBER OF PAGES : " <<endl;
		cin>>b.numberofpages ;
		
	}
	 void displaybookinfo(const book&b)
	 {
	 	cout <<" TITLE : "<<b.title <<endl;
	 	cout<< " AUTHOR : " <<b.author <<endl;
	 	cout << " YEAR OF PUBLICATION : "<<b.yearofpublication << endl;
	 	cout<< " NUMBER OF PAGES : "<<b.numberofpages <<endl;
	 	cout << "--------------------------" << endl;
	 	
	 }


	int main()
	{
		
		
		
		
		const int numbooks=5;
		book books[numbooks];
		for( int i=0 ; i<=numbooks; i++)
		{
			cout<< " ENTER THE DETAILS OF BOOK :"<<i+1 <<":" << endl;
			inputbookinfo(books[i]);
        cout << endl;
       	
		}
		
		cout << "Displaying information of all books:" << endl;
    cout << "--------------------------" << endl;
    for (int i = 0; i < numbooks; ++i) {
	system("color  D6");
        	displaybookinfo(books[i]);
    }
		return 0;
	}
		