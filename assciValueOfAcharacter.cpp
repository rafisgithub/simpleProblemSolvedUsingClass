#include<iostream>
using namespace std;
class ASCI{
	public:
		char ch;
		void printAsciValueOfAchar(){
			cout<<"Enter a charater:"<<endl;
			cin>>ch;
			cout<<"The ASCI value of "<<ch<<" is :"<<int(ch);
		}
};
int main(){
	ASCI obj;
	obj.printAsciValueOfAchar();
	return 0;
}
