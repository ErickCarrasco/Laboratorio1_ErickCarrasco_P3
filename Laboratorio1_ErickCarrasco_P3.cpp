#include <iostream>

using std::cin;
using std::cout;
using std::endl;

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
				int size;
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
			
			}
			break;

			case 3:
			//Funcion
			{

			}
			break;
			
		}
	}
	return 0;
}

void Pyramid(int number){
	int x = 2(number+1);
	int y = (2*x)-1;

	//Inicio de Construccion de piramide

	for(int i=1; i <= x; i++){
		for(int j =1; j<=y; j++){
			if(i== x/2){
				
			}
		}
	}

}
