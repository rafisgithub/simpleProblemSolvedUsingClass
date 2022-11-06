#include<iostream>
using namespace std;
class MathematicalOperation{
	public:
		int n1,n2,n3;
		int FindLagest(){
			cout<<"Enter three numbers:"<<endl;
			cin>>n1>>n2>>n3;
			if(n1>=n2 && n1>=n3){
				return n1;
			}else if(n2>=n1 && n2>=n3){
				return n2;
			}else{
				return n3;
			}
		}
};
using namespace std;
int main(){
	MathematicalOperation obj;
	cout<<"The largest number :"<<obj.FindLagest();
	return 0;
}
