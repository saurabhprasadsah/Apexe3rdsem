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
	    
		employee() //default constructor
		{
			empno=101;
			strcpy(name,"Ramesh");
			basic=7000;
		}	
		
		employee(int e,char n[80],long bs)// parametrised
		{
			empno=e;
			strcpy(name,n);
			basic= bs;
			
		}
		employee(employee & x)// copy constructor
		{
			empno=x.empno;
			strcpy(name,x.name);
			basic=x.basic;
		}
		void calculate()
		{
			ta = basic*10/100;
			da = basic*80/100;
			total_sal= basic+ta+da;
		}
		void display()
		{
			cout<<"\n emp no"<<empno;
			cout<<"\n basic salary"<<basic;
			cout<<"ta="<<ta;
			cout<<"da="<<da;
			cout<<"\n total salary"<<total_sal;
	   }
};



 void main()
{
	employee obj1;
	employee obj2(102,"shyam",1000);
	employee obj3(obj1);
	obj1.calculate();
	obj2.calculate();
	obj3.calculate();
	
	cout<<"\n empno";
	obj1.display();
	cout<<"\n";
	obj2.display();
	cout<<"employee details:-";
	obj3.display();
	
}
