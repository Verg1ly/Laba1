#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
int calcRectPerimeter(int l, int w) { // ������� ������� ���������
	int p = 2 * (l + w);
	return p;
}
int calcRectArea(int l, int w) { // ������� ������� �������
	int area = l * w;
		return area;
}
double calcRectDiag(int l, int w) { // ������� ������� ���������
	double diag = sqrt(l * l + w * w);
	return diag; 
}
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "������� ����� ���� ������" << endl;
	int l, w;
	cin >> l;
	cin >> w;
	cout << "�������� �����: " << calcRectPerimeter(l, w) << endl;
	cout << "������� �����: " << calcRectArea(l, w) << endl;
	cout << "��������� �����: " << calcRectDiag(l, w) << endl;
}