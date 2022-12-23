#include <iostream>
using namespace std;

int main()
{
    int n,num,rev=0,rem,sum=0,n1;

    cout<<"Enter Your Number To check Palindrome : ";
    cin>>n;
    num=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (num==rev)
    cout<<"it is a palindrome number"<<endl;
    else
    cout<<"It is not a palindrome number"<<endl;


    cout<<"Enter Your Number to find the sum of all digits : "<<endl;
    cin>>n1;
    while(n1!=0)
    {
        rem=n1%10;
        sum=sum+rem;
        n1=n1/10;
    }
    cout<<"Sum of digits is : "<<sum;
    return 0;
}