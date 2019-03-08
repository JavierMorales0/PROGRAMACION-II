/*		JAVIER ALEXANDER MORALES MELARA
		CARNET: MM18014
		PROGRAMACION 2
*/


#include <iostream>
#include <queue>//para usar colas
#include <conio.h>
#include <windows.h>
using namespace std;

struct cuenta{
		int tiquet;
		int cuen;
		int edad;
};

void c(){
	system("cls");
}

void p(){
	system("pause");
}

int main() {
	system ("color 70");
	int n=1000; // VARIABLE PARA ALMACENAR EL NUMERO DE TIQUET QUE SE HA DADO 
	queue<cuenta> cola;		//CREACION DE LA COLA TIPO CUENTA 
	cuenta *ptr;		//CREACION DE PUNTERO PARA CUENTA
	int x;		//VARIABLE PARA ALMACENAR LA OPCION DEL MENU
	do{						//MENU QUE SE REPETIRA HASTA QUE EL USUARIO SELECCIONE SALIR
	
	cout<<"					"<<"Que accion desea realizar?"<<endl;
	cout<<"					"<<"1. Agregar cliente a cola"<<endl;
	cout<<"					"<<"2. Eliminar cliente de cola"<<endl;
	cout<<"					"<<"3. Imprimir cola"<<endl;
	cout<<"					"<<"4. Salir"<<endl;
	cout<<"					";cin>>x;
	
	switch (x){
				case 1: c();
						cuenta aux;			//CREACION DE UN AUXILIAR PARA ALMACENAR LOS DATOS INGRESADOS POR EL USUARIO PARA LUEGO INTRODUCIRLOS A LA COLA
		            	aux.tiquet=n;
		            	cout<<"					"<<"Ingrese numero de cuenta: ";
						cin>>aux.cuen;
						cout<<"					"<<"Ingrese edad de persona: ";
		            	cin>>aux.edad;
		            	n++;
				        cola.push(aux);			//INTRODUCCION A LA COLA
				        c();
				        cout<<"					"<<"Su tiquet es el numero: "<<n-1<<endl;
				        p();
		        		c();
		        		break;
		        case 2: c();
						if(! cola.empty()){			//VEREIFICACION SI LA COLA NO ESTA VACIA
		        		ptr=&cola.front();
	        			cuenta au;
        		 		au=*ptr;
		        		cout<<"					"<<"Tiquet eliminado: "<<au.tiquet <<endl;
	        			cola.pop();}			//ELIMINACION DEL PRIMER ELEMENTO DE LA COLA
						p();
		        		c();
						break;
				case 3: 
        		 		c();ptr=&cola.front();
						for(int i=0; i<cola.size(); i++){			//CICLO MIENTRAS LA COLA TENGA DATOS
						cuenta auxi;				//VARIABLE AUXILIAR PARA ALMACENAR LO QUE SE IMPRIMIRA EN PANTALLA
        		 		auxi=*ptr;
		        		cout<<"					"<<"Tiquet numero: "<<auxi.tiquet <<endl;
		        		cout<<"					"<<"		Cuenta numero: "<<auxi.cuen <<" ";
		        		cout<<"		Edad: "<<auxi.edad <<" "<<endl;
		        		ptr++;					//AVANZANDO UNA POSICION EL PUNTERO
        				}
        				p();
		        		c();
				case 4: break;
					}
	} while (x != 4);
	return 0;
}

