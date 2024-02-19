#include<iostream>
using namespace std;
int main(void)
{
	int asize;
	int i;
	int* a;		

	cout << " Enter the size of the array¡G ";
	cin >> asize;
	  a = new int[asize];

	for(i = 0; i < asize; i++)
		a[i] = i; 

	for(i=0; i<asize; i++)
		cout<<" a["<< i <<"] = "<< a[i] <<'\n';

	delete[] a;
		system("pause");
    return (0);			
}
