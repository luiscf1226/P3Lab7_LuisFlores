#include "MagoHufflepuff.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
string MagoHufflepuff::toString(){
	
}
MagoHufflepuff::MagoHufflepuff(){
	//srand (time(NULL));
	this->paciencia=rand() % 21+ 80;
	this->astucia=rand() % 101;
	this->inteligencia=rand() % 101;
	this->lealtad=rand() % 21+ 80;
	this->valentia=rand() % 101;
}
int MagoHufflepuff::getPaciencia(){
	return this->paciencia;
}