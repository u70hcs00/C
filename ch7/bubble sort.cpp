//Bubble Sort
#include<iostream>
using namespace std;


int main()
{
	int i,j,k, tmp1, tmp2;
	int a[5]={1,4,2,6,8};
    
	for(i=0;i<4;i++){
		for(j=0;j<4-i;j++){
			if (a[j] >a[j+1]){
				tmp2 = a[j];
				a[j]=a[j+1];
				a[j+1]=tmp2;
			}
		}

 //     for(k=0;k<5;k++)
//		cout<<a[k]<<endl;
	}

	for(i=0;i<5;i++)
		cout<<a[i]<<endl;
	system("pause");
	return 0;
}

