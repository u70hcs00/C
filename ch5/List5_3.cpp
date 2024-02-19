//  nested loops¡Gmultiplication table

#include<iostream>
using namespace std;


int main()

{

     int i,j;

     for(i=1;i<=9;i++)         //  outer loop

     {

		 for(j=1;j<=9;j++)	   //  inner loop

			 cout<<'\t'<<i<<'*'<<j<<'='<<i*j;

		 cout<<endl;

     }

	system("pause");
	return 0;
}
