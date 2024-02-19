#include<iostream>
using namespace std;
int x=555;		/*---1---*/
void print_x(void)
{
	cout<<" in print_x() x = "<< x <<'\n';
}
int main(void)
{
	cout << " global x = " << x << '\n';
	int x = 333;			/*---2---*/
	cout << " in main() x = " << x << '\n';
	for(int i = 0; i < 5; i++)
	{
		int x = i * 100;	/*---3---*/
		cout << " in loop x = " << x << '\n';
	}
		cout << " in main x = " << x << '\n';
		cout << " global ::x = " << ::x << '\n';
		print_x();
		system("pause");
return (0);
}
