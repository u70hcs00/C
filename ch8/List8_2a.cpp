#include<iostream>
using namespace std;
int main()    
{
	int value = 2;		
	int *ptr_to_int = &value;	//1st pointer
	int ** ptr_to_ptr =  &ptr_to_int ;	//ptr to ptr

	cout << "   Name      |   Address     |  Value \n";		
	cout << "----------------------------------------------\n";

	cout << "ptr_to_ptr   |  " << &ptr_to_ptr << "   |  " << ptr_to_ptr << endl;
					//print address and value of ptr_to_ptr 
	cout <<	"ptr_to_int   |  " << &ptr_to_int << "   |  " << ptr_to_int << endl;
					//print address and value of ptr_to_int 
	cout << "value        |  " << &value << "   |  " << value << endl;
					//print address and value of value 
	cout << "\n*ptr_to_ptr  |  **********   |  " << *ptr_to_ptr << endl;
					//print value of ptr_to_ptr pointed 
	cout << "**ptr_to_ptr |  **********   |  " << **ptr_to_ptr << endl;
					// print value of ptr_to_ptr pointed pointed 
	system("pause");
	return 0;
}        //¥Dµ{¦¡
