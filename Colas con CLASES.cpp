#include <iostream>
#include <conio.h>

using namespace std;

class cola{
		//atributos
	private:
		class nodo {		//estructura de la clase
			public: 
			int info;
			nodo *sig;
		};
	nodo *raiz;	//ultimo elemento de la cola
	nodo *fondo; //primer elemento
	//+++++++++++++++++++++++++++++++++++++++
	public:
		cola();
		~cola();
		void insertar(int x);
		int extraer();
		void imprimir();
		bool vacia();
};

cola::cola(){
	raiz=NULL;
	fondo=NULL;
}

cola::~cola(){
	nodo *reco=raiz;
	nodo *bor;
	while (reco!=NULL){
		bor=reco;
		reco=reco->sig;
		delete bor;
	}
}

void cola::insertar(int x){
	nodo *nuevo;
	nuevo=new nodo();
	nuevo->info=x;
	nuevo->sig=NULL;
	if(vacia()){
		raiz=nuevo;
		fondo= nuevo;
	}
	else{
		fondo->sig=nuevo;
		fondo=nuevo;
	}
}

int cola::extraer(){
	if(!vacia()){
		int informacion = raiz->info;
		nodo *bor = raiz;
		if (raiz==fondo){
			raiz=NULL;
			fondo=NULL;
		} else {
			raiz=raiz->sig;
		}
		delete bor;
		return informacion;
	} else {
		return -1;
	}
}

void cola::imprimir(){
	nodo *reco=raiz;
	cout<<"Listado de todos los elementos"<<endl;
	while(reco!=NULL){
		cout<<reco->info<<"-";
		reco=reco->sig;
	}
}

bool cola::vacia()
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
int main(int argc, char** argv) {
	cola*cola1=new cola();
	cola1->insertar(5);
	cola1->insertar(10);
	cola1->insertar(50);
	cola1->imprimir();
	cout<<"extraemos uno de la cola: "<<cola1->extraer();
	cola1->imprimir();
	delete cola1;
	cin.get();
		return 0;
}
