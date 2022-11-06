#include<iostream>
using namespace std;
class Year{
	public:
		int year;
		void checkYear(){
			cout<<"Enter year:"<<endl;
			cin>>year;
			if(year%400==0 || (year%100!=0 && year%4==0)){
				cout<<"Leap year"<<endl;
			}else{
				cout<<"Not leap year"<<endl;
				cout<<"the nearest leap ="<<++year;
			}
		}
};
int main(){
	Year obj;
	obj.checkYear();
}
