#include<iostream>
using namespace std;
class Rafi{
	protected:
		string name;
		int id;
		string bloodGroup;
	public:
		void rafi(string n,int x,string bg){
			name=n;
			id=x;
			bloodGroup=bg;
		}
};
class Ahmed : public Rafi{
	private:
		int age=20;
	public:
		void display(){
			cout<<"Name:"<<name<<endl;
			cout<<"ID"<<id<<endl;
			cout<<"Blood Group:"<<bloodGroup<<endl;
			cout<<"Age:"<<age<<endl;
		}
};
int main(){
	string name;
	int id;
	string bloodGroup;
	cout<<"Enter your name:\n";
	cin>>name;
	cout<<"Enter your ID\n";
	cin>>id;
	cout<<"What is your blood group?\n";
	cin>>bloodGroup;
	//creating derived class object
	Ahmed obj;
	obj.rafi(name,id,bloodGroup);
	obj.display();
	return 0;
}
