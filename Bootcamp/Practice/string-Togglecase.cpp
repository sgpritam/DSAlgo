#include<iostream> 
using namespace std; 

// Function to convert characters 
// of a string to opposite case 
void convertOpposite(string &str) 
{ 
	int len = str.length(); 
	
	// Conversion according to ASCII values 
	for (int i=0; i<len; i++) 
	{ 
		if (str[i]>='a' && str[i]<='z') 
		//Convert lowercase to uppercase 
			str[i] = str[i] - 32; 
		else if(str[i]>='A' && str[i]<='Z') 
		//Convert uppercase to lowercase 
			str[i] = str[i] + 32; 
	} 
} 


int main() 
{ 
	string str; 
	cin>>str;
	
	convertOpposite(str); 
	
	cout << str; 
	return 0; 
} 

