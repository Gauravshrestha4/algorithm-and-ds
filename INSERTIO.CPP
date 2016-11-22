#include<iostream.h>
#include<conio.h>
void insertionsort(int ar[],int size)
{
 int value;
 for(int i=1;i<size;i++)
 {
  int hole=i;
  value=ar[hole];
  while(hole>0 &&ar[hole-1]>value)
  {
   ar[hole]=ar[hole-1];
   hole-=1;
  }
  ar[hole]=value;
 }
 return;
}
void main()
{
 clrscr();
 int ar[10]={9,8,7,6,5,4,3,2,1,0}  ;
 insertionsort(ar,10);
 cout<<"array after sort\n";
 for(int i=0;i<10;i++)
 {
  cout<<ar[i]<<"\t";
 }
 getch();
}