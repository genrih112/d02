void ft_putnbr(int unb)
{
	int a, b, c, d, e, f, nb;
	if (unb>=0) nb = unb;
	else nb = -unb;
	a = nb / 100000;
	b = (nb - a*100000) / 10000;
	c = (nb - a*100000 - b*10000)/1000;
	d = (nb - a*100000 - b*10000 - c*1000)/100;
	e = (nb - a*100000 - b*10000 - c*1000 - d*100)/10;
	f = (nb - a*100000 - b*10000 - c*1000 - d*100 - e*10);
	if (unb<0) write(1, "-",1);
	if (nb>=100000) { a = a+48; write(1,&a,1);}
	if (nb>=10000) { b = b+48; write(1,&b,1);}
	if (nb>=1000) { c = c+48; write(1,&c,1);}
	if (nb>=100) { d = d+48; write(1,&d,1);}
	if (nb>=10) { e = e+48; write(1,&e,1);}
	if (nb>=0) { f = f+48; write(1,&f,1);}
       return;
}

void main()
{
	int nb;
//	read(0,&nb,1);
	ft_putnbr(-999999);
	return;
}
