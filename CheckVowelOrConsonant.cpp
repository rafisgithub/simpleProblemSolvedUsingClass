#include<iostream>
using namespace std;
class Alphabet{
	public:
		char ch;
		void CheckVOrConsonat(){
			cout<<"Enter a Alphabet:"<<endl;
			cin>>ch;
			if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
				if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='e' || ch=='a' || ch=='i'|| ch=='o'|| ch=='u'){
				cout<<"Vowel."<<endl;
				}else{
					cout<<"Consonant."<<endl;
				}
			}else{
				cout<<"It's not Alphabet!"<<endl;
			}
		}
};
int main(){
	Alphabet obj;
	obj.CheckVOrConsonat();
	return 0;
}
