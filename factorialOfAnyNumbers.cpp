#include<iostream>
using namespace std;
class MathematicalOperation{
	public:
		int n;
		void sum(){
			int fact=1;
			cout<<"Enter the n number:"<<endl;
			cin>>n;
			for(int i=1;i<=n;i++){
				fact*=i;
			}
			cout<<"Factorial of "<<n<<"="<<fact;
		}
};
int main(){
	MathematicalOperation obj;
	obj.sum();
	return 0;
}
