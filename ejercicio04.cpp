/*Dada una lista de n�meros enteros todos distintos entre s� y que finaliza con un cero,
determinar e informar con un cartel aclaratorio si los n�meros primos que aparezcan en la
misma est�n ordenados de menor a mayor. Los n�meros positivos primos pueden no ser
consecutivos, pero s� estar ordenados.
Por ejemplo:
4, 5, 7, 12, 13, 0 Se emite un cartel que diga �Ordenados� (5,7 y 13)
2, 10, 3, 5, 11, 7, 14, 0 Se emite un cartel que diga �Desordenados� (2, 3, 5, 11 y 7)*/

#include <iostream>

using namespace std;

int main (){
int n,p=1,anterior=0,c,i;

cout<<"ingrese una lista de numeros y al finalizar oprima 0:"<<endl;
cin>>n;

while (n!=0){
    c=0;
    for (i=1;i<=n;i++){
        if (n%i==0){
            c++;
        }
    }
    if (c==2){
        if (n<anterior){
            p=0;
        }
        anterior=n;
    }
    cin>>n;
}
cout<<endl;

if (p==1){
    cout<<"ordenado"<<endl;
}
else{
    cout<<"desordanado"<<endl;
}
return 0;
}
