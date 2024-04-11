#include <iostream>
#include <cmath>
#include <clocale>
#include <iomanip>
#define PI 3.14159265358979323846
using namespace std;
int calcRectPerimeter(int l, int w) {   //Функция расчёта периметра прямоугольника
	int p = 2 * (l + w);
	return p;
}
int calcRectArea(int l, int w) {   //Функция расчёта площади прямоугольника
	int area = l * w;
	return area;
}
double calcRectDiag(int l, int w) {   //Функция расчёта диагонали прямоугольника
	double diag = sqrt(l * l + w * w);
	return diag;
}
double calcCircleCircumference(double r)   //Функция расчёта длины окружности
{
	double circle_circumference = 2 * PI * r;
	return circle_circumference;
}
double calcCircleArea(double r)   //Функция расчёта площади круга
{
	double circle_area = PI * r * r;
	return circle_area;
}
double calcCircleSectorArea(double r, double ang)   //Функция расчёта площади сектора круга
{
	double circle_sector_area = (ang / 360) * PI * r * r;
	return circle_sector_area;
}
int main() {
	setlocale(LC_ALL, "Rus");
	int p;
	while (true) {
		cout << "\nВыберите фигуру (если захотите закрыть программу - 0)\nПрямоугольник - 1\nКруг - 2\nФигура - ";
		cin >> p;
		switch (p) {
		case 1:
		{
			cout << "Введите длину двух сторон" << endl;
			int l, w;
			cin >> l;
			cin >> w;
			cout << "Периметр равен: " << calcRectPerimeter(l, w) << endl;
			cout << "Площадь равна: " << calcRectArea(l, w) << endl;
			cout << "Диагональ равна: " << calcRectDiag(l, w) << endl;
			break;
		}
		case 2:
		{
			cout << "Введите радиус круга, угол сектора и до какого знака после запятой выводить" << endl;
			double r, ang;
			int prc;
			cin >> r;
			cin >> ang;
			cin >> prc;
			cout << fixed << setprecision(prc) << "Длина окружности: " << calcCircleCircumference(r) << endl;
			cout << "Площадь круга: " << calcCircleArea(r) << endl;
			cout << "Площадь кругового сектора: " << calcCircleSectorArea(r, ang) << endl;
			break;
		}
		case 0:
		{
			return 0;
		}
		}
	}
}
