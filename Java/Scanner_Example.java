package java_tutorials;

import java.util.Scanner;

public class Scanner_Example {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		/*
		int i =sc.nextInt();
		System.out.println(i*1000);
		*/
		
		while(sc.hasNextInt()) {
			System.out.println(sc.nextInt()*1000);
		}
		
		sc.close();
		
	}

}
