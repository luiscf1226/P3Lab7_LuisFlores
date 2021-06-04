#include "Mago.h"
Mago::Mago(){
	
}
Mago::Mago(int a,int i, int l,int v){
	this->astucia=a;
	this->inteligencia=i;
	this->lealtad=l;
	this->valentia=v;
}
int Mago::getAstucia(){
	return this->astucia;
}
int Mago::getInteligencia(){
	return this->inteligencia;
	
}
int Mago::getLealtad(){
	return this->lealtad;
	
}
int Mago::getValentia(){
	return this->valentia;
}