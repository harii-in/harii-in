package 기초_100제;

import java.util.Scanner;

public class 입출력 {

	public static void main(String[] args) {
		/* 1010
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.println(n);
		sc.close();
		*/
		
		/* 1011
		Scanner sc = new Scanner(System.in);
		char x = sc.next().charAt(0);
		System.out.println(x);
		sc.close();
		*/
		
		/* 1012
		Scanner sc = new Scanner(System.in);
		float n = sc.nextFloat();
		System.out.printf("%f", n);
		//println 은 변수의 값 그대로 출력
		//printf는 변수의 형식을 바꿔 출력
		sc.close();
		*/
		
		/* 1013
		Scanner sc =new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();
		System.out.printf("%d %d", n, m);
		sc.close();
		*/
		
		/* 1014
		Scanner sc = new Scanner(System.in);
		char x = sc.next().charAt(0);
		char y = sc.next().charAt(0);
		System.out.printf("%c %c", y, x);
		sc.close();
		*/
		
		/* 1015
		Scanner sc = new Scanner(System.in);
		float n = sc.nextFloat();
		System.out.printf("%.2f", n);
		sc.close();
		*/
		
		/* 1017
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.printf("%d %d %d", n, n, n);
		sc.close();
		*/
		
		/* 1018
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		String[] times = str.split(":");
		String h = times[0];
		String m = times[1];
		System.out.printf("%s:%s", h, m);
		sc.close();
		*/
		
		/* 1019
		Scanner sc = new Scanner(System.in);
		String date = sc.nextLine();
		String[] split = date.split("[.]"); 
		//String[] split = date.split("\\.");
		int y = Integer.parseInt(split[0]);
		int m = Integer.parseInt(split[1]);
		int d = Integer.parseInt(split[2]);
		//Integer.parseInt 문자열을 숫자로 변환
		System.out.printf("%04d.%02d.%02d", y, m, d);
		sc.close();
		*/
		
		/* 1020
		Scanner sc = new Scanner(System.in);
		String id = sc.nextLine();
		String[] split = id.split("-");
		System.out.printf("%s%s", split[0],split[1]);
		sc.close();
		*/
		
		/* 1021
		Scanner sc = new Scanner(System.in);
		String word = sc.next();
		System.out.println(word);
		sc.close();
		*/
		
		/* 1022
		Scanner sc = new Scanner(System.in);
		String line = sc.nextLine();
		System.out.println(line);
		sc.close();
		*/
		
		/* 1023
		Scanner sc = new Scanner(System.in);
		String num = sc.next();
		String[] split = num.split("\\.");
		System.out.printf("%s\n%s", split[0], split[1]);
		sc.close();
		*/
		
		/* 1024
		Scanner sc = new Scanner(System.in);
		String word = sc.next();
		for(int i=0; i<word.length(); i++) {
			System.out.printf("'%c'\n", word.charAt(i));
		}
		sc.close();
		*/
		
		/* 1025
		Scanner sc = new Scanner(System.in);
		String num = sc.next();
		int ans[] = new int[num.length()];
		for(int i=0; i<num.length(); i++) {
			ans[i] = num.charAt(i)-'0';
		}
		System.out.printf("[%d]\n", ans[0]*10000);
		System.out.printf("[%d]\n", ans[1]*1000);
		System.out.printf("[%d]\n", ans[2]*100);
		System.out.printf("[%d]\n", ans[3]*10);
		System.out.printf("[%d]\n", ans[4]);
		sc.close();
		*/
		
		/* 1026
		Scanner sc = new Scanner(System.in);
		String time = sc.next();
		String[] list = time.split(":");
		if(list[1].equals("00"))
			System.out.println("0");
		else
			System.out.println(list[1]);
		sc.close();
		*/
		
		/* 1027
		Scanner sc = new Scanner(System.in);
		String date = sc.next();
		String[] split = date.split("\\.");
		System.out.printf("%s-%s-%s", split[2], split[1], split[0]);
		sc.close();
		*/
	}

}
