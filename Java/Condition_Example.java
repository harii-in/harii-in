package java_tutorials;

public class Condition_Example {

	public static void main(String[] args) {
		/*
		String id = args[0];
		if(id.equals("egoing")) {
			System.out.println("right");
		}
		else {
			System.out.println("wrong");
		}
		*/
		
		/*
		String id = args[0];
		String password = args[1];
		if(id.equals("egoing")) {
			if(password.equals("111111"))
				System.out.println("right");
			else
				System.out.println("wrong");
		}
		else
			System.out.println("wrong");
		*/
		
		System.out.println("switch(4)");
		switch(4) {
		case 1:
			System.out.println("one");
			break;
		case 2:
			System.out.println("two");
			break;
		case 3:
			System.out.println("three");
			break;
		default:
			System.out.println("default");
			break;
		}
	}
}
