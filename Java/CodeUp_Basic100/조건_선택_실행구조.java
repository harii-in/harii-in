package 기초_100제;

import java.util.Scanner;

public class 조건_선택_실행구조 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double h = sc.nextInt();
		double b = sc.nextInt();
		double c = sc.nextInt();
		double s = sc.nextInt();
		double result = (h*b*c*s)/8/1024/1024;
		System.out.printf("%.1f MB", result);
		
		/* 1070
		Scanner sc = new Scanner(System.in);
		int month = sc.nextInt();
		switch(month) {
		case 12: case 1: case 2:
			System.out.println("winter");
			break;
		case 3: case 4: case 5:
			System.out.println("spring");
			break;
		case 6: case 7: case 8:
			System.out.println("summer");
			break;
		case 9: case 10: case 11:
			System.out.println("fall");
			break;
		}
		sc.close();
		*/
		
		/* 1069
		Scanner sc = new Scanner(System.in);
		char score = sc.next().charAt(0);
		switch(score) {
			case 'A':
				System.out.println("best!!!");
				break;
			case 'B':
				System.out.println("good!!");
				break;
			case 'C':
				System.out.println("run!");
				break;
			case 'D':
				System.out.println("slowly~");
				break;
			default:
				System.out.println("what?");
		}
		sc.close();
		*/
		
		/* 1068
		Scanner sc = new Scanner(System.in);
		int score = sc.nextInt();
		if(90<=score && score<=100)
			System.out.println("A");
		else if(70<=score && score<80)
			System.out.println("B");
		else if(40<=score && score<70)
			System.out.println("C");
		else
			System.out.println("D");
		sc.close();
		*/
		
		/* 1067
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		if(n > 0)
			System.out.println("plus");
		else
			System.out.println("minus");
		if(n % 2 == 0)
			System.out.println("even");
		else
			System.out.println("odd");
		sc.close();
		*/
		
		/* 1066
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[3];
		for(int i=0; i<3; i++) {
			arr[i] = sc.nextInt();
			if(arr[i] % 2 ==0)
				System.out.println("even");
			else
				System.out.println("odd");
		}
		sc.close();
		*/
		
		/* 1065
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[3];
		
		for(int i=0; i<3; i++) {
			arr[i] = sc.nextInt();
			if(arr[i] % 2 == 0)
				System.out.println(arr[i]);
		}
		sc.close();
		*/
	}

}
