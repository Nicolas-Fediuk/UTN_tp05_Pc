/*Se dispone de una lista de 10 grupos de números enteros separados entre ellos por
ceros. Se pide determinar e informar:
a) Calcular el promedio de valores de cada grupo.
b) Determinar e informar el valor mínimo de todo los grupos, indicando en que grupo se
encontró y su posición relativa en el mismo.
c) El mayor de los promedios y a que grupo pertenecía.*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
int total2=0,pos=1,minimo=0,pos3=1,pos2=1,n,c,minimo2,i;
float s,total;

for (i=1;i<=10;i++){
    cout<<"grupo: "<<i<<endl;
    cin>>n;
    c=0;
    s=0;
    minimo2=0;
    while (n!=0){
        if (minimo2!=0){
            if (n<minimo2){
                pos2++;
                minimo2=n;
            }
        }
        else{
        minimo2=n;
    }
    c++;
    s+=n;
    cin>>n;
    }
    if (minimo!=0){
        if (minimo2<minimo){
            pos3=i;
            minimo=minimo2;
        }
    }
    else{
        minimo=minimo2;
    }
    total=s/c;

    cout<<"promedio del grupo: "<<total<<endl;

    if (total2!=0){
        if (total>total2){
            pos=i;
            total2=total;
        }
    }
    else{
        total2=total;
    }
system ("pause");
system ("cls");
}
cout<<"promedio maximo: "<<total2<<endl;
cout<<"en el grupo: "<<pos<<endl;
cout<<"valor minimo: "<<minimo<<endl;
cout<<"en el grupo: "<<pos3<<endl;
cout<<"posicion relativa: "<<pos2<<endl;

return 0;
}
