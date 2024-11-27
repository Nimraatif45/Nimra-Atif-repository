//?The User structure has a member
// variable name to store the username. 
//?The program prompts the user
// to enter their username,
 //simulates a login process
 // (you should replace this with actual
 // authentication logic), 
 //and then displays a personalized
 // welcome message upon successful login.
 
 #include <iostream>
using namespace std;
struct user
{    
 string name;
 
 
};
 
 int main( )
 {
 	system ("color DF");
 	user user;
 	string predefinedusername= "admin";
 	cout << " ENTER YOU USERNAME :"<< endl ;
 	getline( cin, user.name   );
 	if ( user.name == predefinedusername)
 	{
 		cout << "  WELCOME ,"<< user.name  << " ! YOU  HAVE SUCCESSFULLY LOGGED IN.  "<<endl; 
 		
	 }
	 else 
	 {
	 	
	 	cout << "  ACCESS FAILED . INVALID USERNAME ."<<endl; 
 		
	 }
 	return 0;
 	
 }
 
 
 
 
 