void ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else 
		write(1, "P", 1);
	return;
}

void main()
{
	int n;
//	read(0, &n, 1);
	n = -7;
	ft_is_negative(n);
	return;
}
