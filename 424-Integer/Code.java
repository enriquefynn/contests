import java.util.Scanner;
import java.math.BigInteger;

class Main
{
	public static void main(String[] Args)
	{
		Scanner sc = new Scanner(System.in);
		BigInteger sum = BigInteger.ZERO;
		while(true)
		{
			BigInteger V = sc.nextBigInteger();
			if (V.compareTo(BigInteger.ZERO) == 0)
				break;
			sum = sum.add(V);
		}
		System.out.println(sum);
	}
}
