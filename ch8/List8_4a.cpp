#include<iomanip>
#include<iostream>
using namespace std;
void sum(int **x, int **y, int **z, int R, int C)
{
	for(int i=0; i<R; i++)				
		for(int j=0; j<C; j++)
			z[i][j]=x[i][j]+y[i][j];
}

int main()
{
	int Row, Column;

	cout<<" Please input the row size ";
	cin>>Row;
	cout<<" Please input the column size  ";
	cin>>Column;

	int **x=new int *[Row];
	for(int i=0; i<Row; i++)
	{
		x[i]=new int [Column];
	}
	int **y=new int *[Row];
	for(int i=0; i<Row; i++)
	{
		y[i]=new int [Column];
	}
	int **z=new int *[Row];
	for(int i=0; i<Row; i++)
	{
		z[i]=new int [Column];
	}

	for(int i=0; i<Row; i++)
		for(int j=0; j<Column; j++)
		{
			cout<<" Input x["<<i+1<<"]["<<j+1<<"]= ";
			cin>>x[i][j];
		}
	for(int i=0; i<Row; i++)
		for(int j=0; j<Column; j++)
		{
			cout<<" Input y["<<i+1<<"]["<<j+1<<"]= ";
			cin>>y[i][j];
		}

	sum(x, y, z, Row, Column);

	for(int i = 0; i < Row; i++)    
	{
		for(int j = 0; j < Column; j++)
			cout<< setw(3) << z[i][j];
		cout<< '\n';
	}

	for(int i=0; i<Row; i++)
	{
		delete [] x[i];
		delete [] y[i];
		delete [] z[i];
	}
	delete [] x;
	delete [] y;
	delete [] z;
	system("pause");
	return 0;
}
