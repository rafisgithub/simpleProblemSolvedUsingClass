#include<iostream>
using namespace std;
class MathematicalOperation{
	private:
		int n1,n2,temp;
		public:
		void swap(){
			cout<<"Enter two numbers:"<<endl;
			cin>>n1>>n2;
			temp=n1;
			n1=n2;
			n2=temp;
			cout<<"After swapping:"<<n1<<" "<<n2;
		}
};
int main(){
	MathematicalOperation obj;
	obj.swap();
	return 0;
}
