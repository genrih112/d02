void ft_print_comb2(void)
{
	int a, b, c, d, nb1, nb2;
	nb1 = nb2 = 0;
	while (nb1 < 100)
	{
		nb2 = nb1 +1;
		while (nb2 < 100)
		{
			a = nb1 / 10;
			b = nb1 - 10 * a;
			c = nb2 / 10;
			d = nb2 - 10 * c;
			a = a+48;
			b = b+48;
			c = c+48;
			d = d+48;
			write(1, &a, 1);
			write(1, &b, 1);
			write(1,"\t",1);
			write(1, &c, 1);
			write(1, &d, 1);
			write(1, "\n", 1);
			nb2++;
		}
		nb1++;
	}
	return;
}

void main()
{
	ft_print_comb2();
	return;
}
