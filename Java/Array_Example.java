package java_tutorials;

public class Array_Example {

	public static void main(String[] args) {
		/*
		//String[] classgroup = {"손봉우", "차하린", "김주연"};
		String[] classgroup = new String[3];
		classgroup[0]="차하린";
		classgroup[1]="손봉우";
		classgroup[2]="김주연";
		System.out.println(classgroup[0]);
		System.out.println(classgroup.length);
		*/
		
		
		String[] members = {"손봉우", "차하린", "이고잉"};
		/*
		for(int i=0; i<members.length; i++) {
			String member = members[i];
			System.out.println(member + " 상담을 받았습니다.");
		}
		*/
		
		for(String e : members) {
			System.out.println(e + " 상담을 받았습니다.");
		}
		
	}

}
