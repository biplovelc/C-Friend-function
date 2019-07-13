#include<iostream>
using namespace std;

class Complex
{
	private:
		int real, complex;
	public:
		Complex(){	}
		Complex(int x, int y)
		{
			real = x;
			complex = y;
		}
		
		void display(){
			cout<<"Entered complex numbers: "<<real<<"+"<<complex<<"i."<<endl;
		}
		
		friend void add(Complex a, Complex b);
};

void add(Complex a, Complex b)
{
	int r, c;
	r = a.real + b.real;
	c = a.complex + b.complex;
	cout<<"Sum of complex numbers is = "<<r<<"+"<<c<<"i.\n"; 
	
}

int main()
{
	int r1, r2, c1, c2;
	cout<<"Enter real and complex numbers for first number:\n";
	cin>>r1>>c1;
	
	cout<<"\nEnter real and complex numbers for first number:\n";
	cin>>r2>>c2;
	cout<<endl;
	
	Complex comp1(r1, c1);
	Complex comp2(r2, c2);
	
	comp1.display();
	comp2.display();
	
	cout<<endl;
	add(comp1, comp2);
}
