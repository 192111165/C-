#include<iostream>
using namespace std;
int main()
{
	int age,years;
	cout<<"Enter your age: "<<endl;
	cin>>age;
	if(age>=18)
	{
		cout<<"you are allowed to  vote"<<endl;
	}
	else
	{
		cout<<" You are  allowed to vote after "<<18-age;cout<<" years "<<endl;
}
}
