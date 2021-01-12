package java_tutorials;

class Calculator_define{
	int left, right;
	
	public void setOprands(int left, int right) {
		this.left=left;
		this.right=right;
	}
	public void sum() {
		System.out.println(this.left+this.right);
	}
	public void avg() {
		System.out.println((this.left+this.right)/2);
	}
}

class MoreCalculator extends Calculator_define{
	public void mult() {
		System.out.println(this.left * this.right);
	}
	public void division() {
		System.out.println(this.left/this.right);
	}
}

public class Calculator_Extends_Example {

	public static void main(String[] args) {
		MoreCalculator c1 = new MoreCalculator();
		c1.setOprands(20, 10);
		c1.sum();
		c1.avg();
		c1.mult();
		c1.division();
		

	}

}
