#include<iostream>
using namespace std;
class mathematicalOperation{
	public:
		int n;
		int squreOrcude(){
			cout<<"Enter a number:"<<endl;
			cin>>n;
			if(n%2==0)
			return n*n;
			else
			return n*n*n;
			
		}
};
int main(){
	mathematicalOperation obj;
	cout<<obj.squreOrcude();
	return 0;
}
