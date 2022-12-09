#ifndef POINT_H
#define POINT_H

#include "./Fixed.hpp"
#include <iostream>

class Point{

	private:
		Fixed const	x;
		Fixed const	y;

	public:
		Point();
		Point(Fixed const &x, Fixed const &y);
		Point(const Point &other);
		Point &operator=(Point const &other);
		~Point();

		Fixed getX() const;
		Fixed getY() const;
};

float surface(Point const a, Point const b, Point const c);
bool bsp(Point const a, Point const b, Point const c, Point const P);

#endif