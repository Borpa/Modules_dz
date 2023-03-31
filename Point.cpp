import point;

Point::Point() = default;

Point::Point(double a, double b, double c) {
	x = a;
	y = b;
	z = c;
}

Point::Point(const Point& other) {
	x = other.x;
	y = other.y;
	z = other.z;
}
