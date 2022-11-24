#include <iostream>
#include <cmath>
using namespace std;

class shape
{
	public:
		double area;
		
		void get_data(double x)
		{
			area = x;
		}
		virtual void display_area()
		{
			cout<<"Area is : "<<area<<endl;
		}
};

class triangle : public shape
{
	public :
		double h; double b;
		void get_da()
		{
		    cout<<"Enter height of triangle : "	;
		    cin>>h;
			cout<<"Enter base of triangle : "	;
		    cin>>b;
		}
		void display_area()
		{
			area = 0.5 * h * b;
			cout<<"Area is : "<<area<<endl;
		}
};
class rectangle : public shape
{
	public :
		double l; double br;
		void get_dat()
		{
		  cout<<"Enter length of rectangle : "	;
		    cin>>l;
			cout<<"Enter breadth of rectangle : "	;
		    cin>>br;
		}
		void display_area()
		{
			area = l * br;
			cout<<"Area is : "<<area<<endl;
		}
};

int main()
{
	triangle obj; obj.get_da();
	shape *bptr = &obj;
	bptr->get_data(obj.area);
	bptr->display_area();


    rectangle obj2; obj2.get_dat();
	shape *bptr2 = &obj2;
	bptr2->get_data(obj2.area);
	bptr2->display_area();	
	
}
