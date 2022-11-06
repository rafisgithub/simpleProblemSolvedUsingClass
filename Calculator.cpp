#include<iostream>
using namespace std;
class Calculator{
	public:
		int n1,n2;
		void sum(int x,int y){
			n1=x;
			n2=y;
			int sum=0;
			sum=n1+n2;
			cout<<"Sum="<<sum<<endl;
		}
		void Subtraction(int x,int y){
			n1=x;
			n2=y;
			int Subtraction=0;
			if(n1>n2)
			Subtraction=n1-n2;
			else
			Subtraction=n2-n1;
			cout<<"Subtraction="<<Subtraction<<endl;
		}
		void Multiplication(int x,int y){
			n1=x;
			n2=y;
			int multiplication;
			multiplication=n1*n2;
			cout<<"Multiplication="<<multiplication<<endl;
		}
		void division(int x,int y){
			n1=x;
			n2=y;
			int division;
			division=n1/n2;
			cout<<"Division="<<division<<endl;
		}
};
int main(){
	Calculator obj;
	int n1,n2;
	cout<<"Enter two number:"<<endl;
	cin>>n1>>n2;
	obj.sum(n1,n2);
	obj.Subtraction(n1,n2);
	obj.Multiplication(n1,n2);
	obj.division(n1,n2);
	return 0;
}
