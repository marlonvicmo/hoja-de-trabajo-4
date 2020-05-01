/*Hoja de Trabajo # 4 – (Ejercicio en Clase) Ejercicio#1 En la región de la sierra de los Cuchumatanes la compañía Xterminio s.a. , 
tiene las siguientes tarifas: 
 
Tipo   Servicio                   CostoX Hectárea   
 1     mala hierba                  10
 2     langostas                    20
 3     gusanos                      30
 4     todo lo anterior             50
 
 
Además del área a fumigar es mayor a 500.00 hectáreas se tiene un descuento del 5%. 
Adicionalmente, si el total a pagar por el servicio es mayor a Q1500.00 se tiene un descuento adicional del 10% sobre el excedente. 
La compañía necesita las estadísticas de los servicios que ha ofrecido a un grupo de agricultores durante un periodo de tiempo.  
Por cada servicio debe ingresar los datos siguientes:   Tipo de Fumigación (1 a 4) y el número de hectáreas,
toda esta información deberá almacenarse en una base de datos (archivo plano). 
 
Se le pide que realice un programa en C++ que solicite el ingreso de la información de cada servicio realizado a un grupo de agricultores.  
El programa deberá de leer los datos del archivo que tiene la información antes almacenada y
 mostrar la cantidad de servicios de cada tipo de fumigación, 
determinar el tipo servicio con mayor demanda y el monto total pagado por los clientes. */
 
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

//struct fumigacion{
//	int tipo;
//	string servicio;
//	float costoxh; 
	
/*int main(){
	int tipo;
	string servicio;
	float costoxh;
	float total;
	
	int lineas;
	
	cout<<"ingrese el servicio realizado: "<<endl;
	getline(cin,servicio);
	cout<<"ingrese el tipo de fumigacion"<<endl;
	cin>>tipo;
	
}
*/
struct fumigacion{
	int tipo;
	string servicio;
	float costoxh;
	float total;
	
};
void mp();
void inventario();
void leer_archivo();	
void grabar_archivo();

int main(){
	mp();
}
 //aqui creo la funcion del menu principal
void mp(){
	 int resp;
	 
	 
	 do{
	 	
	 	system("CLS");
		cout<<"	menu principal de  la compañía Xterminio s.a "<<"\n";
		cout<<"+++++++++++++++++++++++++++++++++++++++++++++++"<<"\n";
		cout<<" 1 - Ingresar tipo de fumigacion "<<"\n";
		cout<<" 2 - Mostrar la cantidad de serivicios de cada tipo de fumigacion"<<"\n";
		cout<<" 3 - Salir  "<<"\n";
		cout<<"**********************************************************"<<"\n";
		cout<<"  - POR FAVOR!! SELECCIONE SU OPCION "<<"\n";
		cin>>resp;
		if (resp==1){
			system("CLS");
			grabar_archivo();
		}
		else if(resp==2){
			system("CLS");
			leer_archivo();
		}
		else if(resp==3)
			break;
		else 
		    break;
		    
		}
		while (resp!='3');
	}
	void grabar_archivo(){
        int tipo_serv;
        string servicio_fug;
        float monto_total;
        float totalpagar;
        float calculo;
        int rango1=0,rango2=0,rango3=0,rango4=0;
        float cantidad_h;
        
    fflush(stdin);
    cout<<"ingrese el tipo de fumigacion "<<endl<<"1. mala hierba  "<<"\t"<<"2. langostas "<<"\t"<<"3. Gusanos "<<"\t"<<"4. todo lo anterior "<<endl;
	    /*getline(*/cin,tipo_serv;
	    fflush(stdin);
	    cout<<"ingrese el numero de hectareas a fumigar: "<<endl;
		/*getline(*/cin,cantidad_h;
		fflush(stdin);
		
			 if(tipo_serv == 1){
			calculo=cantidad_h*10;
			  if (cantidad_h >= 500)
				calculo=cantidad_h-(calculo*0.05);
				if (monto_total>=1500)
				calculo=monto_total-1500;
				monto_total=calculo-(monto_total*0.10)
				totalpagar = monto_total;
			cout<<totalpagar;
		}
				else if(tipo_serv == 2){
			calculo=cantidad_h*20;
			  if (cantidad_h=>500)
				calculo=cantidad-(calculo*0.05);
				if (monto_total=>1500)
				calculo=montotal-1500;
				monto_total=calculo-(monto_total*0.10)
				totalpagar=monto_total;
			cout<<totalpagar;
				
			}
			else if(tipo_serv == 3){
			calculo=cantidad_h*30;
			  if (cantidad_h=>500)
				calculo=cantidad-(calculo*0.05);
				if (monto_total=>1500)
				calculo=montotal-1500;
				monto_total=calculo-(monto_total*0.10)
				totalpagar=monto_total;
			cout<<totalpagar;
			   // else if (cantidad_h=>500)
			//	calculo=cantidad-(0.05);
			//	monto_total=calculo;
				
			
			
		}
			else if(tipo_serv == 4){
			calculo=cantidad_h*50;
			  if (cantidad_h=>500)
				calculo=cantidad-(calculo*0.05);
				if (monto_total=>1500)
				calculo=montotal-1500;
				monto_total=calculo-(monto_total*0.10)
				totalpagar=monto_total;
			cout<<totalpagar;
			
		}
		ofstream archivo;
		archivo.open("fumigacion.txt",ios::app);
		archivo<<tipop<<"\t"<<cantidadp<<"\t"<<preciopagar<<endl;
		archivo.close();
		
		void leer_archivo () {
			ifstream archivo;
			archivo.open("fumigacion.txt",ios::in);
			
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	
	cout<<"TIPO DE SERVICIO:    "<<"\t"<<"CANTIDAD DE HECTAREAS"<<"\t"<<"TOTAL A PAGAR"<<endl;
	
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	int lineas, i=0;
	string s,linea;
	float sumatoriasalarial=0.00;
	if(archivo.fail()){
		cout<<"WARNING!! NO SE PUDO ABRIR EL ARCHIVO!!!";
		exit;
		}
		while (getline(archivo. s))
		lineas++;
		archivo.close();
		
		fumigacion recordset[lineas];
		
		archivo.open("fumigacion.txt",ios::in);
		if(archivo.fail()){
			cout<<"no se pudo abrir el archivo!!!!";
			exit(1);
		}
		}
			
		//leer datos del archivo
		for (int i=0; i< lineas; i++)
		{if(!archivo)
		}
		cerr<<"no se pudo abrir el archivo"<<end;
		system("PAUSE");
		
		}
		archivo>>recordset[i].tipo_serv>>recordset[i].cantidad_h>>recordset[i].totalpagar;
	 
			}
			archivo.close();
			for (int i=0; i< lineas; i++){
				cout<<recordset[i].tipo_serv<<"\t"<<recordset[i].cantidad_h<<"<\t"<<recordset[i].totalpagar<<endl;
	sumatoriaventa+=recordset[i].preciopagar;
			}
			cout<<endl<<"TOTAL A PAGAR: "<<"Q."<<totalpagar<<endl;
			
			system("PAUSE");
					}

}
