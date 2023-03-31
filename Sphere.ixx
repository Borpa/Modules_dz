module;

export module sphere;

import point;

export class Sphere {
public:
	Sphere();
	Sphere(const Sphere& other);
	Sphere(Point xyz);
	Sphere(double r);
	Sphere(Point xyz, double r);

	void setRadius(double r);

	void setCenter(Point xyz);

	double getRadius();

	Point getCenter();

	bool isInsideSphere(Point xyz);

	void printInfo();
protected:
	double radius;
	Point center;
};
