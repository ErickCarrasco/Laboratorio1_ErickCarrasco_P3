#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include <string>

#include <iomanip>

using std::setw;

void Pyramid(int);

int main(){

	int validacion =1;
	
	while(validacion==1){

		cout<<"----------------------" << endl;
		cout<< "Bienvenido al Programa"<< endl;
		cout<< "1/Pyramid"<<endl;
		cout<< "2/Log "<< endl;
		cout<< "3/Funcion"<<endl;
		int seleccion;
		cout<<"Ingrese un numero de las siguientes opciones: " << endl;
		cin>> seleccion;
		while(seleccion<=0 || seleccion >4){
			cout<<"Error. Numero fuera de rango"<< endl << "Ingrese un numero nuevamente: " << endl;
			cin>>seleccion;
		}

		switch(seleccion){
			
			case 1:
			//Pyramid
			{
				cout<<"Bienvenido a la Piramide" <<endl;
				int size=0;
				cout<<"Ingrese un numero: " << endl;
				cin>>size;
				Pyramid(size);
				cout<< " ... " << endl;
				cout<< "Ha finalizado la ejecucion" << endl;
			
			}
			break;
			
			case 2:
			//Logaritmos
			{
				cout<< "Bienvenido al calculo de logaritmos"<< endl;
				int numero_l;
				cout<< "Ingrese el numero a ver su logaritmo: "<< endl;
				cin>>numero_l;
							
			}
			break;

			case 3:
			//Funcion
			{

			}
			break;
			
		}
		cout<<"Desea continuar? "<< endl<< "1/ Si "<< endl<< "2/ No" << endl;
		cin >> validacion;
	}
	return 0;
}

void Pyramid(int number){
	int numero=number;
	int x = numero+1;
	x= 2*x;
	cout<< x << endl;
	int y= (2*x)-1;
	cout<< y << endl;
	int mitad = (y/2)+1;
	int posicion1=0;
	int posicion2=0;
	//Inicio de Construccion de piramide
	for(int i=0; i < x; i++){
		for(int j =0; j<y; j++){
			if(i<= x/2){
				cout<<" ";
				if(j==mitad){
					cout<<"*";
				}
				if(j== (mitad+posicion1)){
						cout<<"*";
					}
				if(j==(mitad-posicion2)){
					cout<<"*";
				}
				posicion1 = posicion1 +1;
				posicion2 = posicion2 +1;
			}
		}
		cout<<endl;
	
	}

}
