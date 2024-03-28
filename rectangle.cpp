#include<iostream>
#include<math.h>
using namespace std;
int main(){
int lngth, wdth;
cin >>  lngth ;
cin >>  wdth;
int P = 2*(lngth+wdth); 
int S = lngth*wdth;
int diagonal = sqrt(lngth^2 + wdth^2);
cout << P << endl << S << endl << diagonal << endl;
}
