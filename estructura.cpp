

#include <iostream>
#include <conio.h>

using namespace std;
struct direccion{
char calle[20];
int cp;
char ciudad[20];
};

struct persona{
char nombre[20];
int edad;
float estatura;
struct direccion dire;
};//p1,p2;

int main (int argc, char** argv){
struct persona p1[5];//, p2;
for (int i=0;i<2;i++){

cout<<"nombre:";
cin.getline(p1[i].nombre,20,'\n');
cout<<"Edad: ";
cin>>p1[i].edad;
cout<<"Estatura: ";
cin>>p1[i].estatura;
cout<<"Calle: ";
// fflush(stdin);//se utiliza en caso de que el espacio del bufer se llene, 
para no repetir el comando siguiente
cin.getline(p1[i].dire.calle,20,'\n');//se repiten porque cuando se llenan los 
bufers se tienen que liberar, para que permita pedir mas datos
cin.getline(p1[i].dire.calle,20,'\n');
}
//mostrar guardado
cout<<endl<<"nombre guardado:"<<p1[0].nombre;
cout<<endl<<"edad guardada: "<<p1[0].edad;
cout<<endl<<"estatura guardada: "<<p1[0].estatura;
cout<<endl<<"calle guardada: "<<p1[0].dire.calle;

getch();
return 0;
}

