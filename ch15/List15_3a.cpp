#include<iostream>
using namespace std;
#include<string.h>
class Father
{
 private:   
	char m_szWife[32];
 protected:   
	char m_szSurname[32];
	char m_szAddress[32];
	long m_lMoney;
 public:
	Father()
	{
	  cout<<"[Father constructor]"<<endl;
	  strcpy(m_szWife, "Father's wife'");
	  strcpy(m_szSurname, "Father's surname'");
	  strcpy(m_szAddress, "Father's address'");
	  m_lMoney = 88;
	}
	inline char *GetSurname()   {return m_szSurname;}
	inline char *GetAddress()   {return m_szAddress;}
	inline long GetMoney()      {return m_lMoney;}
};
class Mother
{
 private:   
	char m_szHusband[32];
 protected:   
	char m_szSurname[32];
	char m_szTelephone[32];
	long m_lMoney;
 public:
	Mother()
	{
		cout<<"[Mother constructor] "<<endl;
		strcpy(m_szHusband, "Mother's husband '");
		strcpy(m_szSurname, "Mother's surname '");
		strcpy(m_szTelephone, "Mother's phone number '");
		m_lMoney = 99;
	}
	inline char *GetSurname()   {return m_szSurname;}
	inline char *GetTelephone()   {return m_szTelephone;}
	inline long GetMoney()      {return m_lMoney;}
};

class Child:protected Father, protected Mother
{
 private:
	char m_szEmail[32];
 public:
	Child()
	{
		cout<<"[Child constructor] "<<endl;
		strcpy(m_szEmail,"Child's Email ");
	}
	inline char *GetEmail()     {return m_szEmail;}
	void Show()
	{
		cout << "[Address] " << GetAddress() << endl;
		cout << "[Telephone] " << GetTelephone() << endl;
		cout << "[Email] " << GetEmail() << endl;
		cout << "[Money] "<< Mother::GetMoney() << endl;
		cout << "[Surname] "<< Father::GetSurname() << endl;
	}
	long GetMoney()
	{
		return Father::GetMoney() + Mother::GetMoney();
	}
};
int main()
{
	Child Baby;
	Baby.Show();
	cout << "[Father + Mother] " << Baby.GetMoney() << endl;
	system("pause");
	return 0;
}







