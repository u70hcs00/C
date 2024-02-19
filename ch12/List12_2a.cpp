#include<iostream>
using namespace std;
template <typename T, int length>
class Array{
   private:
      T data[length];
   public:
      void setData(int num, T d);
      T getData(int num);
};

template <typename T, int length> 
void Array<T, length>::setData(int num, T d)
{
	if(num < 0 || num > length )
		cout << "oversize¡C\n";
   else
      data[num] = d;
}
template <typename T, int length> 
T Array<T, length>::getData(int num)
{
	if(num < 0 || num > length ){
		cout << "oversize¡C\n";
		return data[0];
	}
	else
      return data[num];
}

int main()
{
   cout << "Create Array of type int\n";
   Array<int, 5> i_array;
   i_array.setData(0, 80);
   i_array.setData(1, 60);
   i_array.setData(2, 58);
   i_array.setData(3, 77);
   i_array.setData(4, 57);

   for(int i = 0; i < 5; i++)
      cout << i_array.getData(i) << '\n';

   cout << "Create Arrat of type double\n";
   Array<double, 5> d_array;
   d_array.setData(0, 35.5);
   d_array.setData(1, 45.6);
   d_array.setData(2, 26.8);
   d_array.setData(3, 76.2);
   d_array.setData(4, 85.5);

   for(int j = 0; j < 5; j++)
      cout << d_array.getData(j) << '\n';
   return 0;
}
