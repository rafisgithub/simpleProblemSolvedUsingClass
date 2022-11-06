#include<iostream>
using namespace std;
class MathematicalOperation{
	private:
		int n;
		public:
		void ReverseNum(){
			int rem,rev=0;
			cout<<"Enter numbers:"<<endl;
			cin>>n;
			while(n!=0){
				rem=n%10;
				rev=rem+(rev*10);
				n=n/10;
			}
			cout<<"Reverse="<<rev;
		}
};
int main(){
	MathematicalOperation obj;
	obj.ReverseNum();
	
}
