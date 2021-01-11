package java_tutorials;

class Calculator2 {
	static double PI = 3.14;
	static int base = 0;
	int left, right;
	
	public void setOprands(int left, int right) {
		this.left = left;
		this.right = right;
	}
	public void sum() {
		System.out.println(this.left+this.right+base);
	}
	public void avg() {
		System.out.println((this.left+this.right)/2);
	}
}

public class Calculator2_Example {

	public static void main(String[] args) {
		/*
		Calculator c1 = new Calculator();
		System.out.println(c1, PI);
		
		Calculator c2 = new Calculator();
		System.out.println(c2, PI);
		
		System.out.println(Calculator.PI);
		*/
		
		Calculator2 c1 = new Calculator2();
		c1.setOprands(10,20);
		c1.sum();
		
		Calculator2 c2 = new Calculator2();
		c2.setOprands(20,40);
		c2.sum();
		
		Calculator2.base = 10;
		
		c1.sum();//40
		c2.sum();//70
		

	}

}
