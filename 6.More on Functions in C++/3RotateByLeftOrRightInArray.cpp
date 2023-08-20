#include<iostream>
using namespace std;
void rotate(int size,int a[],int d,int n);
int main() {
int size,a[100];
cout<<"Enter size of your array"<<endl;
cin>>size;
cout<<"enter elements of your array"<<endl;
for (int i = 0; i < size; i++)
{
    cin>>a[i];
}
int d,n;
cout<<"enter number of elements to be rotated in an array"<<endl;
cin>>n;
cout<<"enter 1 for Right rotation and -1 for Left Rotation"<<endl;
cin>>d;
rotate(size,a,d,n);
for (int i = 0; i < size; i++)
{
    cout<<a[i]<<" ";
}

return 0;
}
void rotate(int size,int a[],int d,int n)
{   int temp,r;
    if(d==1)
    {
        for(r=1;r<=n;r++)
        {
            temp=a[size-1];
            for(int i=size-1;i>0;i--)
                a[i]=a[i-1];
            a[0]=temp;
        }
    }
    if(d==-1)
    {
        for(r=1;r<=n;r++)
        {
            temp=a[0];
            for(int i=0;i<size-1;i++)
                a[i]=a[i+1];
            a[size-1]=temp;
        }
    }
}