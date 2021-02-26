import java.util.Scanner;

public class ArayInsertions {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		int A[]=new int[50];
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int position=sc.nextInt();
		int data=sc.nextInt();
		
		for(int i=0;i<n;i++)
		{
			A[i]=sc.nextInt();
		}
//		//insertion from the middle of the array
		for(int i= n-1;i>=position-1;i--)
		{
			A[i+1]=A[i];
		}
		A[position-1]=data;
		n++;
		
//		//insertion at last
//		
//		
//		A[n]=data;
		
		for(int i=0;i<=n;i++)
		{
			System.out.println(A[i]);
		}
		
		

	}

}
