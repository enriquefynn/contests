import java.util.*;
import java.math.BigInteger;


class Main
{
	static BigInteger[] v = new BigInteger[101];

	static public BigInteger fib(int i)
	{
		BigInteger b;
		if (i == 0)
		{
			v[i] = BigInteger.ONE;
			return BigInteger.ONE;
			}
		if (i == 1)
		{
			v[i] = BigInteger.ONE.add(BigInteger.ONE);
			return BigInteger.ONE.add(BigInteger.ONE);
			}
		if (v[i] == BigInteger.TEN)
		{
			b = fib(i-1);
			b = b.add(fib(i-2));
			v[i] = b;
			return b;
		}
		else
			return v[i];
	}
	public static void main(String[] Args)
	{
		for (int i = 0; i < 101; ++i)
			v[i] = BigInteger.TEN;
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext())
		{	
			String s = sc.nextLine();
			int[] p = new int[2];
			int l = 0;
			int d = 0;
			for (int i  = s.length() - 1; i >=0; --i)
			{
				if (s.charAt(i) == '1')
				{
					p[l++] = d;
					if (l == 2)
						break;
				}
				++d;
			}
			BigInteger fibo;
			if (l == 1)
				fibo = fib(p[0]);
			else
				fibo = fib(p[0]).add(fib(p[1]));
			s = sc.nextLine();
			l = 0;
			d = 0;
			System.out.println(fibo);
			for (int i  = s.length() - 1; i >=0; --i)
			{
        if (s.charAt(i) == '1')
        {
          p[l++] = d;
          if (l == 2)
            break;
        }
				++d;
			}
			if (l == 1)
				fibo = fibo.add(fib(p[0]));
			else
				fibo = fibo.add(fib(p[0]).add(fib(p[1])));
			System.out.println(fibo);
			boolean start = false;
			BigInteger k = null;
			for (int i = 100; i >=0; --i)
			{
				if (fib(i).compareTo(fibo) <= 0 && !start)
				{
					start = true;
					k = fib(i);
					System.out.print(1);
				}
				else
				if (start)
				{
					System.out.println(" " + fib(i).add(k) + " " + fibo);
					if (fibo.compareTo(fib(i).add(k)) == 0)
						System.out.print(1);
					else
						System.out.print(0);
				}
			}
			System.out.println();
		}
	}
}






