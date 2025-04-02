#include<iostream>
#include<stdexcept>
#include"Contenedor.h"


using namespace std;

int main(){
	cout<<"Werner Roberto Garcia Rodriguez - 20242000540"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	Contenedor *c1 = new Contenedor(5,10,15,200);
	
	c1->imprimir();
	c1->ingresar(20);
	c1->imprimir();
	c1->retirar(10);
	c1->imprimir();
	cout<<"El peso actual es: "<<c1->getPesoActual()<<endl;
	cout<<"El volumen es: "<<c1->getVolume()<<endl;
	
}
