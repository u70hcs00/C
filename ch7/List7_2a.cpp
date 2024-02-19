#include<iostream>
using namespace std;
int main(void)
{
	int i;
	int ninzu=0 ;		//number of failing students
	int tensu[6];		//score array
	int rakudai[6];		//index of failing students

	cout<<" Please input 6 grades¡G \n";
	for( i = 0 ; i < 6 ; i++)
	{
		cout<< "No " << i+1 << " "; //There is no number "0"
		cin>> tensu[i];
		
		if( tensu[i] < 60){
			rakudai[ninzu] = i; //record the index
			ninzu++; 
		}
	}

	cout<< " There are " << ninzu << " students who failed. They are \n";
	
	for( i = 0 ; i < ninzu ; i++)
		cout<< "NO: " << rakudai[i] + 1 << " with grade " 
		<< tensu[rakudai[i]] << "\n";

		system("pause");
return (0);


}
