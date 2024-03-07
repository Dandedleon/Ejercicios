#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Ingrese un numero:"<<endl;
cin>>n;
int n2=((n%10)*10); 
n = n/10;               
n=n+n2;          
cout<<"El numero invertido es:"<<n<<endl;
return 0;
}
