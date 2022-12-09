#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"

static float ft_abs(float num){
	if(num >= 0)
		return num;
	else
		return (-1 * num);
}

float surface(Point a, Point b, Point c){
	float num;
	num =  (a.getX() * ( b.getY() - c.getY()) + \
			b.getX() * ( c.getY() - a.getY()) + \
			c.getX() * ( a.getY() - b.getY())).toFloat();
	return(ft_abs( num / 2));
}

bool bsp(Point a, Point b, Point c, Point P)
{
	float A,B,C,D;
	if( a.getX() == P.getX() && a.getY() == P.getY() || \
		b.getX() == P.getX() && b.getY() == P.getY() || \
		c.getX() == P.getX() && c.getY() == P.getY() ) {
		std::cout << "It is in the vertex so..." << std::endl;
		return (false);
	}
	A = surface(a, b, c);
	B = surface(P, b, c);
	C = surface(a, P, c);
	D = surface(a, b, P);
	if( B == 0 || C == 0 || D == 0) {
		std::cout << "It is in the edge so..." << std::endl;
		return (false);
	}
	return(A == (B + C + D));
}