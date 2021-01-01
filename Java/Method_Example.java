package java_tutorials;

public class Method_Example {
	
	/*
	public static void numbering(int init, int limit) {
		int i=init;
		while(i<limit) {
			System.out.println(i);
			i++;
		}
	}
	*/
	
	/*
	public static String numbering(int init, int limit) {
		int i=init;
		String output = "";
		while(i<limit) {
			output += i;
			i++;
		}
		return output;
	}
	*/
	
	public static String[] getMembers() {
		String[] members = {"손봉우", "차하린", "골든 리트리버"};
		return members;
	}

	public static void main(String[] args) {
		//numbering(2, 7);
		
		/*
		String result = numbering(1,5);
		System.out.println(result);
		*/
		
		String[] members = getMembers();

	}

}
