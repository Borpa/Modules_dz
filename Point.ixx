module;

export module point;


export struct Point {
	double x, y, z;
	Point();
	Point(double a, double b, double c);
	Point(const Point& other);
};