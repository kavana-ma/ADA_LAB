#include<time.h>
#include<stdio.h>
#define MAX 5000
void quicksort(int[],int,int);
int partition(int[],int,int);
void main()
{
int i,n,a[MAX],ch;
clock_t start,end;
clrscr();
while(ch)
{
printf("\n enter the number of elements\n");
scanf("%d",&n);
for(i=0;i<n;i++){
a[i]=rand()%200;}
printf("The random generated array is\n");
for(i=0;i<n;i++)
printf(" %d",a[i]);
start=clock();
quicksort(a,0,n-1);
end=clock();
printf("\n\nthe sorted array elements are\n\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
printf("time taken = %f",(end-start)/CLK_TCK);
printf("\n\n do u wish to continue (0/1)\n");
scanf("%d",&ch);
}
}
void quicksort(int a[],int low,int high)
{
int mid;
delay(500);
if(low<high)
{
mid=partition(a,low,high);
quicksort(a,low,mid-1);
quicksort(a,mid+1,high);

}
}
int partition(int a[],int low,int high)
{
int key,i,j,temp,k;
key=a[low];
i=low+1;

j=high;
while(i<=j)
{
while(i<=high & key>=a[i])
i=i+1;
while(key<a[j])
j=j-1;
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
else
{
k=a[j];
a[j]=a[low];
a[low]=k;
}
}
return j;
}
