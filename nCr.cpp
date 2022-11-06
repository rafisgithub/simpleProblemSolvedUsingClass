#include<iostream>
using namespace std;
class MathematicalOperation{
	public:
	int n,r;
	void Permutation(int n,int r);		
};

int main(){
	MathematicalOperation obj;
	cout<<"Enter the value of n:"<<endl;
	cin>>obj.n;
	cout<<"Enter the value of r:"<<endl;
	cin>>obj.r;
	obj.Permutation(obj.n,obj.r);
	return 0;
}

void MathematicalOperation::Permutation(int n,int r){
	int fact_n=1,fact_r=1,factnMr=1,nCr,i,j,k;
	for(i=1;i<=n;i++){
		fact_n*=i;
	}
	for(j=1;j<=r;j++){
		fact_r*=j;
	}
	for(k=1;k<=(n-r);k++){
		factnMr*=k;
	}
	nCr=fact_n/(fact_r*factnMr);
	cout<<nCr;
}
