#include <iostream>
#include <clocale>
#include <iomanip>
#define PI 3.14159265358979323846
using namespace std;
double calcCircleCircumference(double r)
{
	double circle_circumference = 2 * PI * r;
	return circle_circumference;
}
double calcCircleArea(double r)
{
	double circle_area = PI * r * r;
	return circle_area;
}
double calcCircleSectorArea(double r, double ang)
{
	double circle_sector_area = (ang / 360) * PI * r * r;
	return circle_sector_area;
}
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Введите радиус круга, угол сектора и до какого знака после запятой выводить" << endl;
	double r, ang;
	int prc;
	cin >> r; 
	cin >> ang;
	cin >> prc;
	cout << fixed << setprecision(prc) << "Длина окружности: " << calcCircleCircumference(r) << endl;
	cout << "Площадь круга: " << calcCircleArea(r) << endl;
	cout << "Площадь кругового сектора: " << calcCircleSectorArea(r, ang) << endl;
}