#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   ifstream fin("test3.txt");
   if(!fin){
      cout << "Can't open file'\n";
      return 1;
   }

   const int num = 8;
   int test[num];
   for(int i = 0; i < num; i++){
      fin >> test[i];
   }
   int max = test[0];
   int min = test[0];
   for(int j = 0; j < num; j++){
      if(max < test[j])
            max = test[j];
      if(min > test[j])
            min = test[j];
      cout << "No."<< j+1 << setw(5) << test[j] <<'\n';
   }

   cout << "The highest score is " << max << "\n";
   cout << "The lowest score is " << min << "\n";
   fin.close();

   system("pause");
   return 0;
}
