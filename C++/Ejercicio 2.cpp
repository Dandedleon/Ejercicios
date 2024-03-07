#include<iostream>
using namespace std;
int main(){
int vector[5]={1,2,3,4,5};
int total,promedio;
double propo;
for(int i=0;i<5;i++){
total=total+vector[i];
}
promedio=total/5;
propo=promedio*0.25;
cout<<"El total es:"<<total<<endl;
cout<<"El promedio es:"<<promedio<<endl;
cout<<"El 25% del promedio:"<<propo<<endl;
return 0;    
}
