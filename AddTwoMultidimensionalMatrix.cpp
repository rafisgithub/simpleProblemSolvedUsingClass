#include<iostream>
using namespace std;
class Matrix{
	private:
	double A[100][100],B[100][100],sum[100][100];
	int r1,c1,r2,c2,i,j,r,c;
	public:
		void AddTwoMatrix(){
			cout<<"Enter first martix row and colum:"<<endl;
			cin>>r1>>c1;
			cout<<"Enter first Matrix values:"<<endl;
			//input first matrix
			for(i=0;i<r1;i++){
				for(j=0;j<c1;j++){
					cin>>A[i][j];
				}
			}
			cout<<"Enter second martix row and colum:"<<endl;
			cin>>r2>>c2;
			cout<<"Enter second Matrix values:"<<endl;
			//input second matrix
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
			//assigning zero to sum
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					sum[i][j]=0;
				}
			}
			//Adding add matrix
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					sum[i][j]+=(A[i][j]+B[i][j]);
				}
			}
			//print sum
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					cout<<sum[i][j]<<" ";
				}
				cout<<"\n";
			}
												
		}

	
};
int main(){
	Matrix obj;
	obj.AddTwoMatrix();

}
