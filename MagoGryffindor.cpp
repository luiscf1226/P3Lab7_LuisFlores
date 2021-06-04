#include "MagoGryffindor.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
string MagoGryffindor::toString(){
	
}
MagoGryffindor::MagoGryffindor(){
	//srand (time(NULL));
	this->atrevimiento=rand() % 21+ 80;
	this->astucia=rand() % 101;
	this->inteligencia=rand() % 101;
	this->lealtad=rand() % 21+ 80;
	this->valentia=rand() % 101;
}
int MagoGryffindor::getAtrevimiento(){
	return this->atrevimiento;
}