#include<iostream>
using namespace std;
class MathematicaTurm{
	public:
		float n1,n2,n3;
		float MediumNum(int x,int y,int z){
			n1=x;n2=y;n3=z;
			if(n1>=n2 && n1<=n3 || n1<=n2 && n1>=n3){
				return n1;
			}else if(n2>=n1 && n2<=n3 || n2<=n1 && n2>=n3){
				return n2;
			}else{
				return n3;
			}
		}
};
int main(){
	MathematicaTurm obj;
	int num1,num2,num3;
	cout<<"Enter three numbers:"<<endl;
	cin>>num1>>num2>>num3;
	cout<<"The medium number="<<obj.MediumNum(num1,num2,num3);
}
