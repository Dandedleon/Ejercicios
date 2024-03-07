#include<iostream>
using namespace std;
int main(){
int vector[10]={1,2,3,4,5,6,7,8,9,0};
if(vector[0]<0){
cout<<"La primera posicion es negativa"<<endl;
}else{
cout<<"La primera posicion es positivo"<<endl;   
}
if(vector[4]>0){
cout<<"La quinta posicion es positiva"<<endl;
}else{
cout<<"La primera posicion es negativa"<<endl;   
}
if(vector[9]==0){
cout<<"La ultima posicion es cero"<<endl;
}else{
cout<<"La ultima posicion no es cero"<<endl;   
}
return 0;  
}
