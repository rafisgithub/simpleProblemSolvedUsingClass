#include<iostream>
using namespace std;
class MathematicalOperation{
	private:
		int arr[1000];
		public:
		void LargestOfNnumbers(){
			int n;
			cout<<"Enter n numbers:"<<endl;
			cin>>n;
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
			for(int i=1;i<n;i++){
				if(arr[0]<arr[i]){
					arr[0]=arr[i];
				}
			}
			cout<<"The value of this numbers:"<<arr[0];
		}
		
};
int main(){
	MathematicalOperation obj;
	obj.LargestOfNnumbers();
}
