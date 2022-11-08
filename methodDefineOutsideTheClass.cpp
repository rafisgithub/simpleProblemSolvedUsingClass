#include<iostream>
using namespace std;
class Student{
	public:
		int sRoll;
		string sName;
		void display(int x,string y);
};
int main(){
	Student obj;
	cout<<"Enter your name:"<<endl;
	cin>>obj.sName;
	cout<<"Enter your Roll:"<<endl;
	cin>>obj.sRoll;
	obj.display(obj.sRoll,obj.sName);
	return 0;
}
void Student::display(int x,string y){
	{
			sRoll=x;
			sName=y;
			cout<<"Roll No:"<<sRoll<<endl;
			cout<<"Student Name:"<<sName<<endl;
		}
}
