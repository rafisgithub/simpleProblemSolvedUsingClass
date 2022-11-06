#include<iostream>
using namespace std;
class MathematicalOperation{
	public:
		int n;
		void CheckEvenOrOdd(){
			cout<<"Enter a number:"<<endl;
			cin>>n;
			if(n%2==0){
				cout<<"Even."<<endl;
			}else{
				cout<<"Odd."<<endl;
			}
		}
};
int main(){
	MathematicalOperation obj;
	obj.CheckEvenOrOdd();
	return 0;
}
