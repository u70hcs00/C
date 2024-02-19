#include<iostream>
using namespace std;
double f(double x)    //---f(x) = x^2 ---//                                       
{ 
	return (x * x);                                                            
}                                                                              
double g(double x)    //---g(x) = x^3 ---//                                       
{
	return (x * x * x + 3 * x * x);                                            
}                                                                              
//Use trapezoidal rule to approximate the are of function 
//func from x1 to x2 using n intervals// 
double daikei(double x1, double x2, int n, double (*func)(double x))           
{
	double s = 0.0;                                                            
	double step = (x2 - x1) / n;                                               
	for (int i = 0; i < n; i++)                                                
		s += ( (*func)(x1 + step*i) + (*func)(x1 + step*(i+1)) ) * step / 2.0;   
	return (s);                                                                
}                                                                              
int main(void)                                                                 
{
	cout << "Find are of f(x) from 0 to 1 with 10 intervals¡G"
	     << daikei(0.0, 1.0, 10, &f) << '\n';                                    
	cout << "Find are of g(x) from 1 to 2 with 15 intervals¡G"
	     << daikei(1.0, 3.0, 15, &g) << '\n';                                    
		system("pause");
return (0);                                                                 
}  





