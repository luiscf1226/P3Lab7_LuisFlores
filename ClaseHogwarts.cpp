#include "ClaseHogwarts.h"
ClaseHogwarts::ClaseHogwarts(){
	
}
ClaseHogwarts::ClaseHogwarts(int y){
	this->year=y;
}
vector<MagoSlytherin*> ClaseHogwarts::getMagosSlytherin(){
	return this->magos_slytherin;
}
vector<MagoHufflepuff*> ClaseHogwarts::getMagosHufflepuff(){
	return this->magos_hufflepuff;
}
vector<MagoGryffindor*> ClaseHogwarts::getMagosgryffindor(){
	return this->magos_gryffindor;
}
vector<MagoRavenclaw*>ClaseHogwarts:: getMagosravenclaw(){
	return this->magos_ravenclaw;
}
//
void ClaseHogwarts:: setMagosSlytherin(vector<MagoSlytherin*> ms){
	this->magos_slytherin=ms;
}
void ClaseHogwarts:: setMagosHufflepuff(vector<MagoHufflepuff*> mp){
	this->magos_hufflepuff=mp;
}
void ClaseHogwarts::setMagosGryffindor(vector<MagoGryffindor*> mg){
	this->magos_gryffindor=mg;
}
void ClaseHogwarts::setMagosRavenclaw(vector<MagoRavenclaw*> mr){
	this->magos_ravenclaw=mr;
	
}
void ClaseHogwarts::promedio_habilidades_por_casa(){
	
}