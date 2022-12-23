#include <iostream>
using namespace std;

int main()
{
int lb,ub,i,num,count=0;
cout<<"Enter the Lower bound of Prime No. : ";
cin>>lb;
cout<<"Enter the Upper bound of Prime No. : ";
cin>>ub;

for(num=lb;num<=ub;num++)
{
    count=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        count++;
    }
    if(count==2)
    cout<<num<<endl;
}
}