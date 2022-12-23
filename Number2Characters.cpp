#include<iostream>
using namespace std;

int main()
{
    int num,rev=0,rem;

    cout<<"Enter Your Number (i.e, 0 should not be at starting and last) : ";
    cin>>num;
    while(num!=0)
    {
        rem=num%10l;
        rev=rev*10+rem;
        num=num/10;
    }
    cout<<"Reverse Number : "<<rev<<endl;

    while(rev!=0)
    {
        rem=rev%10;
        switch(rem)
        {
            case 1: cout<<"One ";  
                    break;
            case 2: cout<<"Two ";   
                    break;
            case 3: cout<<"Three ";   
                    break;
            case 4: cout<<"Four ";   
                    break;
            case 5: cout<<"Five ";   
                    break;
            case 6: cout<<"Six ";   
                    break;
            case 7: cout<<"Seven ";  
                    break;
            case 8: cout<<"Eight ";   
                    break;
            case 9: cout<<"Nine ";   
                    break;
            case 0: cout<<"Zero ";   
                    break;
        }
        rev=rev/10;
    }
    return 0;
}