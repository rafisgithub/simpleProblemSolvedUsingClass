#include<iostream>
using namespace std;
class MathematicalOperation{
	public:
		double arr[300];
		void Average(double arr[],int size){
			double sum=0,avg;
			for(int i=0;i<size;i++){
				sum+=arr[i];
			}
			avg=sum/size;
			cout<<"Average="<<avg;
		}
};
int main(){
	MathematicalOperation obj;
	int size,i;
	cout<<"Enter how many numbers wanna to make avearage:"<<endl;
	cin>>size;
	cout<<"Enter numbers:"<<endl;
	for(i=0;i<size;i++){
		cin>>obj.arr[i];
	}
	obj.Average(obj.arr,size);
	return 0;
}
