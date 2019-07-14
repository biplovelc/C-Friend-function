#include<iostream>
using namespace std;

class Distance
{
	private: 
		double num;
	public:
		Distance(){}
		Distance(double n){
			num = n;
		}
		
		friend void add(Distance , Distance );
};

void add(Distance n, Distance d)
{
	double a;
	a = n.num + d.num;
	cout<<"After addition = "<<a;
}

int main()
{
	double a, b;
	cout<<"Enter two distance numbers:\n";
	cin>>a>>b;
	
	Distance d1(a);
	Distance d2(b);
	
	add(d1, d2);
}
