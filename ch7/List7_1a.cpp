#include<iostream>
using namespace std;
int main(void)
{
	int i;
	int ary[5];

	cout<< "Please input 5 integers¡G\n";
	for(i = 0; i < 5; i++){
	 cout << "No." << i + 1 << ": ";
	 cin >> ary[i];
	}
	int sum = 0;      //sum
	for(i = 0; i < 5; i++)
		sum += ary[i];
	cout<< "The sum is " << sum <<"\n";
	cout << ary << " " << *ary << " " << &ary;
    return (0);
}
