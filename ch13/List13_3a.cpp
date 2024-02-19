#include <fstream>
#include<iostream>
using namespace std;
#include <iomanip>
int main()
{
   ofstream fout("test2.txt");
   if(!fout){
      cout << "Can't open file'\n";
      system("pause");
      return 1;
   }

   const int num = 5;
   int test[num];
   
   cout << " Please input " << num << " scores: \n";
   for(int i = 0; i < num; i++){
      cin >> test[i];
   }

   for(int j = 0; j < num; j++){
      fout << "No. " << " " << j + 1 
	    << " " << setw(5) << test[j] << '\n';
 
   }

   fout.close();


   ifstream fin("test2.txt");
   if(!fin){
      cout << "Can't open file '\n";
      system("pause");
      return 1;
   }

 
   int  k[num];
   char sr[100];


   for( int j = 0; j < num; j++){
 
      fin >> sr >> k[j] >> test[j] ;
	  cout << sr << k[j] << setw(5) 
	       << test[j] << endl;
   }

   fin.close();
   return 0;
}
