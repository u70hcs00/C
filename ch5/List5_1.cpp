//  1+2+...+10

#include<iostream>
using namespace std;


int main()

{

     int i;

     int Sum=0;//   Set initial value

     for(i=1;i<=10;i++)

     {

          Sum+=i;

          cout<<i<<"\t"<<Sum<<endl;

     }

	system("pause");
	return 0;
}
