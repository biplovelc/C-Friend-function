#include<iostream>
using namespace std;

class Scientist;
class Manager
{
	double mTax;
	public:
		Manager(){
			mTax = 6000.5;
		}
		friend void compute_tax(Manager , Scientist );
};

class Scientist
{
	double sTax;
	public:
		Scientist(){
			sTax = 19100.95;
		}
		friend void compute_tax(Manager , Scientist);
};

void compute_tax(Manager m, Scientist s)
{ 
	double calc = (double) m.mTax + s.sTax;
	cout<<"Total tax = "<<calc<<endl;
}

int main()
{
	Manager m; 
	Scientist s;
	compute_tax(m, s);
}
