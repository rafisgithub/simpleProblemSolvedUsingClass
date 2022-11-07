#include<iostream>
using namespace std;
class MathematicalOperation{
	private:
		 int n,i;
		public:
			void Fibonacci(int x){
				int f1=0,f2=1,fn=0;
				n=x;
				for(i=1;i<=n;i++){
					cout<<f1<<" ";
					fn=f1+f2;
					f1=f2;
					f2=fn;
				}
				
			}
};
int main(){
	MathematicalOperation obj;
	int num;
	cout<<"Enter numbers:"<<endl;
	cin>>num;
	obj.Fibonacci(num);
	return 0;
}

