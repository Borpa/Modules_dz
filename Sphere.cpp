import sphere;

import point;
import <iostream>;
import <string>;


Sphere::Sphere() = default;
Sphere::Sphere(const Sphere& other) {
	center = other.center;
	radius = other.radius;
}

Sphere::Sphere(Point xyz) {
	center = Point(xyz);
}

Sphere::Sphere(double r) {
	center = Point(0, 0, 0);
	radius = r;
}

Sphere::Sphere(Point xyz, double r) {
	center = xyz;
	radius = r;
}

void Sphere::setRadius(double r) {
	radius = r;
}

void Sphere::setCenter(Point xyz) {
	center = xyz;
}

double Sphere::getRadius() {
	return radius;
}

Point Sphere::getCenter() {
	return center;
}

bool Sphere::isInsideSphere(Point xyz) {
	return (xyz.x <= center.x + radius) && (xyz.x >= center.x - radius) &&
			(xyz.y <= center.y + radius) && (xyz.y >= center.y - radius) &&
			  (xyz.z <= center.z + radius) && (xyz.z >= center.z - radius);
}

void Sphere::printInfo() {
	std::string xout = std::to_string(center.x);
	std::string yout = std::to_string(center.y);
	std::string zout = std::to_string(center.z);
	std::string output = "[(" + xout + ", " + yout
		+ ", " + zout + ") , " + std::to_string(radius) + "]";
	std::cout << output << '\n';
}

