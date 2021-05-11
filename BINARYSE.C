#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],i,s,n,low,high,mid,flag=0;
  clrscr();
  printf("enter size");
  scanf("%d",&n);
  printf("enter array elements in accending order");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  printf("\nenter element to search\n");
  scanf("%d",&s);
  low=0,
  high=n-1;
  while(low<=high)
  {
   mid=(low+high)/2;
   if(s==a[mid])
   {
    flag=1;
    break;
   }
   else if(s<a[mid])
   {
     high=mid-1;
   }
   else
   {
    low=mid+1;
   }
  }
  if(flag==0)
  {
    printf("\n%d not found",s);
  }
  else
  {
    printf("\n%d found at %d\n",s,mid+1);
  }

getch();
}






