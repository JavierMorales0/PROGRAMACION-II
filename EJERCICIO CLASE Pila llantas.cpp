#include <iostream>
#include <stack>
#include <windows.h>

 
 using namespace std;


struct llantas {
	int codigo;
	char modelo [20];
	char marca [20];
	char tamanio [25] ;
	
};

int main ()
{	
	stack <llantas> pila_llantas ;
	cout << &pila_llantas  ;
	llantas aux;
	char resp;
	llantas *ptr;
	
	
	int opcion ;
	do {
		
	cout << "Menu" << endl ;
 	cout << "1-Agregar" << endl ;
 	cout << "2-Eliminar" << endl ;
 	cout << "3-Mostrar" << endl ;
 	cout << "4-Buscar" << endl ;
 	cout << "5-Salir" << endl ;
	cin >> opcion ;
	switch(opcion){
			case 1 :
		do{
			cout << endl << "Codigo: " << endl ;
			cin >> aux.codigo ;
			cout << "Modelo: " << endl ;
			cin >> aux.modelo ;
			cout << "Marca: " << endl ;
			cin >> aux.marca ;
			cout << "Tamanio: " << endl ;
			cin >> aux.tamanio ;
			
			pila_llantas.push(aux);
			
			ptr = &pila_llantas.top();
	
			cout<<"Desesa agregar otro nodo? y/n"<<endl;
			cin>>resp;
		}while(resp == 'y' || resp == 'Y');
			system ("cls");
		 break ;
		 case 2 :
				  pila_llantas.pop ();
				  ptr = &pila_llantas.top();
				break ;
					
		case 3:
		system ("cls");	
	for(int i=1; i<=pila_llantas.size(); i++){
		
		aux = *ptr;
		cout<<aux.codigo<<endl;
		cout<<aux.modelo<<endl;
		cout<<aux.marca<<endl;
		cout<<aux.tamanio<<endl;
		ptr --;	
			}
		ptr = &pila_llantas.top();	
		break ;
		
		case 4:
				int codbusqueda;
				system("cls");
				cout<<"Que nodo deseas buscar?"<<endl;
				cin>>codbusqueda;
				for(int i=1; i<=pila_llantas.size(); i++)
				{
		
					aux = *ptr;
					if (codbusqueda == aux.codigo )
					{
					cout<<aux.codigo<<endl;
					cout<<aux.modelo<<endl;
					cout<<aux.marca<<endl;
					cout<<aux.tamanio<<endl;
					
				}
				  ptr --;	
			}
		ptr = &pila_llantas.top();
			break ;
		case 5:
			break;
	}
}while (opcion != 4);	
	system ("pause") ;
	return 0;
}
