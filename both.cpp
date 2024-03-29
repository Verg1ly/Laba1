#include <iostream>
#include <cmath>
#include <clocale>
#include <iomanip>
#define PI 3.14159265358979323846
using namespace std;
int calcRectPerimeter(int l, int w) {   //������� ������� ��������� ��������������
	int p = 2 * (l + w);
	return p;
}
int calcRectArea(int l, int w) {   //������� ������� ������� ��������������
	int area = l * w;
	return area;
}
double calcRectDiag(int l, int w) {   //������� ������� ��������� ��������������
	double diag = sqrt(l * l + w * w);
	return diag;
}
double calcCircleCircumference(double r)   //������� ������� ����� ����������
{
	double circle_circumference = 2 * PI * r;
	return circle_circumference;
}
double calcCircleArea(double r)   //������� ������� ������� �����
{
	double circle_area = PI * r * r;
	return circle_area;
}
double calcCircleSectorArea(double r, double ang)   //������� ������� ������� ������� �����
{
	double circle_sector_area = (ang / 360) * PI * r * r;
	return circle_sector_area;
}
int main() {
	setlocale(LC_ALL, "Rus");
	int p;
	while (true) {
		cout << "\n�������� ������ (���� �������� ������� ��������� - 0)\n������������� - 1\n���� - 2\n������ - ";
		cin >> p;
		switch (p) {
		case 1:
		{
			cout << "������� ����� ���� ������" << endl;
			int l, w;
			cin >> l;
			cin >> w;
			cout << "�������� �����: " << calcRectPerimeter(l, w) << endl;
			cout << "������� �����: " << calcRectArea(l, w) << endl;
			cout << "��������� �����: " << calcRectDiag(l, w) << endl;
			break;
		}
		case 2:
		{
			cout << "������� ������ �����, ���� ������� � �� ������ ����� ����� ������� ��������" << endl;
			double r, ang;
			int prc;
			cin >> r;
			cin >> ang;
			cin >> prc;
			cout << fixed << setprecision(prc) << "����� ����������: " << calcCircleCircumference(r) << endl;
			cout << "������� �����: " << calcCircleArea(r) << endl;
			cout << "������� ��������� �������: " << calcCircleSectorArea(r, ang) << endl;
			break;
		}
		case 0:
		{
			return 0;
		}
		}
	}
}
