#include <iostream>  
using namespace std;  
int main() {  
  int n1=0,n2=1,n3,i,n,sum=1;    
 cout<<"Enter the n value: ";    
 cin>>n;    
  
 for(i=2;i<n;i++) 
 {  
  n3=n1+n2;
  sum=sum+n3;    
  n1=n2;    
  n2=n3;    
 }
 cout<<"sum of fibonacci series"<<sum;
 return 0;
}
