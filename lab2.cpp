#include<iostream>
using std::cout;
using std::endl;
using std::cin;

//prototypes
void menu();

int main(){
	int respuesta;
	do{
		menu();
		cin>>respuesta;
		//capturamos la opcion
		switch(respuesta){
			case 1:

				cout<<"\ncase1"<<endl;
				break;
			case 2:
				cout<<"\ncase2"<<endl;
				break;
			case 3:
				cout<<"\ncase3"<<endl;
				break;
			case 4:
				cout<<"\nhasta luego"<<endl;	
				break;
			default:
				cout<<"\ningrese una opcion correcta"<<endl;
								
		}
	}while(respuesta!=4);//el ciclo termina cuando el usuario selecciona 4

	return 0;//el programa termina correctamente
}

//functions

//menu con opciones
void menu(){
	
	cout<<"\nmenu\n1.mostrar N numeros de una secuencia\n2.numeros defectivos\n3.piedra,papel o tigera\n4.salir\n?: ";
}
