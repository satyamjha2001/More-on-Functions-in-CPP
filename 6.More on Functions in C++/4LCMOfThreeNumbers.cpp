#include<iostream>
using namespace std;
int lcm(int,int,int);
int main() {
int a,b,c;
cout<<"Enter three numbers for calculating LCM: ";
cin>>a>>b>>c;
cout<<"LCM is "<<lcm(a,b,c);
return 0;
}
int lcm(int a,int b,int c)
{   int max=a>b?a>c?a:c:b>c?b:c;
    for(int i=max;i<=(a*b*c);i+=max)
    {
        if(i%a==0 && i%b==0 && i%c==0)
        {
            return i;
        }
    }
    return 0;
}