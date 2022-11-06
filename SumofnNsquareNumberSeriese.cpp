#include<iostream>
using namespace std;
class MathematicalOperation{
	public:
		int n;
		void sum(){
			int sum=0;
			cout<<"Enter the n number:"<<endl;
			cin>>n;
			for(int i=1;i<=n;i++){
				sum+=i*i;
			}
			cout<<"Sum="<<sum;
		}
};
int main(){
	MathematicalOperation obj;
	obj.sum();
	return 0;
}
