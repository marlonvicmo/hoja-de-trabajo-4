/*Ejercicio#2 
Una persona desea realizar un muestreo con un numero de personas para determinar el porcentaje de niños, 
jóvenes, adultos y adultos mayores que existen en la zona en donde vive. La categoría se determina en base a la siguiente tabla: 

CATEGORIA              EDAD
Niños----------------- 0-12
jovenes--------------- 13-29
Adultos--------------- 30-59
Adultos mayores------- 60 en adelante
 
 
Teniendo en cuenta que para el muestreo de personas no será mayor a 50,
realice un programa que en primer lugar reciba como dato el numero de personas del muestreo
y luego por cada persona permita el ingreso de su edad y grabar todo a un archivo. 
El programa deberá leer los datos del archivo y 
mostrar como resultado el porcentaje de personas que hay por cada una de las categorías. */

#include <fstream>
#include <iostream>
#include <string>
using namespace std;


struct muestreo{
	string categoria;
	int edad;
	int cantidadp;
	float porcentaje;
};
int main(){
	string categoria;
	int edad;
	int cantidadp;
	int cantidadni;
	int cantidadjo;
	int cantidadad;
	int cantidadadultm;
	float porcentaje;
	string ni,jo,ad,adultm;
	

	cout<<"ingrese la cantidad de personas en el muestreo: "<<endl;
	cin>>cantidadp;
	cout<<"ingrese la edad de la persona: "<<endl;
	cin>>edad;
	   if (cantidadp >= '50'){
	   	cout<<"el muestreo de personas no puede ser mayor a 50!!! "<<endl;
	   	porcentaje=(cantidadni+cantidadjo+cantidadad+cantidadadultm)/4;
	   
	if (edad >= 0 && edad<= 12){
		categoria=ni;
		cout<<" Niños "<<endl;
		cin>>ni;
		

		if (edad >= 13 && edad<= 29)
		categoria=jo;
		cout<<"jovenes"<<endl;
		cin>>jo;
		if (edad >= 30 && edad<= 59)
		categoria=ad;
		cout<<"adultos "<<endl;
		cin>>ad;
		if (edad >= 60){
			cout<<"Adulto Mayor "<<endl;
			cin>>adultm;
		}
		cout.precision(5);
	cout<<"niños: "<<ni<<endl;
	cout<<"jovenes:  "<<jo<<endl;
	cout<<"adultos  "<<ad<<endl;
	cout<<"adulto mayor  "<<adultm<<endl;
	cout<<"\n\n el porcentaje de personas en la categoria es "<<porcentaje;
	
	//Grabar al archivo
	ofstream miarchivo;
	system("PAUSE");
	try {
		miarchivo.open("muestreo.txt",ios::out);
		miarchivo<<ni<<"\t"<<jo<<"\t"<<ad<<"\t"<<adultm<<endl;
		miarchivo.close();
		cout<<"Datos grabados en el archivo";
	}
	catch(exception X){
		cout<<"Error al grabar en el archivo";
		system("PAUSE");
	} //fin try/catch
	system("CLS"); //limpiar pantalla
	ifstream leerarchivo; //declaracion de objeto tipo archivo que hereda funciones ifstream
	leerarchivo.open("muestreo.txt",ios::in);
	leerarchivo>>ni>>jo>>ad>>adultm;	
	leerarchivo.close();
	
	cout<<ni<<jo<<ad<<adultm;

	
	
	
	
}

