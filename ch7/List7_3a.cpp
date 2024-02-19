#include<iostream>
using namespace std;
double avg(int t[]);
int main()
{
	int test[5];	
	cout << "Please input 5 scores \n";
    for(int i = 0; i < 5; i++){
		cin >> test[i];
	}
	double ans = avg(test);
	cout << "The average of the grades is " << ans << "\n";
	system("pause");
    return 0;
}
double avg(int t[])
//double avg(int *t)
{
   double sum = 0;
   for(int i = 0; i < 5; i++){
		sum += t[i];
	}
   return sum/5;
}
