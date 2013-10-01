import java.util.Scanner;
import java.math.BigInteger;

class Main
{
	public static void main(String[] Args)
	{
		Scanner sc = new Scanner(System.in);
		BigInteger m = BigInteger.valueOf(2147483647);
		while(sc.hasNextBigInteger())
		{
			BigInteger n = sc.nextBigInteger();
			String input = sc.next();
			BigInteger p = sc.nextBigInteger();
			System.out.print(n);
			System.out.print(" " + input + " ");
			System.out.println(p);
			if (n.compareTo(m) == 1)
				System.out.print("first number too big\n");
			if (p.compareTo(m) == 1)
				System.out.print("second number too big\n");
			if (input == "*")
				n.multiply(p);
			else
				n.add(p);
			if (n.compareTo(m) == 1)
				System.out.print("result too big\n");
		}
	}
}
