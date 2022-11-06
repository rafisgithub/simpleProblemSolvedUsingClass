#include<iostream>
using namespace std;
class MathematicalOperation{
	public:
		int n;
		int PowerOfNum(int x){
			return x*x;
		}
};
int main(){
	MathematicalOperation obj;
	cout<<"Enter any number:"<<endl;
	cin>>obj.n;
	cout<<obj.PowerOfNum(obj.n);
	return 0;
}
