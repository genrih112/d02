void ft_print_numbers(void)
{
	int n;
	n = 48;
	while (n <= 57)
	{
		write(1, &n, 1);
		n++;
	}
	return;
}

void main()
{
	ft_print_numbers();
	return;
}

