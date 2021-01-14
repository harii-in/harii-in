package java_tutorials;

class Calculator_SC{
	int left, right;
	
	public void steOprands(int left, int right) {
		this.left=left;
		this.right=right;
	}
	public void sum() {
		System.out.println(this.left+this.right);
	}
	public int avg() {
		return (this.left+this.right)/2;
	}
}

class SC extends Calculator_SC{
	public void sum() {
		System.out.println("실행 결과는" +(this.left+this.right) + "입니다.");
	}
	
	public int avg() {
		return super.avg();
	}
}

public class Overring_Example {

	public static void main(String[] args) {
		SC c1 = new SC();
		c1.steOprands(30, 10);
		c1.sum();
	}

}
