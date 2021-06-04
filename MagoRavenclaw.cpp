#include "MagoRavenclaw.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
string MagoRavenclaw::toString(){

	
}
MagoRavenclaw::MagoRavenclaw(){
//	srand (time(NULL));
	this->creatividad=rand() % 21+ 80;
	this->astucia=rand() % 101;
	this->inteligencia=rand() % 101;
	this->lealtad=rand() % 21+ 80;
	this->valentia=rand() % 101;
}
int MagoRavenclaw::getCreatividad(){
	return this->creatividad;
}