#include<iostream>
#include<string>
using namespace std;
class ASentence{
	public:
	    string s;
		void printASentece(){
			cout<<"Enter a sentence:"<<endl;
			getline(cin,s);
			cout<<s;
	
		}
};
int main(){
	ASentence obj;
    obj.printASentece();
	return 0;
}
