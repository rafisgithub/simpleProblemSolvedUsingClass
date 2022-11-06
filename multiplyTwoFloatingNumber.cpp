#include<iostream>
using namespace std;
class MathematicalOperation{
	public:
		float n1,n2,multiple;
		float multipleOfFloatingN(float x,float y){
			multiple=x*y;
			cout<<multiple;
			return 0;
		}
};
int main(){
	MathematicalOperation obj;
	cout<<"Enter two floating number:"<<endl;
	cin>>obj.n1>>obj.n2;
	obj.multipleOfFloatingN(obj.n1,obj.n2);
	return 0;
}
