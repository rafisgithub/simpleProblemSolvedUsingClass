#include<iostream>
using namespace std;
class MathematicalOperation{
	public:
		int n1,n2;
		void QandR(){
			int Q,R;
			cout<<"Enter two intergers:"<<endl;
			cin>>n1>>n2;
			Q=n1/n2;
			R=n1%n2;
			cout<<"Quotient="<<Q<<" and "<<"Remainder ="<<R;
			
		}
		
};
int main(){
	MathematicalOperation obj;
	obj.QandR();
	return 0;
}
