#include<iostream>
using namespace std;
class MathematicalOperation{
	public:
		int n;
		void CountDigit(int n){
			int counter=0;
			while(n!=0){
				n=n/10;
				counter++;
			}
			cout<<"Number of digits ="<<counter;
		}
};
int main(){
	MathematicalOperation obj;
	cout<<"Enter an integer:"<<endl;
	cin>>obj.n;
	obj.CountDigit(obj.n);
	
	return 0;
}
