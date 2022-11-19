#include<iostream>
using namespace std;
class PrimeNum{
	private:
		int n;
	public:
		void checkPrime(int x){
			int counter=0;
			n=x;
			for(int i=2;i<=n/2;i++){
				if(n%i==0){
					counter++;
				}
			}
			if(counter==0){
				cout<<"Prime number."<<endl;
			}else{
				cout<<"Not prime number."<<endl;
			}
		}
};
int main(){
	PrimeNum obj;
	int num;
	cout<<"enter any number:"<<endl;
	cin>>num;
	obj.checkPrime(num);
}
