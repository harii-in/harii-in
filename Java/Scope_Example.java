package java_tutorials;

public class Scope_Example {
	static int i;//��������
	
	/*
	static void a() {
		int i=0;//method a()�ȿ����� ��ȿ�� i
		//�������� i �ʹ� ����
	}
	*/
	
	static void a() {
		i=0;
	}
	
	public static void main(String[] args) {
		for(int i=0; i<5; i++) {
			a();
			System.out.println(i);
		}//for�� �ȿ����� ��ȿ�� i
	}
}
