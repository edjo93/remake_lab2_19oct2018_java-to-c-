#include<iostream>
using std::cout;
using std::endl;
using std::cin;

//prototypes
void menu();

int main(){
	int count_jug_1;
	int ganador;
	int count_jug_2;
	int jugador1;
	int jugador2;
	int n;
	int respuesta;
	int counter;//control del ciclo
	//valores iniciales de la sucesion
	int var1;
	int var2;
	int sum_divisores;
	int num_divisores;
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
				counter=1;
				n=0;
				sum_divisores=0;
				num_divisores=0;

				while(n<2){
					cout<<"\ningrese un numero: ";
					cin>>n;
				}
				//el numero es valido
				//test 
				while(counter<n){
					if(n%counter==0){
						sum_divisores+=counter;
						num_divisores++;
					}
					counter++;
				}
				cout<<"\nsuma de los divisores propios: "<<sum_divisores<<endl;
				if(sum_divisores<n){
					cout<<"\nel numero tiene "<<num_divisores<<" divisores propios y es defectivo"<<endl;
				}else{
					cout<<"\nel numero tiene "<<num_divisores<<" divisores propios y es abundante"<<endl;
				}

				break;
			case 3:
				
				ganador=false;//no hay ganador
				count_jug_1=0;
				count_jug_2=0;


				//mientras ninguno gane
				while(!ganador){
					//jugador 1 juega
					jugador1=0;
					jugador2=0;	
					//validacion

					while(jugador1<1||jugador1>3){
						cout<<"\nturno jugador 1\n1)piedra\n2)papel\n3)tijera\n?:";cin>>jugador1;
						
					}
					//jugador2 juega
					//validacion
					while(jugador2<1||jugador2>3){
						cout<<"\nturno jugador 2\n1)piedra\n2)papel\n3)tijera\n?:";cin>>jugador2;
						
					}
					//analizamos todos los casos
					if(jugador1==1&&jugador2==2){
						count_jug_2++;
					}	

					if(jugador1==1&&jugador2==3){
						count_jug_1++;
					}
					
					if(jugador1==2&&jugador2==1){
						count_jug_1++;
					}
					if(jugador1==2&&jugador2==3){
						count_jug_2++;
					}
					if(jugador1==3&&jugador2==1){
						count_jug_2++;
					}
					if(jugador1==3&&jugador2==2){
						count_jug_1++;
					}
					
					cout<<"\npuntos\njugador1: "<<count_jug_1<<"\njugador2: "<<count_jug_2<<endl;
					if(count_jug_1==2||count_jug_2==2){//cuando alguien gane el ciclo termina
						ganador=true;
					}
					

					
				}
				
				if(count_jug_1==2){
					cout<<"\nel ganador es el jugador 1"<<endl;
				}else{
					cout<<"\nel ganador es el jugador 2"<<endl;	
				}		
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
