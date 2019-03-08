#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int *notas;
    int i;
    int arr[4];
    notas=&arr;
    for(i=0; i<4; i++)
    cin>>*(notas+1);
    for(i=0; i<4; i++)
    cout<<*(notas+1);
    getch();
    return 0;
}
