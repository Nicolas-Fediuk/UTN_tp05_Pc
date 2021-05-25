/*Se dispone de una lista de 10 grupos de números enteros separados entre ellos por
ceros. Se pide determinar e informar:
a) El número de grupo con mayor porcentaje de números impares positivos respecto al total
de números que forman el grupo.
b) Para cada grupo el último número primo y en qué orden apareció en ese grupo, si en un
grupo no hubiera números primos informarlo con un cartel aclaratorio.
c) Informar cuantos grupos están formados por todos números ordenados de mayor a
menor*/

#include <iostream>
#include <cstdlib>

using namespace std;
int main (){
int ordenado=0,maxtotal=0,grupo=0,posi=1,n,f,c,p,i,j,pri,ultipri,anterior,total3,contador,pos2,pos;
float total2,imp,total,ip;

for (i=1;i<=2;i++){
    cin>>n;
    pos=0;
    ip=0;
    f=0;
    c=0;
    p=1;
    contador=0;

    while (n!=0){
        contador++;
        if (contador!=1){
            if (anterior<n){
                p=0;
            }
        }
        anterior=n;
        pri=0;
        for (j=1;j<=n;j++){
            if (n%j==0){
                pri++;
            }
        }
        pos++;
        if (pri==2){
            f++;
            pos2=pos;
            ultipri=n;
        }
        c=c+1;
        if (n%2!=0&&n>0){
            ip++;
            }
        cin>>n;
    }
    if ( p==1){
        ordenado++;
    }
    grupo++;
    cout<<"grupo: "<<grupo<<endl;
    if (f>=1){
        cout<<"ultimo primo: "<<ultipri<<endl;
        cout<<"posicion del numero primo: "<<pos2<<endl;
    }
    else{
        cout<<"no se han ingresado numeros primos"<<endl;
    }
    total=ip/c*100;
    cout<<"porcentajes de impares positivos: "<<total<<"%"<<endl;
    if (maxtotal==0){
        maxtotal=total;
    }
    else{
        if (total>maxtotal){
                posi=grupo;
        maxtotal=total;}
    }
    system ("pause");
    system ("cls");
}
cout<<"grupo con mayor porcentaje de numeros impares positivos: "<<posi<<endl;
cout<<"maximo porcentaje de impares positivos: "<<maxtotal<<"%"<<endl;
cout<<"cantidad de grupos ordenas de mayor a menor: "<<ordenado<<endl;

return 0;
}
