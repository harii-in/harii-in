package 기초_100제;

import java.util.Scanner;

public class 배열 {

	public static void main(String[] args) {
		//기초 2차원 배열
		/* 1099
		Scanner sc = new Scanner(System.in);
		int [][] arr = new int[10][10];
		for(int i=0; i<10; i++)
			for(int j=0; j<10; j++)
				arr[i][j] = sc.nextInt();
		int y = 1;
		int end = 0;
		for (int i=1; i<10; i++) {
			if(end != 1) {
				for(int j=y; j<10; j++) {
					if(arr[i][j] == 0)
						arr[i][j] = 9;
					else if(arr[i][j] == 2) {
						arr[i][j] = 9;
						end = 1;
						break;
						}
					else {
						y = j-1;
						break;
					}
				}
			}
			else
				break;
		}
		for(int i=0; i<10; i++) {
			for(int j=0; j<10; j++)
				System.out.printf("%d ", arr[i][j]);
			System.out.println();
		}
		sc.close();
		*/
		
		/* 1098
		Scanner sc = new Scanner(System.in);
		int h = sc.nextInt();
		int w = sc.nextInt();
		int n = sc.nextInt();
		
		int[][] arr = new int[w][h];
		int l, d, x, y;
		for(int i=0; i<n; i++) {
			l = sc.nextInt();
			d = sc.nextInt();
			x = sc.nextInt()-1;
			y = sc.nextInt()-1;
			
			for(int j=0; j<l; j++) {
				if(d==0) {
					if(y-1+j < 100-h)
						arr[x][y+j] = 1;
				}
				else {
					if(x-1+j < 100-w)
						arr[x+j][y] = 1;
				}
			}
		}
		for(int i=0; i<w; i++) {
			for(int j=0; j<h; j++)
				System.out.printf("%d ", arr[i][j]);
			System.out.println();
		}
		sc.close();
		*/
		
		/* 1098
		Scanner sc = new Scanner(System.in);
		int h = sc.nextInt();
		int w = sc.nextInt();
		int[][] arr = new int[h][w];
		int n = sc.nextInt();
		int l, d, x, y;
		
		for(int i=0; i<n; i++) {
			l = sc.nextInt();
			d = sc.nextInt();
			x = sc.nextInt();
			y = sc.nextInt();
			
			if(d==0)
				for(int j=0; j<l; j++)
					arr[x-1][y-1+j] = 1;
			else if(d==1)
				for(int k=0; k<l; k++)
					arr[x-1+k][y-1] = 1;
		}
		for(int i=0; i<h; i++) {
			for(int j=0; j<h; j++)
				System.out.printf("%d ", arr[i][j]);
			System.out.println();
		}
		sc.close();
		*/
		
		/* 1097
		Scanner sc = new Scanner(System.in);
		int[][] arr  = new int[20][20];
		int x, y;
		for(int i=1; i<20; i++)
			for(int j=1; j<20; j++)
				arr[i][j] = sc.nextInt();
		int n = sc.nextInt();
		for(int i=1; i<=n; i++) {
			x = sc.nextInt();
			y = sc.nextInt();
			for(int j=1; j<20; j++) {
				if(arr[x][j] == 0)
					arr[x][j] = 1;
				else
					arr[x][j] = 0;
			}
			for(int k=0; k<20; k++) {
				if(arr[k][y]==0)
					arr[k][y] = 1;
				else
					arr[k][y] = 0;
			}
		}
		for(int i=1; i<20; i++) {
			for(int j=1; j<20; j++)
				System.out.printf("%d ", arr[i][j]);
			System.out.println();
		}
		sc.close();
		*/
		
		/* 1096
		Scanner sc = new Scanner(System.in);
		int[][] arr  = new int[20][20];
		int n = sc.nextInt();
		int x, y;
		for(int i=1; i<=n; i++) {
			x = sc.nextInt();
			y = sc.nextInt();
			arr[x][y] = 1;
		}
		for(int i=1; i<20; i++) {
			for(int j=1; j<20; j++)
				System.out.printf("%d ", arr[i][j]);
			System.out.println();
		}
		sc.close();
		*/
		
		
		//기초 1차원 배열
		/* 1095
		Scanner sc = new Scanner(System.in);
		int cnt = sc.nextInt();
		int min = 0;
		int[] arr = new int[cnt];
		for(int i=0; i<cnt; i++)
			arr[i] = sc.nextInt();
		min = arr[0];
		for(int i=1; i<cnt; i++)
			if(arr[i]<=min)
				min = arr[i];
		System.out.println(min);
		sc.close();
		*/
		
		/* 1094
		Scanner sc = new Scanner(System.in);
		int cnt = sc.nextInt();
		int[] arr = new int[cnt];
		for(int i=0; i<cnt; i++)
			arr[i] = sc.nextInt();
		for(int i=cnt-1; i>=0; i--)
			System.out.printf("%d ", arr[i]);
		sc.close();
		*/
		
		/* 1093
		Scanner sc = new Scanner(System.in);
		int cnt = sc.nextInt();
		int[] arr = new int[cnt];
		int[] arr2 = new int[24];
		int num = 0;
		for(int i=0; i<cnt; i++) {
			arr[i] = sc.nextInt();
			num = arr[i];
			arr2[num]++;
		}
		for(int i=1; i<24; i++)
			System.out.printf("%d ", arr2[i]);
		sc.close();
		*/
	}

}
