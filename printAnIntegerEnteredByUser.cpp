#include<iostream>
using namespace std;
class IntegerNumber{
	public:
		int num;
		void printIntegerN(){
			cout<<"Enter an integers:"<<endl;
			cin>>num;
			cout<<"you have entered:"<<num;
		}
};
int main(){
	IntegerNumber obj;
	obj.printIntegerN();
	return 0;
}
