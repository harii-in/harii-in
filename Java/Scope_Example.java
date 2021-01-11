package java_tutorials;

public class Scope_Example {
	static int i;//전역변수
	
	/*
	static void a() {
		int i=0;//method a()안에서만 유효한 i
		//전역변수 i 와는 무관
	}
	*/
	
	static void a() {
		i=0;
	}
	
	public static void main(String[] args) {
		for(int i=0; i<5; i++) {
			a();
			System.out.println(i);
		}//for문 안에서만 유효한 i
	}
}
