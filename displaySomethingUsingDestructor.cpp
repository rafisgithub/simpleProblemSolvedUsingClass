#include<iostream>
using namespace std;
class Rafi{
	private:
		string name;
		int id;
		float cgpa;
	public:
	Rafi(string n,int x,float y){
		name=n;
		id=x;
		cgpa=y;
	}
	~Rafi(){
		cout<<"Name:"<<name<<endl;
		cout<<"ID:"<<id<<endl;
		cout<<"CGPA:"<<cgpa<<endl;
	}
};
int main(){
	string name;
	int id;
	float cgpa;
	cout<<"Enter name:\n";
	cin>>name;
	cout<<"Enter ID\n";
	cin>>id;
	cout<<"CGPA:\n";
	cin>>cgpa;
	Rafi obj(name,id,cgpa);
	return 0;
}
