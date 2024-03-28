#include<iostream>
#include<math.h>
using namespace std;
int main(){
cout << "Введите длину двух сторон" << endl;
int lngth, wdth;
cin >>  lngth ;
cin >>  wdth;
int P = 2*(lngth+wdth); // расчёт периметра
int S = lngth*wdth; // расчёт площади
int diagonal = sqrt(lngth^2 + wdth^2); // расчёт диагонали
cout << "Периметр равен: "<< P << endl << "Площадь равна: "<< S << endl << "Диагональ равна: "<< diagonal << endl;
}











