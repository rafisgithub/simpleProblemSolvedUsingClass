#include<iostream>
using namespace std;
class MathematicalOperation{
	public:
		int n;
		void checkPosOrNeg(){
			cout<<"Enter a number:"<<endl;
			cin>>n;
			if(n>=0){
				cout<<"Positive."<<endl;
			}else{
				cout<<"Negative."<<endl;
			}
		}
};
int main(){
	MathematicalOperation obj;
    obj.checkPosOrNeg();
}
