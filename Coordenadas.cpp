
#include <iostream>
#include <string>
#include <queue>
#include <conio.h>
#include <windows.h>

using namespace std;

struct coor{
        int x;
        int y;
        int z;
    };
    
    
void c(){
	system("cls");
}

void p(){
	system("pause");
}


int main()
{
    system ("color 70"); 
	queue<coor> cola;		//CREACION DE LA COLA TIPO COORDENADAS
	coor *ptr;		//CREACION DE PUNTERO PARA COORDENADAS
	int op;		//VARIABLE PARA ALMACENAR LA OPCION DEL MENU
	int co;
	do{						//MENU QUE SE REPETIRA HASTA QUE EL USUARIO SELECCIONE SALIR
	
	cout<<"					"<<"Que accion desea realizar?"<<endl;
	cout<<"					"<<"1. Agregar coordenadas"<<endl;
	cout<<"					"<<"2. Mostrar coordenadas"<<endl;
	cout<<"					"<<"3. Mostrar promedio de coordenadas"<<endl;
	cout<<"					"<<"4. Salir"<<endl;
	cout<<"					";cin>>op;
	
	switch (op){
				case 1: c();
						coor aux;			//CREACION DE UN AUXILIAR PARA ALMACENAR LOS DATOS INGRESADOS POR EL USUARIO PARA LUEGO INTRODUCIRLOS A LA COLA
		            	cout<<"					"<<"Ingrese valor de x: ";
						cin>>aux.x;
		            	cout<<"					"<<"Ingrese valor de y: ";
						cin>>aux.y;
						cout<<"					"<<"Ingrese valor de z: ";
		            	cin>>aux.z;
				        cola.push(aux);			//INTRODUCCION A LA COLA
				        c();
				        cout<<"					"<<"EXITO"<<endl;
				        p();
		        		c();
		        		break;
		        case 2: c();
		                ptr=&cola.front();
						for(int i=0; i<cola.size(); i++){//CICLO MIENTRAS LA COLA TENGA DATOS
						coor auxi;				//VARIABLE AUXILIAR PARA ALMACENAR LO QUE SE IMPRIMIRA EN PANTALLA
        		 		auxi=*ptr;
		        		cout<<"					"<<"x: "<<auxi.x <<" ";
		        		cout<<"					"<<"y: "<<auxi.y <<" ";
		        		cout<<"                 "<<"z: "<<auxi.z <<" "<<endl;
		        		ptr++;					//AVANZANDO UNA POSICION EL PUNTERO
        				}
        				p();
		        		c();
						break;
				case 3: c();ptr=&cola.front();
        				float xx;
        				float ys;
        				int zz;
        				zz=1;
						for(co=0; co<cola.size(); co++){			//CICLO MIENTRAS LA COLA TENGA DATOS
						coor auxi;				//VARIABLE AUXILIAR PARA ALMACENAR LO QUE SE IMPRIMIRA EN PANTALLA
        		 		auxi=*ptr;
		        		xx=xx+(auxi.x);
		        		ys=ys+(auxi.y);
		        		zz=(zz)+auxi.z;
		        		ptr++;					//AVANZANDO UNA POSICION EL PUNTERO
        				}
        				cout<<"					"<<"x promedio: "<<(xx/co) <<endl;
        				cout<<"					"<<"y promedio: "<<(ys/co) <<endl;
        				cout<<"					"<<"z promedio: "<<(zz/co) <<endl;
        				p();
		        		c();
				case 4: break;
					}
	} while (op != 4);
	return 0;
}
