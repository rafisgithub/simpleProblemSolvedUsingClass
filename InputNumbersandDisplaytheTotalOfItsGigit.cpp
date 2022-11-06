#include<iostream>
using namespace std;
class MathematicalOperatiion{
	public:
		int n;
		public:
		void digitsSum(){
			int total=0,rem;
				cout<<"Enter numbers:"<<endl;
				cin>>n;
			while(n!=0){
				rem=n%10;
				total+=rem;
				n=n/10;
			}
			cout<<"Total of its digits:"<<total;
		}
};
int main(){
	MathematicalOperatiion obj;
	obj.digitsSum();
	return 0;
}
