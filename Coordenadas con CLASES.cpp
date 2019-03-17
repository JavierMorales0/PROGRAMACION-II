/*		JAVIER ALEXANDER MORALES MELARA
		CARNET: MM18014
		PROGRAMACION 2
*/

#include <iostream>
#include <conio.h>

using namespace std;


class Cola 				//Clase del programa para realizar las acciones y almacenar los atributos
{
	private:
		class Nodo			//Nueva clase solo para atributos
		{
			public:
				int cx;
				int cy;
				int cz;
				Nodo *sig;
		};
	Nodo *raiz;
	Nodo *fondo;
	public:
		Cola();
		~Cola();
		void insertar(int x, int y, int z);
		void extraer();
		void imprimir();
		bool vacia();
};

Cola::Cola()		//constructor
{
	raiz = NULL;
	fondo = NULL;
}

Cola::~Cola()			//destructor
{
	Nodo *reco = raiz;
	Nodo *bor;
	while (reco != NULL)
	{
		bor = reco;
		reco = reco -> sig;
		delete bor;
	}
}

void Cola::insertar(int x, int y, int z)		//insertar datos a la cola
{
	Nodo *nuevo;
	nuevo = new Nodo();
	nuevo -> cx = x;
	nuevo -> cy = y;
	nuevo -> cz = z;
	nuevo -> sig = NULL;
	if (vacia())
	{
		raiz = nuevo;
		fondo = nuevo;
	}
	else
	{
		fondo -> sig = nuevo;
		fondo = nuevo;
	}
}

void Cola::extraer()			//extraer datos de la cola
{
	if(!vacia())
	{
		Nodo *bor = raiz;
		if (raiz == fondo){
			raiz = NULL;
			fondo = NULL;
		}
		else{
			raiz = raiz -> sig;
		}
		delete  bor;
		cout<<"				Se elimino correctamente"<<endl;
	}
}

void Cola::imprimir()			//imprimir los datos de la cola
{
	Nodo *reco = raiz;
	cout<<"					Listado de todos los elementos de la cola.\n\n";
	while(reco != NULL)
	{
		cout<<"					"<< reco -> cx <<"-";
		cout<< reco -> cy <<"-";
		cout<< reco -> cz <<endl;
		reco = reco -> sig;
	}
}

bool Cola::vacia()			//revisando si la cola esta vacia
{
	if (raiz == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void c(){			//Funcion para limpiar pantalla
	system("cls");
}

void p(){				//Funcion para pausar pantalla
	system("pause");
}

int main() 
{	system ("color 70");
	Cola *cola1 = new Cola();
	int op;
	int x;
	int y;
	int z;
	do{						//MENU QUE SE REPETIRA HASTA QUE EL USUARIO SELECCIONE SALIR
	c();
	cout<<"					"<<"Que accion desea realizar?"<<endl;
	cout<<"					"<<"1. Agregar coordenada"<<endl;
	cout<<"					"<<"2. Eliminar primer coordenada"<<endl;
	cout<<"					"<<"3. Imprimir coordenadas"<<endl;
	cout<<"					"<<"4. Salir"<<endl;
	cout<<"					";cin>>op;
	
	switch (op){
				case 1: c();
						cout<<"					"<<"Ingrese coordenada en x: "<<endl;
						cout<<"					";cin>>x;
						cout<<"					"<<"Ingrese coordenada en y: "<<endl;
						cout<<"					";cin>>y;
						cout<<"					"<<"Ingrese coordenada en z: "<<endl;
						cout<<"					";cin>>z;
						cola1->insertar(x,y,z);
		        		break;
		        case 2: c();
						cola1 -> extraer();
						p();
						break;
				case 3: c();
						cola1 -> imprimir();
						p();
						break;
				case 4: 
						break;
					}
	} while (op != 4);
	delete cola1;
	return 0;
}

