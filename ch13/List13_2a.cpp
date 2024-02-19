#include <fstream>
#include<iostream>
using namespace std;
int main()
{
   ofstream fout("test0.txt");
   if(!fout){
      cout << "Can't open file'\n";
      system("pause");
      return 1;
   }
   else
      cout  << "File is open \n";

   fout << "My" << " " << 1 << "st file." << endl;
   fout.close();
   cout  << "File is closed \n";

   ifstream fin("test0.txt");
   if(!fin){
      cout << "Can't open file'\n";
      system("pause");
      return 1;
   } 

   return 0;
}
