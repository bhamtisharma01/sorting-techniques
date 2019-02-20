#include<stdio.h>

void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int partition(int arr[], int l,int h)
{
	int pivot=arr[h];
	int i=(l-1);
	int j;
for(j=l;j<=h-1;j++)
{
	if(arr[j]<=pivot)
	{
		i++;
		swap(&arr[i],&arr[j]);
	}
	}
	swap(&arr[i+1],&arr[h]);
	return i+1;	
}

void quicksort(int a[],int l,int h)
{
	if(l<h)
	{
		int p=partition(a,l,h);
		quicksort(a,l,p-1);
		quicksort(a,p+1,h);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int i,a[10];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
