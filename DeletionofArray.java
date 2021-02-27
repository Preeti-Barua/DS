import java.util.Scanner;

public class DeletionofArray
{

	public static void main(String[] args)
	{

		
		int A[]=new int[50];
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int position=sc.nextInt();
		//int data=sc.nextInt();
		
		for(int i=0;i<n;i++)
		{
			A[i]=sc.nextInt();
		}
//		//insertion from the middle of the array
		for(int i= position-1;i<n-1;i++)
		{
			A[i]=A[i+1];
		}
		n--;
		
		//printing of array
		for(int i=0;i<n;i++)
		{
			System.out.println(A[i]);
		}
		
	
		
	}

}
