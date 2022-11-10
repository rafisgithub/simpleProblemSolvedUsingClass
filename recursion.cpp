//sum of 1+2+3+4+.............+n
#include<iostream>
using namespace std;
class Recursion{
	private:
		int n;
		public:
			int sum(int x){
				n=x;
				if(n==1){
					return 1;
				}
				
				return n+sum(n-1);
			}
};
int main(){
	Recursion obj;
	int num;
	cout<<"Enter number:"<<endl;
	cin>>num;
	cout<<"SUM:"<<obj.sum(num);
	return 0;
}
