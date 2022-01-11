import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	Random rand= new Random();
	int rand_num1 = rand.nextInt(1000)+1;
	int rand1 = sc.nextInt();
	if (rand_num1 == rand1)
	{
		System.out.println("how did you guess that");
	}
	else 
	{
		System.out.println("never going to guess it");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
}
