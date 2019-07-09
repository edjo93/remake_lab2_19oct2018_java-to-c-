#include<iostream>
using std::cout;
using std::endl;
using std::cin;

//prototypes
void menu();

int main(){
	int n;
	int respuesta;
	int counter;//control del ciclo
	//valores iniciales de la sucesion
	int var1;
	int var2;
	do{
		menu();
		cin>>respuesta;
		//capturamos la opcion
		switch(respuesta){
			case 1:
				//reiniciamos los valores
				counter=1;
				var1=0;
				var2=4;
				n=0;	
				while(n<1){
					cout<<"\ningrese n [n>0]: ";
					cin>>n;
				}
				//n es un dato valido
				//se despliega la sucesion

				while(counter<=n){
					if(counter!=n){//se despliega la coma
						if(counter%2==0){//variable en posicion par
							cout<<var2<<",";
							var2+=2;
						}else{//variable en posicion impar
							cout<<var1<<",";
							var1+=2;
						}
					}else{
						if(counter%2==0){//variable en posicion par
							cout<<var2;
							var2+=2;
						}else{//variable en posicion impar
							cout<<var1;
							var1+=2;
						}	
					}
					counter++;//el ciclo tiene que avanzar	
				}
				cout<<endl;			
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
