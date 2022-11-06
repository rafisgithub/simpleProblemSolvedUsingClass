#include<iostream>
const float pi=3.1416;
using namespace std;
class Circle{
	public:
		int r;
		float area(int x){
			r=x;
			return pi*r*r;
		}
};
int main(){
	Circle obj;
	int radius;
	cout<<"Enter radius of circle:"<<endl;
	cin>>radius;
cout<<"The area of circle="<<obj.area(radius);
	return 0;
}
