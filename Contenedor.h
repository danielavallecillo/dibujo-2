#ifndef CONTENEDOR_H
#define CONTENEDOR_H

#include<iostream>
#include<stdexcept>
using namespace std;


class Contenedor{
		private:
			double pesoActual;
		public:
			double alto;
			double ancho;
			double largo;
			double pesoMaximo;
			//Constructores
			Contenedor(double alto, double ancho, double largo, double pesoMaximo){
				this->alto=alto;
				this->ancho=ancho;
				this->largo=largo;
				this->pesoMaximo=pesoMaximo;
				this->pesoActual=0;
			}
			
			void imprimir(){
				cout << "**** Datos del Contenedor ****" << endl;
				cout << "Alto: " << this->alto << endl;
				cout << "Ancho: " << this->ancho<< endl;
				cout << "Largo: " << this->largo<< endl;
				cout << "Peso Maximo: " << this->pesoMaximo<< endl;
				cout << "Peso Actual: "<<this->pesoActual<<endl;
			}
			
			void ingresar(double d){
				if(d>=0){
					if((this->pesoActual+d)<this->pesoMaximo)
						this->pesoActual+=d;
					else
						throw invalid_argument("No puede superar al peso maximo.");
				}
				else{
					throw invalid_argument("No puede ingresar valores negativos");
				}
				
			}
			
			void retirar(double d){
				if(d>=0){
					if(d<=this->pesoActual)
						this->pesoActual-=d;
					else
						throw invalid_argument("No puede retirar mas peso del que hay.");
					
				}
				else{
					throw invalid_argument("No puede ingresar valores negativos");
				}
			}
			
			double getPesoActual(){
				return this->pesoActual;
			}
			
			double getVolume(){
				return this->alto*this->ancho*this->largo;
			}
	
	
};







#endif
