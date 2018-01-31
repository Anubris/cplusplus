//  Copyright (c) 2017 Antoine Tran 
//  Copyright (c) 2018 Oscar Poulot
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

double exo1(double rayon)
{
	double volume;
	volume = 4.00 / 3.00 * 3.14 * rayon * rayon * rayon;
	return volume;
}

void exo2(short a, short b)
{
	short y;
	y = a < b && !a;
}
#endif // MY_HEADER_HPP

