package 기초_100제;

/* 1084
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;
*/

import java.util.Scanner;

public class 종합 {

	public static void main(String[] args) {
		/* 1092
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int day = 1;
		while(day % a != 0||day % b != 0||day % c != 0)
			day++;
		System.out.println(day);
		sc.close();
		*/
		
		/* 1091
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int m = sc.nextInt();
		int d = sc.nextInt();
		int n = sc.nextInt();
		long result = a*m+d;
		if(n == 1)
			System.out.println(a);
		else {
			for(int i=2; i<n; i++)
				result = result*m+d;
			System.out.println(result);
		}
		sc.close();
		*/
		
		/* 1090
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int r = sc.nextInt();
		int n = sc.nextInt();
		long result = (long)(a*Math.pow(r, n-1));
		System.out.println(result);
		sc.close();
		*/
		
		/* 1089
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int d = sc.nextInt();
		int n = sc.nextInt();
		System.out.println(a+(d*(n-1)));
		sc.close();
		*/
		
		/* 1088
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i=1; i<=n; i++) {
			if(i % 3 == 0)
				continue;
			System.out.printf("%d ", i);
		}
		sc.close();
		*/
		
		/* 1087
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int sum = 0;
		for(int i=1; ; i++) {
			sum += i;
			if(sum >= n) {
				System.out.println(sum);
				break;
			}
		}
		sc.close();
		*/
		
		/* 1086
		Scanner sc = new Scanner(System.in);
		double w = sc.nextInt();
		double h = sc.nextInt();
		double b = sc.nextInt();
		double result = (w*h*b)/8/1024/1024;
		System.out.printf("%.2f MB", result);
		sc.close();
		*/
		
		/* 1085
		Scanner sc = new Scanner(System.in);
		double h = sc.nextInt();
		double b = sc.nextInt();
		double c = sc.nextInt();
		double s = sc.nextInt();
		double result = (h*b*c*s)/8/1024/1024;
		System.out.printf("%.1f MB", result);
		sc.close();
		*/
		
		/* 1084
		throws IOException
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		String s[] = br.readLine().split(" ");
		int cnt = 0;
		int r = Integer.parseInt(s[0]);
		int g = Integer.parseInt(s[1]);
		int b = Integer.parseInt(s[2]);
		
		for(int i=0; i<r; i++)
			for(int j=0; j<g; j++)
				for(int k=0; k<b; k++) {
					bw.write(i+" "+j+" "+k+"\n");
					cnt++;
				}
		bw.write(String.valueOf(cnt));
		bw.flush();
		*/
		
		/* 1084 시간초과
		Scanner sc = new Scanner(System.in);
		int r = sc.nextInt();
		int g = sc.nextInt();
		int b = sc.nextInt();
		int count = 0;
		for(int i=0; i<r; i++)
			for(int j=0; j<g; j++)
				for(int k=0; k<b; k++) {
					System.out.printf("%d %d %d\n", i, j, k);
					count++;
				}
		System.out.println(count);
		sc.close();
		*/
		
		/* 1083
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i=1; i<=n; i++) {
			if(i % 3 ==0)
				System.out.printf("X ");
			else
				System.out.printf("%d ", i);
		}
		sc.close();
		*/
		
		/* 1082
		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		int n = Integer.parseInt(s, 16);
		for(int i=1; i<16; i++)
			System.out.printf("%X*%X=%X\n", n, i, n*i);
		sc.close();
		*/
		
		/* 1081
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();
		for(int i=1; i<=n; i++)
			for(int j=1; j<=m; j++)
				System.out.println(i+" "+j);
		sc.close();
		*/
		
		/* 1080
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int sum=0;
		for(int i=1; i<1000; i++) {
			sum += i;
			if(sum >= n){
				System.out.println(i);
				break;
			}
		}
		sc.close();
		*/
		
		/* 1079
		Scanner sc = new Scanner(System.in);
		while(true) {
			char word = sc.next().charAt(0);
			System.out.println(word);
			if(word == 'q')
				break;
		}
		sc.close();
		*/
		
		/* 1078
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int sum=0;
		for(int i=1; i<=n; i++)
			if(i % 2 == 0)
				sum += i;
		System.out.println(sum);
		sc.close();
		*/
	}

}
