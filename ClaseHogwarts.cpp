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
void ClaseHogwarts::addMagoS(MagoSlytherin* m){
	this->magos_slytherin.push_back(m);
}
void ClaseHogwarts::addMagoH(MagoHufflepuff* m){
	this->magos_hufflepuff.push_back(m);
}
void ClaseHogwarts::addMagoG(MagoGryffindor* m){
	this->magos_gryffindor.push_back(m);
}
void ClaseHogwarts::addMagoR(MagoRavenclaw* m){
	this->magos_ravenclaw.push_back(m);
}
void ClaseHogwarts::print(){
	for(int i=0;i<this->magos_gryffindor.size();i++){
		MagoGryffindor* mago=this->magos_gryffindor[i];
		cout<<"Casa de Mago: Gryffin"<<endl;
		cout<<"Mago # : "<<i<<endl;
		cout<<"Astucia: "<<mago->getAstucia()<<endl;
		cout<<"Inteligencia: "<<mago->getInteligencia()<<endl;
		cout<<"Lealtad: "<<mago->getLealtad()<<endl;
		cout<<"Valentia: "<<mago->getValentia()<<endl;
		cout<<"Atrevimiento: "<<mago->getAtrevimiento()<<endl;	
	}
	//
	for(int i=0;i<this->magos_slytherin.size();i++){
		MagoSlytherin* mago=this->magos_slytherin[i];
		cout<<"Casa de Mago: Slytherin"<<endl;
		cout<<"Mago # : "<<i<<endl;
		cout<<"Astucia: "<<mago->getAstucia()<<endl;
		cout<<"Inteligencia: "<<mago->getInteligencia()<<endl;
		cout<<"Lealtad: "<<mago->getLealtad()<<endl;
		cout<<"Valentia: "<<mago->getValentia()<<endl;
		cout<<"Liderazgo: "<<mago->getLiderazgo()<<endl;	
	}
	//
	for(int i=0;i<this->magos_ravenclaw.size();i++){
		MagoRavenclaw* mago=this->magos_ravenclaw[i];
		cout<<"Casa de Mago: Ravenclaw"<<endl;
		cout<<"Mago # : "<<i<<endl;
		cout<<"Astucia: "<<mago->getAstucia()<<endl;
		cout<<"Inteligencia: "<<mago->getInteligencia()<<endl;
		cout<<"Lealtad: "<<mago->getLealtad()<<endl;
		cout<<"Valentia: "<<mago->getValentia()<<endl;
		cout<<"Creatividad: "<<mago->getCreatividad()<<endl;	
	}
	//
	for(int i=0;i<this->magos_hufflepuff.size();i++){
		MagoHufflepuff* mago=this->magos_hufflepuff[i];
		cout<<"Casa de Mago: Hufflepuff"<<endl;
		cout<<"Mago # : "<<i<<endl;
		cout<<"Astucia: "<<mago->getAstucia()<<endl;
		cout<<"Inteligencia: "<<mago->getInteligencia()<<endl;
		cout<<"Lealtad: "<<mago->getLealtad()<<endl;
		cout<<"Valentia: "<<mago->getValentia()<<endl;
		cout<<"paciencia: "<<mago->getPaciencia()<<endl;	
	}
}