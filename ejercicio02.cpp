/*Dada una lista de n�meros compuesta por 10 grupos y cada grupo separado del
siguiente por un cero, se pide determinar e informar:
a) Para cada uno de los grupos el m�ximo de los n�meros pares y el m�ximo de los
n�meros impares.
b) Para cada uno de los grupos el porcentaje de n�meros negativos y n�meros positivos.
c) Cuantos n�meros positivos hab�a en total entre los 10 grupos.*/

#include<iostream>
#include <cstdlib>

using namespace std;

int main() {
int i,imp,n,negativo,par,posi=0,positivo,grupo=0;
float c,pn,pp;


for (i=1;i<=10;i++) {
        cout<<"grupo: "<<i<<endl;
		cin >> n;
		c=0;
		imp=0;
		par=0;
		positivo=0;
		negativo=0;
		while (n!=0) {
			c++;
			if (n>0) {
				posi++;
				positivo++;
			} else {
				negativo++;
			}
			if (n%2==0) {
				if (par==0) {
					par=n;
				} else {
					if (n>par) {
						par=n;
					}
				}
			} else {
				if (imp==0) {
					imp = n;
				} else {
					if (n>imp) {
						imp=n;
					}
				}
			}
			cin>>n;
		}
		pp=positivo/c*100;
		pn=negativo/c*100;
        cout<<endl;
		cout<<"porcentaje de numeros positivos: "<<pp<<"%"<<endl;
		cout<< "porcentaje de numeros negativos: "<<pn<<"%"<<endl;
		cout<<"maximo par: "<<par<<endl;
		cout<<"maximo impar: "<<imp<<endl;
		system ("pause");
	    system ("cls");
	}
	cout<<"total de numeros positivos entre los 10 grupos: "<<posi<<endl;

	return 0;
}

