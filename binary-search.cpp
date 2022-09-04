#include<iostream>
using namespace std;

int bin(int[], int,int);
void sort(int[],int);


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

    sort(p,s);
    cout<<endl<<"After sorting : ";
    for(i=0;i<s;i++)
    {
        cout<<endl<<p[i];
    }

    cout<<endl<<"Enter the value to be searched : ";
    cin>>v;

    pos = bin(p,s,v);

    if(pos==0)
    cout<<endl<<v<<" Not found";
    else
    cout<<endl<<v<<" Found at "<<pos<<" position ";

    return 0;

}

void sort(int a[],int s)
{
    int i,j,t;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}

int bin(int a[],int s, int v)
{
    int l,h,m,f=0;
    l=0;
    h=s-1;
    while(l<=h)
    {
        m=(l+h)/2; 

        if(v>a[m])

            l=m+1;

        else    if(v<a[m]) 

            h=m-1;

        else
            return (m+1);
                    
     }

     return (f);

}