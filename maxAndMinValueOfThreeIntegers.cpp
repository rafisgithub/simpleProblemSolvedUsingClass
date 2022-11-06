#include<iostream>
using namespace std;
class MaxAndMinValue{
	public:
		int n1,n2,n3;
		int max(int x,int y,int z){
			n1=x;
			n2=y;
			n3=z;
			if(n1>=n2 && n1>=n3){
				return n1;
			}else if(n2>=n1 && n2>=n3){
				return n2;
			}else{
				return n3;
			}
		}
		
		int min(int x,int y,int z){
			n1=x;
			n2=y;
			n3=z;
			if(n1<=n2 && n1<=n3){
				return n1;
			}else if(n2<=n1 && n2<=n3){
				return n2;
			}else{
				return n3;
			}
		}
};
int main(){
	MaxAndMinValue obj;
	int num1,num2,num3;
	cout<<"Enter three interger:"<<endl;
	cin>>num1>>num2>>num3;
	cout<<"The max value="<<obj.max(num1,num2,num3)<<endl;
	cout<<"The min value="<<obj.min(num1,num2,num3)<<endl;
	return 0;
}
