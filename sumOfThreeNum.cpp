#include<iostream>
using namespace std;
class MathematicalOperation{
	public:
		int n1,n2,n3;
		int sum(){
			int sum=0;
			cout<<"Enter three number:"<<endl;
			cin>>n1>>n2>>n3;
			sum=n1+n2+n3;
			return sum;
		}
};
int main(){
	MathematicalOperation obj;
	cout<<"Sum of three numbers:"<<obj.sum();
}
