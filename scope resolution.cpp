#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class employee
{
	private:
		int empno;
		char name[80];
		long basic,ta,da,total_sal;
	public:
		void getdata(int e,char n[80],long bs);
		void calculate();
		void display();
};
void employee::getdata(int e,char n[80],long bs)
{
	empno=e;
	strcpy(name,n);
	basic=bs;
	
}
void employee::calculate()
{
	ta=basic*10/100;
	da=basic*80/100;
	total_sal=basic+ta+da;
}
void employee::display()
{
	cout<<"\n emp no"<<empno;
	cout<<"\n Basic salary="<<basic;
	cout<<"\n ta"<<ta;
	cout<<"\n da"<<da;
	cout<<"\n total salary="<<total_sal;
}

int main()
{
	employee obj1,ob2;
	obj1.getdata(101,"saurabh",10000);
	obj2.getdata(102,"manish",20000);
	obj1.calculate();
	obj2.calculate();
	cout<<"\n employee detailas:-";
	obj1.display();
	cout<<"employee details 1:-";
	obj2.display();
	cout<<"employee details 2:-";
	return 0;
}

