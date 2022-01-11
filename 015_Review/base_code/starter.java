import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	System.out.println("What is your name?");
	String name = sc.nextLine();
	System.out.println("What would your title be called? Example: Destroyer of Worlds");
	String title = sc.nextLine();
	String role1 = new String("Wizard");
	String role2 = new String("Warrior");
	String role3 = new String("Rogue");
	
	System.out.println("What would you like to be, mighty adventurer?");
	System.out.println("Wizard , Warrior , or Rogue ");
	String a = sc.nextLine();

	if(a.equals("Wizard"))
	{
		System.out.println("You are a wizard, " + name + ", " + title);
	}
	if(a.equals("Warrior"))
	{
		System.out.println("You are a mighty warrior, " + name + ", " + title);
	}
	if(a.equals("Rogue"))
	{
		System.out.println("You are a rogue, " + name + ", " + title);
	}
	int sp = 25;
	System.out.println("You have " + sp + " to spend on Strength, Dexterity, Intelligence, Constitution, and Charisma");
	System.out.println("How much would you like to spend on Strength? No more than 10.");
	int strength = sc.nextInt();
	sp = sp - strength;
	if (strength > 10)
	{
		System.out.println("No more than 10.");
		sp=sp+strength;
		System.out.println("Last chance, how much would you like to spend on Strength? No more than 10.");
		strength = sc.nextInt();
		sp = sp - strength;
		
	}
	System.out.println("You have " + sp + " left to spend.");
	System.out.println("How much for Dexterity? No more than 10");
	int dxt = sc.nextInt();
	sp=sp-dxt;
	if (dxt > 10)
	{
		System.out.println("No more than 10.");
		sp=sp+dxt;
		System.out.println("Last chance, how much for Dexterity? No more than 10");
		dxt = sc.nextInt();
		sp=sp-dxt;
	}
	System.out.println("You have " + sp + " left to spend.");
	System.out.println("How much for Intelligence? No more than 10");
	int intel = sc.nextInt();
	sp=sp-intel;
	if (intel > 10)
	{
		System.out.println("No more than 10.");
		sp=sp+intel;
		System.out.println("Last chance, how much Intelligence? No more than 10");
		sp=sp-intel;
		
	}
	System.out.println("You have " + sp + " left to spend.");
	System.out.println("How much for Constitution? No more than 10");
	int cnst = sc.nextInt();
	sp=sp-cnst;
	if (cnst > 10)
	{
		System.out.println("No more than 10.");
		sp=sp+cnst;
		System.out.println("Last chance, how much Constitution? No more than 10");
		sp=sp-cnst;	
	}
	System.out.println("You have " + sp + " left to spend.");
	System.out.println("How much for Charisma? No more than 10");
	int chrsma = sc.nextInt();
	sp=sp-chrsma;
	if (chrsma > 10)
	{
		System.out.println("No more than 10.");
		sp=sp+chrsma;
		System.out.println("Last chance, how much Charisma? No more than 10");
		sp=sp-chrsma;
	}
	System.out.println("You are " + name + ", " + title + ".");
	System.out.println("You have " + strength + " Strength, " + dxt + " Dexterity, " + intel + " Intelligence, " + cnst + " Constitution, and  " + chrsma + " Charisma.");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
}
