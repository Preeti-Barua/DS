import java.util.Scanner;

public class BinarySearch {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int arr[] = {16, 19, 20, 23, 45, 56, 78, 90, 96, 100};
		int beg=0;
		int end=arr.length;
		int mid;
		int location=-1;
		Scanner sc=new Scanner(System.in);
		int item=sc.nextInt();
	    location=binary(arr,beg,end,item);
	    if(location!=-1)
	    {
	    	  System.out.println("the location of the item is "+location);
	    }
	    else {
	    	System.out.println("item not found");
	    }
		
		
	}
	
	public static int binary(int arr[], int beg,int end,int item)
	{
		if(end>=beg)
		{
			int mid;
			mid=(beg+end)/2;
			if(arr[mid]==item)
			{
				return mid+1;
			}
			else if(arr[mid]<item)
			{
				return binary(arr,mid+1,end,item);
			}
			else 
			{
				return binary(arr,beg,mid-1,item);
			}
			
			
		}
		return -1;
		

	}
	}


