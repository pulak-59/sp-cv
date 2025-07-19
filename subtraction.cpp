#include<iostream>
using namespace std;

int main()
{
    int sub,a,b;
    cout<<"Enter any 1st num :";
    cin >>a;
    cout<<"Enter any 2nd num :";
    cin >>b;

    if(a>b)
    {
       sub = a-b;
    }
    else
       sub = b-a;

    cout <<"subtracktion :"<<sub<<endl;
} 
