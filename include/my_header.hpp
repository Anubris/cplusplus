//  Copyright (c) 2017 Antoine Tran Tan
//  Copyright (c) 2018 Oscar Poulot
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

void exo1 (void)
{
	long a = 2, b = 1, c = 0;
	while (a + b > 0)
	{
		a = a - 2;
		b = b + 1;
		c = c + 1;
	}
}

void exo2 (void)
{
	long n = 3, fac = 1, i = 1;

	if (n > 0)
		while (i <= n)
		{
			fac = fac * i;
			i = i + 1;
		}
	else
		if (n < 0)
			fac = 0;
}

int essayer_code(unsigned short code);

void exo3(void)
{
	long n = 0, code = 7147, test = 1
	while (n != code)
		{
			test = 0
			n = n + 1;
		}
	else
}
#endif // MY_HEADER_HPP