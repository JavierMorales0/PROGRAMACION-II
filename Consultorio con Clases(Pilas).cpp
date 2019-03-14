/*		JAVIER ALEXANDER MORALES MELARA
		CARNET: MM18014
		PROGRAMACION 2
*/



#include <iostream>

using namespace std;

void c();

class consul {
private:
    class Nodo {
    public:
        int corre;
        char nombre[25];
        char apellido[25];
        int edad;
        char sexo[1];
        int peso;
        char enfermedad[100];
        Nodo *sig;
    };

Nodo *raiz;

public:
    consul();
    ~consul();
    void insertar();
    void imprimir();
};

consul::consul(){
    raiz = NULL;
}

void consul::insertar(){
	c();
    Nodo *nuevo;
    nuevo = new Nodo();
    cout<<"		Ingrese correlativo: #";
    cin>>nuevo->corre;
    cout<<"		Ingrese nombre: ";
    cin>>nuevo->nombre;
    cout<<"		Ingrese apellido: ";
    cin>>nuevo->apellido;
    cout<<"		Ingrese edad: ";
    cin>>nuevo->edad;
    cout<<"		Ingrese sexo (M/F): ";
    cin>>nuevo->sexo;
    cout<<"		Ingrese peso (lbs): ";
    cin>>nuevo->peso;
    cout<<"		Ingrese enfermedad: ";
    cin>>nuevo->enfermedad;
    if (raiz == NULL){
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else{
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

void consul::imprimir(){
    Nodo *reco = raiz;
    	c();
    cout << "				Listado de todos los clientes.\n"<<endl;
    cout << "Correlativo"<< "	";
        cout << "Nombre" << "	";
        cout << "Apellido" << "	";
        cout << "Edad" << "		";
        cout << "Sexo" << "		";
        cout << "Peso" << "		";
        cout << "Enfermedad" << "		"<<endl;
    while (reco != NULL){
        cout << reco->corre << "		";
        cout <<  reco->nombre << "	";
        cout << reco->apellido << "		";
        cout <<  reco->edad << "		";
        cout <<  reco->sexo << "		";
        cout <<  reco->peso << "		";
        cout <<  reco->enfermedad << "		"<<endl;
        reco = reco->sig;
    }
    cout << "\n";
}


consul::~consul(){
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL){
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

//funcion menu encargada de pedir datos al usuario
void menu(){
	cout<<"		Sistema de consultorio."<<endl<<endl;
	cout<<"		Ingrese una opcion."<<endl;
    cout<<"		1 - Agregar un nuevo cliente."<<endl;
    cout<<"		2 - Mostrar datos del cliente"<<endl;
    cout<<"		3 - Salir"<<endl;
}

void c(){
	system("cls");
	}

int main(){
	system ("color 70");
    consul *consul1;
    consul1= new consul();
    int opc;
    
    
    do{
		
	    menu();
	    cin>>opc;
	    
	    switch(opc){
	    	
	    	case 1:
	    		char res;
	    		do{
		    		
		    		consul1->insertar();
		    		cout<<"Desea ingresar mas datos de clientes? (y/n)"<<endl;
		    		cin>>res;
		    		c();
				}while(res == 'y' || res == 'Y');
	    	break;
	    	
	    	case 2:
	    		consul1->imprimir();
	    	break;
	    	case 3:
	    	break;
	    	
		}
		system("pause");
		system("cls");
    }while(opc!=3);
	
	
		
    return 0;
}
