#include<iostream>
#include<math.h>
using namespace std;
int isPer(int lngth, int wdth){ // Функция расчёта периметра
int Per = 2*(lngth+wdth); 
return Per ;
}
int isSqu(int lngth, int wdth){ // Функция расчёта площади
int Squ = lngth*wdth
return Squ ;
}
int isDig(int lngth, int wdth){ // Функция расчёта диагонали
int diagonal = sqrt(lngth^2 + wdth^2);
return diagonal; ;
}

int main(){
cout << "Введите длину двух сторон" << endl;
int lngth, wdth;
cin >>  lngth ;
cin >>  wdth;
cout << "Периметр равен: "<< isPer << endl << "Площадь равна: "<< isSqu << endl << "Диагональ равна: "<< isDig << endl;
}












































