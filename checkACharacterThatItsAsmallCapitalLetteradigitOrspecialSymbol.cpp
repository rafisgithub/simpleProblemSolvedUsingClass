#include<iostream>
using namespace std;
class Alphabet{
	public:
		char ch;
		void checkCharacter(){
			cout<<"Enter any character:"<<endl;
			cin>>ch;
			if(ch>='a' && ch<='z'){
				cout<<"Capital letter."<<endl;
			}else if(ch>='A' && ch<='Z'){
				cout<<"Small Letter."<<endl;
			}else if(ch>='0' && ch<='9'){
				cout<<"Digit."<<endl;
			}else{
				cout<<"Spacial symbol"<<endl;
			}
		}
};
int main(){
	Alphabet obj;
	obj.checkCharacter();
	return 0;
}
