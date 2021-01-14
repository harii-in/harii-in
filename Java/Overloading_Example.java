package java_tutorials;

class Calculator_OL{
	int left, right;
	int third=0;
	
	public void setOprands(int left, int right) {
		System.out.println("setOprands(int left, int right)");
		this.left=left;
		this.right=right;
	}
	public void setOprands(int left, int right, int third) {
		this.setOprands(left, right);
		System.out.println("setOprands(int left, int right, int third)");
		//this.left=left;
		//this.right=right;
		this.third=third;
	}
	
	public void sum() {
		System.out.println(this.left+this.right+this.third);
	}
	public void avg() {
		System.out.println((this.left+this.right+this.third)/2);
	}
}

public class Overloading_Example {

	public static void main(String[] args) {
		Calculator_OL c1 = new Calculator_OL();
		c1.setOprands(30,10);
		c1.sum();
		c1.avg();
		c1.setOprands(10,20,30);
		c1.sum();
		c1.avg();
	}

}
