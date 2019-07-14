#include<iostream>
using namespace std;

class Point
{
	private:
		int x, y;
	public:
		Point(int a, int b){
			x = a;
			y = b;
		}
		
		void display(){
			cout<<"Value of X & Y= ("<<x<<", "<<y<<")"<<endl;
		}
		
		friend void swap(Point , Point );
};

void swap(Point a, Point b)
{
	int temp;
	temp = a.x;
	a.x = b.x;
	b.x = temp;
	cout<<"Value of X & Y= ("<<a.x<<", "<<a.y<<")"<<endl;
	cout<<"Value of X & Y= ("<<b.x<<", "<<b.y<<")"<<endl;
}

int main()
{
	Point p1(1, 2);
	Point p2(3, 4);
	
	p1.display();
	p2.display();
	
	cout<<"\nSwapped values:\n";	
	swap(p1, p2);
}
