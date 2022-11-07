#include<iostream>
using namespace std;
class Alphabet{
	private:
		char ch;
		public:
			void CheckCharacter(int x){
				ch=x;
				if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
					cout<<"It's Alphabet"<<endl;
				}else if(ch>='0' && ch<='9'){
					cout<<"Digit."<<endl;
				}else{
					cout<<"Special Symbol"<<endl;
				}
			}
};
int main(){
	while(1){
		Alphabet obj;
	    char character;
	    cout<<"Enter any character to check:"<<endl;
	    cin>>character;
		obj.CheckCharacter(character);
	}
	return 0;
}
