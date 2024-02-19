#include <cstdio>
#include <stdlib.h>
#include<iostream>
using namespace std;
#define ROW 2
#define COL 3
int main(void)
{
	int i, j;
	int **a; 
	int b[ROW][COL]={1, 2, 3, 4, 5, 6};

	a = new int* [ROW];
	for ( i = 0; i < ROW; i++ )
	{
	  a[i] = new int[COL];
	}
	for ( i = 0; i < ROW; i++ )
	{
		for ( j = 0; j < COL; j++ )
		{
			a[i][j] = i + j;
			// printf("%d ", a[i][j]);
			cout<< &b[i][j] << "  ";
		}
		cout << endl;
		cout << "b[" << i << "] = " << b[i] << endl;
	}
     cout << endl;
     cout << "&b = " << &b << endl;	
	 cout << endl;
	 cout << "**a = " << **a <<endl;
	 cout << "*a = " << *a << " " << *(a+1) << endl;
     cout << "a[0] = " << a[0] << " " << a[1] << endl;
     cout << "&a[0][0] = " << &a[0][0] << " " 
	      << "&a[0][1] = " << &a[0][1] << " "
		  << "&a[0][2] = " << &a[0][2] << endl;
     cout << "&a[1][0] = " << &a[1][0] << " " 
	      << "&a[1][1] = " << &a[1][1] << " "
		  << "&a[1][2] = " << &a[1][2] << endl;		  
	 cout << endl;
	 cout << "a = " << a << " " << &a[0] << endl;
     cout << "&a = " << &a << endl;

	delete [] a;
	system("pause");
	return 0;
}
