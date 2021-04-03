#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int a[5],b[5],c[10],i,j,k;
   // clrscr();
    cout<<"enter 1st array"<<endl;
    for(i=0;i<5;i++)
    {
      cin>>a[i];

    }
    cout<<"enter 2nd array"<<endl;
    for(i=0;i<5;i++)
    {
       cin>>b[i];
    }
    for(i=0;i<5;i++)
    {
      c[i]=a[i]+b[i];
    }
    cout<<"addition of two arrays "<<endl;
    for(i=0;i<5;i++)
    {
      cout<<c[i]<<endl;
    }

    getch();
    return 0;
}




