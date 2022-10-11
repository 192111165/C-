#include <iostream>
using namespace std;
int main()
{
int total,staff,student,ns;
cout<<"Enter total users: ";
cin>>total;
cout<<"Enter staff users: ";
cin>>staff;
ns=(staff/3);
if(total<0)
cout<<"INVALID";
else
{
student=total-staff-ns;
cout<<"student users="<<student;
}
return 0;
}
