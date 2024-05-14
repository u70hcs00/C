#include<iostream>
using namespace std;

int main()
{
	string* p = new string("abcdefg");
	cout << "The first three characters in the string are "
		 << (*p).substr(0, 3) << endl;
	cout << "The length of the string is "
		 << (*p).length() << endl;
		 
	cout << "The first three characters in the string are "
		 << p->substr(0, 3) << endl;
	cout << "The length of the string is "
		 << p->length() << endl;
		 	 		 
}
