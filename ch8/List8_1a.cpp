#include<iomanip>
#include<iostream>
using namespace std;
void sum(int x[][3], int y[][3], int z[][3])
{
	for(int i = 0; i < 2; i++)	 //Find sum of two matices
		for(int j = 0; j < 3; j++)
			z[i][j] = x[i][j] + y[i][j];
}

int main(void)
{
	int x[2][3]={{1, 2, 3},{4, 5, 6}};
	int y[2][3]={{1, 5, 8},{5, 3, 1}};
	int z[2][3]={{0, 0, 0},{0, 0, 0}};
	sum(x, y, z);
	for(int i = 0; i < 2; i++)   //Show results
	{
		for(int j = 0; j < 3; j++)
			cout << setw(3) << z[i][j];
		cout<< '\n';
	}
	return (0);
}
