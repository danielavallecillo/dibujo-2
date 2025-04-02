#ifndef EMPLEADO_H
#define EMPLEADO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class Empleado{
		private:
			string genero;
			double salario;
		public:
			string nombre;
			int edad;
			string cargo;
	
		
		Empleado(string nombre, int edad, string cargo){
			this->nombre=nombre;
			this->edad=edad;
			this->cargo=cargo;
			this->genero="Indefinido";
			this->salario=0;
		}
		
		void imprimir(){
			cout << "**** Perfil del Empleado ****" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Edad: " << this->edad << endl;
			cout << "Cargo: " << this->cargo << endl;
			cout << "Genero: " << this->genero << endl;
			cout << "Salario: " << this->salario << endl;
	}
		
		
		void setGenero(string g){
			if(g=="MASCULINO"){
				this->genero="Masculino";
			}
			else if(g=="FEMENINO"){
				this->genero="Femenino";
			}
			else if(g=="INDEFINIDO")
				this->genero="Indefinido";
			else{
				throw invalid_argument("Ingrese un genero valido");
			}
		}
		
		string getGenero(){
			return this->genero;
		}
		
		void setSalario(double s){
			if(s>=0)
				this->salario=s;
			else
				throw invalid_argument("No puede ingresar valores negativos");
		}
		
		double getSalario(){
			return this->salario;
		}
		
};




#endif
