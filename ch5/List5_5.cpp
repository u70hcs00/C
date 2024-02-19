#include<iostream>
using namespace std;


int main()
{
int i = 0;
while (true){ // loop-continuation-condition is always true
	cout << "infinite loop...\n";
	if (i == 5) // when i = 5,
      break;    // immediately breaks out the loop
      //continue; // breaks out the iteration
    i++;
}

//  for(;;)
//  	cout << "infinite loop...\n";
  
    
    
	system("pause");
	return 0;
}
