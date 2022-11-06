//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
int main()
{

ll n;
while(1)
{
cout<<"Enter the number to find Digital Root"<<endl;
cin>>n;
if(n==0)cout<<0<<endl;
else if(n%9==0)cout<<9<<endl;
else cout<<n%9<<endl;
}
return 0;
}
