import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	Scanner sc=new Scanner(System.in);
	Random rand=new Random();
	int a = rand.nextInt(1000)+1;
	int b = sc.nextInt();
	
	if (a>b)
	{
		System.out.println("its less than the number");
	}
	else if (a<b)
	{
		System.out.println("its greater than the number");
	}
	else if (a==b)
	{
		System.out.println("Narek did you get the number right");
	}
	
	
	
	
	
	
	
	
	
	
	}
}
