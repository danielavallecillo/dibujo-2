#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include<iostream>
#include<stdexcept>
using namespace std;

class Smartphone{
	private:
	public:
		string marca;
		string modelo;
		string cpu;
		int ram;
		int almacenamiento;
			//Constructores
			Smartphone(string marca, string modelo, string cpu, int ram, int almacenamiento){
				this->marca=marca;
				this->modelo=modelo;
				this->cpu=cpu;
				this->ram=ram;
				this->almacenamiento=almacenamiento;
			}
			
			void imprimir(){
			cout << "****** Perfil del Smartphone ******" << endl;
			cout << "Marca: " << this->marca << endl;
			cout << "Modelo: " << this->modelo << endl;
			cout << "CPU: " << this->cpu << endl;
			cout << "RAM: " << this->ram<< endl;
			cout << "Almacenamiento: " << this->almacenamiento<< endl;
	}	
	
};
	



#endif
