#include<iostream>
using namespace std;
int main(){
int vector[5];
int aux;
for(int i=0;i<5;i++){
cout<<"Ingrese un numero:";
cin>>vector[i];
}
for(int i=0;i<5;i++){
if(aux<vector[i]){
aux=vector[i];
}
}
if(aux%2==0){
cout<<"El mayor valor es: "<<aux<<"y es par.";
}else{
cout<<"El mayor valor es: "<<aux<<"y es impar.";      
}
return 0;    
}
