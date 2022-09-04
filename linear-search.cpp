#include<iostream>
using namespace std;

int linear(int[],int,int);

int main()
{
    int *p,s,v,pos,i;

    cout<<endl<<"enter no of elements : ";
    cin>>s;

    p = new int [s];

    for(i=0;i<s;i++)
    {
        cout<<endl<<"Enter the element : ";
        cin>>p[i];
    }

    cout<<endl<<"Enter the value to be searched : ";
    cin>>v;

    pos = linear(p,s,v);

    if(pos==0)
    cout<<endl<<v<<" Not found";
    else
    cout<<endl<<v<<" Found at "<<pos<<" position ";

    return 0;
}

int linear(int a[],int s,int v)
{
    int i,f=0;
    for(i=0;i<s;i++)
    {
        if(a[i]==v)
        {
            f=1;
            return(i+1);
        }
    }
    return(f);
}