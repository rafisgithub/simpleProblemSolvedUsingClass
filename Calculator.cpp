#include<iostream>
using namespace std;
class Calculator{
	public:
		float ar[500];
		void Sum(){
			int num,i,sum=0;
			cout<<"How many numbers do you wanna add:"<<endl;
			cin>>num;
			for(i=0;i<num;i++){
				cin>>ar[i];
			}
		     for(i=0;i<num;i++){
				sum=sum+ar[i];
			}
			cout<<"Sum="<<sum;
		}
};
using namespace std;
int main(){
	Calculator obj;
	obj.Sum();
	return 0;
}
