#include<stdio.h>

//partition 
int partition(int a[],int start,int end)
{
int t,j;
int pivot=a[end];
int i=(start-1);
for (j=start;j<=end;j++)
{
if(a[j]<pivot)
{
i++;
t = a[i];
a[i]=a[j];
a[j]=t;
}
}
t=a[i+1];
a[i+1]=a[end];
a[end]=t;
return (i+1);
}

//quick sort
void quicksort(int a[],int start,int end)
{
if(start<end)
{
int p=partition(a,start,end);
quicksort(a,start,p-1);
quicksort(a,p+1,end);
}
}

void display(int a[],int n)
{
int i;
for (i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}


int main()
{
int a[]={45,8,34,67,99,32,65};
int n=sizeof(a)/sizeof(a[0]);
printf("Original elements:\n");
display(a,n);
quicksort(a,0,n-1);
printf("\nSorted Array elements:\n");
display(a,n);

}
