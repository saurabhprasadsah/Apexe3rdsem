#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class employee
{
	private:
		int empno;
		char name [80];
		long  basic,ta,da,total_sal;
		
		
	public:
		void getdata(int e,char n[80],long bs)
		{
			empno =e;
			strcpy(name,n);
			basic=bs;
			
		}
		void calculate()
		{
			ta =basic*10/100;
			da =basic*80/100;
			total_sal = basic+ta+da;
			
		}
		void display()
		{
			cout<<"\n emp no="<<empno;
			cout<<"\n bonus salary="<<basic;
			cout<<"\n Ta ="<<ta;
			cout<<"\n da ="<<da;
			cout<<"total salary ="<<total_sal;
		}
};
int main()
{
	employee obj1,obj2;
	obj1.getdata(101,"saurabh",100000);
	obj2.getdata(102,"Manish",20000);
	obj1.calculate();
	obj2.calculate();
	cout<<"\n employee details 1:-";
	obj1.display();
	cout<<"employee details 2:-";
	obj2.display();
	
}
