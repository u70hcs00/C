#include <iostream>
using namespace std;
  
int main()
{
 cout << "Enter a lowercase letter: ";
 char lowercaseLetter;
 cin >> lowercaseLetter;
  
 char uppercaseLetter = 
   static_cast<char>('A' + (lowercaseLetter - 'a'));
 
 cout << "The corresponding uppercase letter is "
   << uppercaseLetter << endl;
 
 return 0;
}
