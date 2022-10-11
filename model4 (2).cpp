#include<iostream>
using namespace std;
int main()
{
int m,n,k;
cout<< "M=";
cin>>m;
cout<<"N=";
cin>>n;
cout<<"K=";
cin>>k;
if(m<0||n<0||k<0||n<m)
{
    cout<<"INVALID";
}
else
{
	for(int i=m;i<=n;i=i+(k+1))
    cout<<i<<" ";
}
return 0;
}
