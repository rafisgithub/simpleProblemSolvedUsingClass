#include<iostream>
using namespace std;
class Student{
	public:
		int sRoll;
		string sName;
		void display(int x,string y){
			sRoll=x;
			sName=y;
			cout<<"Roll No:"<<sRoll<<endl;
			cout<<"Student Name:"<<sName<<endl;
		}
};
int main(){
	Student obj1;
	cout<<"Enter your roll:"<<endl;
	cin>>obj1.sRoll;
	cout<<"Enter your name:"<<endl;
	cin>>obj1.sName;
	obj1.display(obj1.sRoll,obj1.sName);
	return 0;
}
