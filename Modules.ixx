import <iostream>;
import point;
import sphere;
import <string>;

int main() {
	Point center(1.0, 5.0, -5.0);
	Sphere sphere0 = Sphere(center, 2.5);
	sphere0.printInfo();

	std::cout << std::boolalpha
		<< sphere0.isInsideSphere(Point(1.4, 4.6, -4.0)) << std::endl;

	sphere0.setRadius(0.5);
	sphere0.printInfo();

	std::cout << std::boolalpha
		<< sphere0.isInsideSphere(Point(1.4, 4.6, -4.0)) << std::endl;

	sphere0.setCenter(Point(1.2, 4.7, -4.1));
	sphere0.printInfo();
	std::cout << std::boolalpha
		<< sphere0.isInsideSphere(Point(1.4, 4.6, -4.0)) << std::endl;

	Sphere sphere1 = sphere0;
	sphere1.printInfo();

	sphere1.setCenter(Point());
	sphere1.printInfo();

	sphere0.setCenter(sphere1.getCenter());
	sphere0.setRadius(2.0);
	sphere0.printInfo();

	return 0;
}