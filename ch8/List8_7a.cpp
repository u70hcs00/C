#include<iostream>
using namespace std;
int sum(int a, int b)
{
return a + b;
}
// Function that takes a pointer
// to the function
int pointer_arg(int a, int b, int (*func)(int, int))
{
return func(a, b);
}
int main()
{
// Pass pointers for adding
cout << "Sum of 30 and 20 = ";
cout << pointer_arg(30, 20, &sum)<<endl;
return 0;
}




