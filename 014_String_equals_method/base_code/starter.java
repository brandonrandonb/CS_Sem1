import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	
	String role1 = new String("Wizard");
	String role2 = new String("Warrior");
	String role3 = new String("Rogue");
	
	System.out.println("What would you like to be, mighty adventurer?");
	System.out.println("Wizard , Warrior , or Rogue ");
	String a = sc.nextLine();

	if(a.equals("Wizard"))
	{
		System.out.println("You are a wizard, larry");
	}
	if(a.equals("Warrior"))
	{
		System.out.println("You are a mighty warrior");
	}
	if(a.equals("Rogue"))
	{
		System.out.println("You are a rogue.");
	}








	}
}
