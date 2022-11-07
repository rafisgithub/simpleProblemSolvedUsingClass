#include<iostream>
using namespace std;
class Matrix{
	private:
		double A[100][100],B[100][100],C[100][100];
		int r1,c1,r2,c2,i,j,k,r,c;
		public:
		void MultiplyTwoMatrix(){
			//input first matrix
			cout<<"Enter first matrix row and colum:"<<endl;
			cin>>r1>>c1;
			cout<<"Enter first matrix values:"<<endl;
			for(i=0;i<r1;i++){
				for(j=0;j<c1;j++){
					cin>>A[i][j];
				}
			}
			//input second matrix
			cout<<"Enter second matrix row and colum:"<<endl;
			cin>>r2>>c2;
			cout<<"Enter second matrix values:"<<endl;
			for(i=0;i<r2;i++){
				for(j=0;j<c2;j++){
					cin>>B[i][j];
				}
			}
			if(r1>r2)
			r=r1;
			else
			r=r2;
			if(c1>c2)
			c=c1;
			else
			c=c2;
			//Assigning zero
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					C[i][j]=0;
				}
			}
			//Multiply A and B
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					for(k=0;k<c;k++){
						C[i][j]+=A[i][k]*B[k][j];
					}
				}
			}
			//print result
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					cout<<C[i][j]<<" ";
				}
				cout<<"\n";
			}						
						
		}
};
int main(){
	Matrix obj;
	obj.MultiplyTwoMatrix();
	return 0;
}
