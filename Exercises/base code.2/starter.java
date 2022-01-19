import java.util.Scanner;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	System.out.println("What is your first period?");
	String p1 = sc.nextLine();
	System.out.println("Second period?");
	String p2 = sc.nextLine();
	System.out.println("Third period?");
	String p3 = sc.nextLine();
	 int A=4;
	 int B=3;
	 int C=2;
	 int D=1;
	 int F=0;
	 System.out.println("GPA in period 1?");
	 int gpa1 = sc.nextInt();
	 System.out.println("GPA in period 2?");
	 int gpa2 = sc.nextInt();
	 System.out.println("GPA in period 3?");
	 int gpa3 = sc.nextInt();
	 System.out.println("In " +p1+ " you have " +A+ "."); 
	 System.out.println("In " +p2+ " you have " +A+ ".");
	 System.out.println("In " +p3+ " you have " +A+ ".");
	 System.out.println("Your average GPA is " +A+ ".");
	
	
	
	
	}
	}