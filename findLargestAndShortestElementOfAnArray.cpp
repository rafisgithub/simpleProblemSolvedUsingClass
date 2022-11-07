#include<iostream>
using namespace std;
class MathematicalOperation{
	public:
		double arr[500];
		void LargestElement(double arr[],int size){
			for(int i=1;i<size;i++){
				if(arr[0]<arr[i]){
					arr[0]=arr[i];
				}	
			}
			cout<<"The largest value="<<arr[0]<<endl;
		}
		
	    void ShortestElement(double arr[],int size){
			for(int i=1;i<size;i++){
				if(arr[0]>arr[i]){
					arr[0]=arr[i];
				}	
			}
			cout<<"The shortest value="<<arr[0]<<endl;
		}
};
int main(){
	MathematicalOperation obj;
	int i,size;
	cout<<"How many elements wnna to input:"<<endl;
	cin>>size;
	for(i=0;i<size;i++){
		cin>>obj.arr[i];
	}
	obj.LargestElement(obj.arr,size);
	obj.ShortestElement(obj.arr,size);
	return 0;
}
