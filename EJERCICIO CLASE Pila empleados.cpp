#include <iostream>
#include <stack>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct empleados{
	char codigo[9];
	char nombre[51];
	char apellido[51];
	float sal;

};


int main() {
    
	empleados eaux;//
	empleados *p;
	char res;
    stack<empleados> pila;
	do{
	
    cout<<"Cod:"<<endl;
    cin>>eaux.codigo;
    cout<<"Nombre:"<<endl;
    cin>>eaux.nombre;
    cout<<"Apellido:"<<endl;
    cin>>eaux.apellido;
     cout<<"Salario:"<<endl;
    cin>>eaux.sal;
    pila.push(eaux);
    cout<<"Quiere ingresar otro empleado?y/n"<<endl;
    cin>>res;
   }while(res=='y');
   
    p=&pila.top();
   int c=1;
    while(c<=pila.size())
    {
      // p--;
    eaux=*p;
    cout<<eaux.codigo<<endl;
    cout<<eaux.nombre<<endl;
    cout<<eaux.apellido<<endl;
    cout<<eaux.sal<<endl;
    cout<<"----------------"<<endl;
    p--;
    c++;
    }
	system("PAUSE");
	return 0;
}
