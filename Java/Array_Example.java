package java_tutorials;

public class Array_Example {

	public static void main(String[] args) {
		/*
		//String[] classgroup = {"�պ���", "���ϸ�", "���ֿ�"};
		String[] classgroup = new String[3];
		classgroup[0]="���ϸ�";
		classgroup[1]="�պ���";
		classgroup[2]="���ֿ�";
		System.out.println(classgroup[0]);
		System.out.println(classgroup.length);
		*/
		
		
		String[] members = {"�պ���", "���ϸ�", "�̰���"};
		/*
		for(int i=0; i<members.length; i++) {
			String member = members[i];
			System.out.println(member + " ����� �޾ҽ��ϴ�.");
		}
		*/
		
		for(String e : members) {
			System.out.println(e + " ����� �޾ҽ��ϴ�.");
		}
		
	}

}
