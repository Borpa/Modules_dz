#pragma once

struct Point {
	double x, y, z;
	Point();
	Point(double a, double b, double c);
	Point(const Point& other);
};