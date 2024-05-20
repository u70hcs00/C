#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main()
{
	ifstream input("scores.txt");
 
// Read data
	string firstName;
	char mi;
	string lastName;
	int score;
	input >> firstName >> mi >> lastName >> score;
 	cout << firstName << "john " << mi << " " << lastName << " "
  		 << score << endl;
 
  	input >> firstName >> mi >> lastName >> score;
	cout << firstName << " " << mi << " " << lastName << " "
         << score << endl;

    input.close();
 
    cout << "Done" << endl;
 	
 return 0;
}
