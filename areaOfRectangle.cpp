#include<iostream>
using namespace std;
class Rectangle{
	public:
		float l,w,area;
		float Area(float x,float y){
			l=x;
			w=y;
			area=l*w;
			return area;
		}
};
int main(){
	Rectangle obj;
	int length,width;
	cout<<"Enter lenth and width of rectangle:"<<endl;
	cin>>length>>width;
	cout<<"The area of Rectangle="<<obj.Area(length,width);
	return 0;
}
