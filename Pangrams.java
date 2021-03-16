package codeforces;

import java.util.Collections;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Pangrams {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		String s = null;
		
		Set<Character> hs=new HashSet();
		for(int i=0;i<n;i++)
		{
			 s=sc.next();
			
				
		}
		
		s=s.toLowerCase();
	    Set<Character> set=new HashSet();
	    
	    
		for(int i=0;i<n;i++)
		{
			 set.add(s.charAt(i));
			
				
		}
		
		
		System.out.println(set);

		

	}

}
