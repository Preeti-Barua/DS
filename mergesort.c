#include<stdio.h>
#include<conio.h>
void mergesort(int [],int ,int);
void merge(int  [],int,int,int);
void main()
{
	int A[]={10,9,7,101,23,44,12,78,34,23};
	int i;
	mergesort(A,0,9);
	printf("printing the  sorted elements\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",A[i]);
	}
}

void mergesort(int A[],int beg,int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		mergesort(A,beg,mid);
		mergesort(A,mid+1,end);
		merge(A,beg,mid,end);
		
	}
}

void merge(int A[], int beg, int mid,int end)
{
	int i,j,k,b[20];
	i=beg;
	j=mid+1;
	k=beg;
	
	while(i<=mid && j<=end)
	{
		if(A[i]<=A[j])
		{
			b[k]=A[i];
			i++;
			k++;
			
		}
		else
		{
			b[k]=A[j];
			j++;k++;
		}
	}
	if(i>mid)
	{
		while(j<=end)
		{
	            		b[k]=A[j];
			            j++;k++;	
		}
		
	}
	else
	{
	       while(i<=mid)
	       {
	       	b[k]=A[i];
	       	i++;
	       	k++;
		       }	
	}
	


for(k=beg;k<=end;k++)

{
	A[k]=b[k];	
}
	
}
