#include<stdio.h>
#include<conio.h>

int binarysearch(int A[],int n,int x)
{
	int i;
	
	for(i=0;i<n-1;i++)
	{
		if(A[i]==x)
		{
			return 1;
		}
		
		
	}
	return -1;
}
int main()
{
	
	int A[]={2,6,14,21,36,47,63,81};
	int n= sizeof(A)/sizeof(A[0]);

	int x;
	scanf("%d",&x);
	int r=binarysearch(A,n,x);
	if(r==-1)
	{
		printf("not present");
			}
			else
			{
				printf("present");
			}
	
	   
}
