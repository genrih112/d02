void ft_print_reverse_alphabet(void)
{
	char ch;
	ch = 'z';
	while (ch >= 'a')
	{
		write(1, &ch, 1);
		ch--;
	}
	return;
}

void main()
{
	ft_print_reverse_alphabet();
	return;
}

