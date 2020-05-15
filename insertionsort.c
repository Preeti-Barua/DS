#include<stdio.h>
#include<conio.h>
int main()
{
	int AP[50];
	int i,j,temp,n;
	printf("enter size::\n");
	scanf("%d",&n);
	printf("enter the elements:");
	for( i=0;i<n;i++)
	{
		scanf("%d",&AP[i]);
	} 
	printf("the array is:");
	for( i=0;i<n;i++)
	{
		printf("%d",AP[i]);
	} 
	printf("\n");
	

	for(i=1;i<n;i++){
		temp=AP[i];
		j=i-1;
		while(j>=0 && AP[j]>temp)
		{
			AP[j+1]=AP[j];
			j--;
		}
		AP[j+1]=temp;
		
	}
	printf("the sorted array::");
	for(i=0;i<n;i++)
	{
	
	printf("%d ",AP[i]);
}
getch();
	
	
}
