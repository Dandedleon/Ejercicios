#include<iostream>
using namespace std;
int main(){
int valores[20];
int val2[20];
for(int i=0;i<20;i++){
cout<<"Ingrese un valor:"<<endl;
cin>>valores[i];
if(valores[i]%2==0){
val2[i]=valores[i]+1;
}else{
val2[i]=valores[i]-2;
}
if(val2[i]<valores[i]){
val2[i]=0;
}
}
for(int i=0;i<20;i++){
cout<<"El valor "<<i+1<<" es igual a:"<<valores[i]<<" su nuevo valor es:"<<val2[i];<<endl;
}
return 0;    
}
