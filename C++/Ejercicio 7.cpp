#include<iostream>
using namespace std;
int main(){
string nombre[50];
string vecindad[50];
int anio[50];
int dd[50];
int mm[50];
int aa[50];
int edad[50];
string mayor[50];
cout<<"Si desea colocar un espacio use un guion bajo en su lugar"<<endl;
for (int i = 0; i < 50;i++) {
cout << "Ingrese su nombre:" << endl;
cin >> nombre[i];
cout << "Ingrese su vecindad:" << endl;
cin >> vecindad[i];
cout << "Ingrese su fecha de nacimiento en formato Año,Mes,Dia sin usar espacios:" << endl;
cin >> anio[i];
dd[i] = anio[i] % 100;
mm[i] = (anio[i]/100) % 100;
dd[i] = (anio[i]/100) / 100;
edad[i] = 2024 - aa[i];
if (edad[i] >= 18) {
mayor[i] = "Mayor de edad";
}
else {
mayor[i] = "Menor de edad";
}
}
string code;
cout << "Ingrese el nombre de la persona a buscar:" << endl;
cin >> code;
for (int i = 0; i < 50; i++) {
if (code == nombre[i]) {
cout << "Nombre:" << nombre[i] << endl;
cout << "Vecindad:" << vecindad[i] << endl;
cout << "Fecha de nacimiento:" << dd[i] <<"/"<<mm[i]<<"/"<<aa[i]<< endl;
cout << "Edad:" << edad[i] << " " <<mayor[i]<< endl;
}
}
return 0;    
}
