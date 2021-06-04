#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
#include "Mago.h"
#include <typeinfo>
#include "MagoHufflepuff.h"
#include "MagoRavenclaw.h"
#include "MagoSlytherin.h"
#include "MagoGryffindor.h"
#include "ClaseHogwarts.h" 
#include "SombreroClasificador.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int menu(){

	
	while(true){
		cout<<"MENU"<<endl;
		/*
		
		*/
		cout<<"1. Separar por Casa "<<endl<<"2. Imprimir por casa"
		<<endl<<"3. Impirmir cualidades por casa"<<endl<<"4.Salir"<<endl;
		int valor;
		cin>>valor;
		if(valor > 0&& valor < 5)
			return valor;
		
	}
	
}
int main(int argc, char** argv) {
	vector<Mago*> listaMagos;
	//ClaseHogwarts* clasehg;
	SombreroClasificador* sombrero=new SombreroClasificador;
	int main=0;
	while(main!=4){
		switch(main=menu()){
			
			case 1:{
				
				int contm=0;
				int cont=0;
			
				srand (time(NULL));
				for(int i=0;i<20;i++){
						
					float r = (rand() / (float)RAND_MAX * 1.00);
					
					if(r>=0.00&&r<=0.25){
						//srand (time(NULL));
						MagoSlytherin* sl=new MagoSlytherin();
						listaMagos.push_back(sl);
					
						contm++;
						cont++;
					}else if(r>=0.25&&r<=0.50){
						
						//srand (time(NULL));
						MagoRavenclaw* sl=new MagoRavenclaw();
						listaMagos.push_back(sl);
						contm++;
						cont++;
					}else if(r>=0.50&&r<=0.75){
						
						//srand (time(NULL));
						MagoHufflepuff* sl=new MagoHufflepuff();
						listaMagos.push_back(sl);
						contm++;
						cont++;
					}else if(r>=0.75&&r<=1.00){
						//srand (time(NULL));
						MagoGryffindor* sl=new MagoGryffindor();
						listaMagos.push_back(sl);
						contm++;
						cont++;
					}
					//cout<<"random: "<<r<<endl;
				}
				int year;
				cout<<"ingrese year: ";
				cin>>year;
				ClaseHogwarts* clase=sombrero->clasificar_magos_nuevos(listaMagos,year);
				clase->print();
				cout<<endl;
				/*
				cout<<"cantidad magos: "<<contm<<endl;
				int year;
				cout<<"ingrese year: ";
				cin>>year;
				clasehg=new ClaseHogwarts(year);*/
			
				/*
				int conts=0,contr=0,conth=0,contg=0;
				for(int i=0;i<listaMagos.size();i++){
					if(typeid( *listaMagos[i])==typeid(MagoSlytherin)){
						conts++;
					}
					 if(typeid( *listaMagos[i])==typeid(MagoHufflepuff)){
						conth++;
					}
					if(typeid( *listaMagos[i])==typeid(MagoRavenclaw)){
						contr++;
					}
					
					 if(typeid( *listaMagos[i])==typeid(MagoGryffindor)){
						contg++;
					}
				}
				cout<<"Cantidad Slytherin: "<<conts<<endl;
				cout<<"Cantidad Hufflepluff: "<<conth<<endl;
				cout<<"Cantidad Ravenclaw: "<<contr<<endl;
				cout<<"Cantidad Gryffdindor: "<<contg<<endl;
				*/
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
				
				
				break;
			}
			case 4:{
				
				
				break;
			}
			case 5:{
				cout<<"Saliendo";
				break;
			}
		}//sitwch
	}//while
	return 0;
}