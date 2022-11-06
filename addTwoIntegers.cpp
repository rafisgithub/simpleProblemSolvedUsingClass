#include<iostream>
using namespace std;
class MathematicalOpareation{
	public:
		int n1,n2;
		void add(){
			int sum=0;
			cout<<"Enter two integers:"<<endl;
			cin>>n1>>n2;
			sum=n1+n2;
			cout<<"Sum is:"<<sum<<endl;
		}
};
int main(){
	MathematicalOpareation obj;
	obj.add();
}
