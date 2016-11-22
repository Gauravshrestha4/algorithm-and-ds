#include<iostream.h>
#include<conio.h>

int partition(int *a,int low,int high)
{
 int pivot;
 pivot=*(a+high);
 int i=low-1,temp;
 for(int j=low;j<=high;j++)
 {
   if(*(a+j)<pivot)
   {i++;
    temp=*(a+j);
    *(a+j)=*(a+i);
    *(a+i)=temp;
   }
   else{
    j++;
   }
 }
 if(i==low-1)
 {i++;
  temp=*(a+i);
  *(a+i)=*(a+high);
  *(a+high)=temp;
  }

 return i;
}
void quicksort(int *a,int low,int high)
{if(low<high)
{
 int pivot=partition(a,low,high);
 quicksort(a,low,pivot);
 quicksort(a,pivot+1,high);
}
else return;
}
void main()
{
 clrscr();
 int a[10]={9,8,7,6,5,4,3,2,1,0};
 quicksort(a,0,9);
 cout<<"array after sort\n";
 for(int i=0;i<10;i++)
 {
  cout<<a[i]<<"\t";
 }
 getch();
}