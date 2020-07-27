void ft_print_alphabet(void)
{
	int ch;
	ch = 'a';
	while (ch <= 'z')
	{
		write(1, &ch, 1);
		ch++;
	}
	return;
}


void main ()
{
	ft_print_alphabet();
	return;
}

