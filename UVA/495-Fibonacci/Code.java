import java.util.*;
import java.math.BigInteger;


class Main
{
	static BigInteger[] v = new BigInteger[10000];

	static public BigInteger fat(int i)
	{
		BigInteger b;
		if (i == 0)
		{
			v[i] = BigInteger.ZERO;
			return BigInteger.ZERO;
			}
		if (i == 1)
		{
			v[i] = BigInteger.ONE;
			return BigInteger.ONE;
			}
		if (v[i] == BigInteger.TEN)
		{
			b = fat(i-1);
			b = b.add(fat(i-2));
			v[i] = b;
			return b;
		}
		else
			return v[i];
	}
	public static void main(String[] Args)
	{
		for (int i = 0; i < 5001; ++i)
			v[i] = BigInteger.TEN;
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext())
		{
			int N = sc.nextInt();
			System.out.println("The Fibonacci number for " + N +" is "+ fat(N));
		}
	}
}
