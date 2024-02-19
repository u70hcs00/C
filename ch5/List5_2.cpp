//  1+2+...+10 ²Ä¤Tª©
#include<iostream>
using namespace std;

int main()
{
     int i=1;
     int Sum=0;
     for(;i<=10;)
     {
          Sum+=i;
          cout<<i++<<"\t"<<Sum<<endl;     
     }
	system("pause");
	return 0;
}