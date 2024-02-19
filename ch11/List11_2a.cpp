#include<iostream>
using namespace std;
class Str {        
public:
  void show() { cout << str << endl; }
  void set(char * ptr) { str = ptr; }
  void showthis() { cout << this << endl; }  
  void showaddressthis() 
    {  
      Str * const &add = this;
	  cout << &add << endl;
	} 
private:
  char * str;    
};

int main()
{
  Str hello, world;
  hello.set("Hello");  
  world.set("World!");
  cout << "The address of hello object " 
       << &hello << endl;
  cout << "The address of world object "
       << &world << endl;;
  world.showthis();
  world.showaddressthis();
  system("pause");
}
