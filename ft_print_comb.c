void ft_print_comb(void)
{
	int a, b, c, nb;
	nb = 0;
	while (nb++ < 1000)
	{
		a = nb / 100;
		b = (nb - 100 * a) / 10;
		c = (nb - 100 * a - 10 * b);
		if ((a == b) || (b == c) || (a == c))
			continue;
		else
			if ((nb >= (a *100 + c * 10 + b)) || 
					(nb >= (b * 100 + a * 10 + c)) ||
					(nb >= (b * 100 + c * 10 + a)) ||
					(nb >= (c * 100 + a * 10 + b)) ||
					(nb >= (c * 100 + b * 10 + a)))
				continue;
			a = a+48;
			b = b+48;
			c = c+48;
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
			write(1, "\n", 1);
	}
	return;
}

void main()
{
	ft_print_comb();
	return;
}

