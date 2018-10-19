#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include <string>

#include <iomanip>

#include<math.h>

using std::setw;

//Funcion para la piramide
void Pyramid(int);

//Funcion logaritmica
void ln(int);

//FUncion FOrmula
void funcionf();

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
				ln(numero_l);		
				cout<< "Ha terminado la ejecucion";						
			}
			break;

			case 3:
			//Funcion
			{
				cout<<"Ha ingresado a la formula y = m(sqrt(x))"<<endl;
				funcionf();
				cout<<"Ha finalizado"<< endl;
			}
			break;
			
		}
		cout<<"Desea continuar? "<< endl<< "1/ Si "<< endl<< "2/ No" << endl;
		cin >> validacion;
	}
	return 0;
}


void funcionf(){
	double y=0;
	double precision=0;
	double m=0;
	double x=0;
	double p2=0;
	cout<<"Ingrese el numero y: " << endl;
	cin>>y;
	cout<<"Ingrese el numero de precision: " << endl;
	cin>>precision;
	cout<<"Ingrese el numero m: " << endl;
	cin>>m;
	p2 = precision;
	while(x<y){
		cout<< "La aproximacion de p: " << precision << " resulta: ";
		x=(m*(sqrt(precision)));
		cout<< x << endl;
		precision= precision + p2;
	}
	cout<< "EL numero x es = " << x << endl;

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
		
		if(i<x/2){
				
			for(int k=mitad; k>mitad - posicion1; k--){
				cout<< "*";
			}
			
			for(int j =mitad; j<mitad + posicion2; j++){
				cout<<"*";
			}
			cout<<endl;
	
		}
	}

}

void ln(int numero){
	int y=0;
	y=numero;
	int dividor=1;
	int count2=1;
	int counter=0;
	while(y>10){
		y=y/10;
		
		if(y>10){
			dividor=dividor*10;
			count2=count2*10;
		
		}
		if(y<10){
			dividor= dividor*1;
			count2=count2*10;
		}
		counter = counter +1;
		
		
	}
	cout<< "Numero 1: " << dividor<<endl;
	cout<< "Numero 2: " << count2<< endl;

	int ver2 = numero;
	ver2 = ver2/dividor;
	cout<< "DIvision redondear: " << ver2<< endl;
	ver2= ver2*dividor;
	cout<< "Redondeado: " << ver2 << endl;
	double ver3 = ver2;
	double logaritmo=ver3/count2;
	cout<<"EL logaritmo: "<< logaritmo<<endl;

	cout<< endl;
	cout<< endl;

	double suma=0;
	double resultado=0;
	cout<< "Ln("<<numero<<") = ";

	//Log 10
	for(int i =0; i< counter; i++){
		suma =suma+ log(10);
		
		
		cout<<"log(10) + ";
	}


	int contadorlogs2=0;
	//Contador de la division de logaritmos
	while(logaritmo>1.3){
		logaritmo = logaritmo/2;
		contadorlogs2 = contadorlogs2 +1; 
	}
	double suma2=0;
	for(int j=0; j<contadorlogs2; j++){
		suma2 = suma2 + log(2);
		cout<< "Log(2) + ";
	}
	cout << "Log(" << logaritmo << ")";
	resultado = suma + suma2 + log(logaritmo);
	cout<< endl;
	cout<<"Resultado: " << resultado<< endl;
}
