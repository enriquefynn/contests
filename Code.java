import java.util.Scanner;
import java.math.BigInteger;

class Main
{
	public static void main(String[] Args)
	{
		Scanner sc = new Scanner(System.in);
		while(true)
		{
			int N = sc.nextInt(), F = sc.nextInt();
			if (N == 0 && F == 0)
				break;
			BigInteger sum = BigInteger.ZERO;
			for (int i = 0; i < N; ++i)
			{
				BigInteger V = sc.nextBigInteger();
				sum = sum.add(V);
			}

		}
	}
}
