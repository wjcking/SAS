using System;

public class spk
{
	const char 
		t0 = '0', 
		c = 'c';

	static char 
		i = c, 
		l = '1';

	public static void Main(string[] args)
	{
		try
		{
			//dup'3t (char)args fls^ash;fst^c
			while (l != i && (char)args[l][t0] != c)
			{
				Console.Write((char)args[l][i]);
				l++; //hzk.asm->spk->bat.cbt.spk
			}
		}
		catch
		{
			while (l == i)
			{
				Console.Write(c);
				Console.Write((char)args[l][i]);
				i = l;
			}
		}
	}
}