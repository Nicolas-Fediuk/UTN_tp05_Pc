/*Hacer un programa para ingresar una lista de 10 números y luego informar cuantos de
los números ingresados son primos.*/

#include <iostream>

using namespace std;

int main(){
int n,primos=0,pri,i,j;

cout<<"ingrese 10 numeros:"<<endl;
for (i=1;i<=10;i++){
    cin>>n;
    pri=0;
    for (j=1;j<=n;j++){
        if (n%j==0){
            pri++;
        }
        }
        if (pri==2){
            primos++;
}
}
cout<<endl;
cout<<"la cantidad de numeros primos son: "<<primos<<endl;
return 0;
}
