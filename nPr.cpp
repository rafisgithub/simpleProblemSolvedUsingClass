#include<iostream>
using namespace std;
class MathematicalOperation{
	public:
	int n,r;
	void Permutation(){
		int fact_n=1,fact_NminusR=1,nPr,i,j;
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	cout<<"Enter the value of r: "<<endl;
	cin>>r;
	for(i=1;i<=n;i++){
		fact_n*=i;
	}
	for(j=1;j<=n-r;j++){
		fact_NminusR*=j;
	}
	nPr=fact_n/fact_NminusR;
	cout<<n<<"P"<<r <<" = "<<nPr;
	}

		
};
int main(){
	MathematicalOperation obj;
	obj.Permutation();
	return 0;
}
