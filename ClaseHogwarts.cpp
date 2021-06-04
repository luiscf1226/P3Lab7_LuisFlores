#include "ClaseHogwarts.h"
ClaseHogwarts::ClaseHogwarts(){
	
}
ClaseHogwarts::~ClaseHogwarts(){
	for(int i=0;i<this->magos_gryffindor.size();i++){
		delete this->magos_gryffindor[i];
	}
	this->magos_gryffindor.clear();
	//
	for(int i=0;i<this->magos_hufflepuff.size();i++){
		delete this->magos_hufflepuff[i];
	}
	this->magos_hufflepuff.clear();
	//
	for(int i=0;i<this->magos_ravenclaw.size();i++){
		delete this->magos_ravenclaw[i];
	}
	this->magos_ravenclaw.clear();
	//
	for(int i=0;i<this->magos_slytherin.size();i++){
		delete this->magos_slytherin[i];
	}
	this->magos_slytherin.clear();
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
void ClaseHogwarts::promedio_habilidades_por_casa(int a,int b,int c,int d){
		float promastucia1;
		float prominteligencia1;
		float promlealtad1;
		float promvalentia1;
		float proma;
		//
		float promastucia2;
		float prominteligencia2;
		float promlealtad2;
		float promvalentia2;
		//
		float promastucia3;
		float prominteligencia3;
		float promlealtad3;
		float promvalentia3;
		//
		float promastucia4;
		float prominteligencia4;
		float promlealtad4;
		float promvalentia4;
		//
		for(int i=0;i<this->magos_gryffindor.size();i++){
			MagoGryffindor* mago=this->magos_gryffindor[i];
		    promastucia1+=mago->getAstucia();
			prominteligencia1+=mago->getInteligencia();
			promlealtad1+=mago->getLealtad();
			promvalentia1+=mago->getValentia();
			proma+=mago->getAtrevimiento();
			
		}
		cout<<"---------------------------------"<<endl;
		cout<<"Casa Gryffindor: "<<endl;
		cout<<"Cantidad Magos: "<<a<<endl;
		cout<<"Astucia: "<<promastucia1/a<<endl;
		cout<<"Inteligence: "<<prominteligencia1/a<<endl;
		cout<<"Lealtad: "<<promlealtad1/a<<endl;
		cout<<"Valentia: "<<promvalentia1/a<<endl;
		cout<<"atrevimiento: "<<proma/a<<endl;
		//2
		float proml;
			for(int i=0;i<this->magos_slytherin.size();i++){
			MagoSlytherin* mago=this->magos_slytherin[i];
		    promastucia2+=mago->getAstucia();
			prominteligencia2+=mago->getInteligencia();
			promlealtad2+=mago->getLealtad();
			promvalentia2+=mago->getValentia();
			proml+=mago->getLiderazgo();
			
		}
		cout<<"---------------------------------"<<endl;
		cout<<"Casa Slytherin: "<<endl;
		cout<<"Cantidad Magos: "<<b<<endl;
		cout<<"Astucia: "<<promastucia2/b<<endl;
		cout<<"Inteligence: "<<prominteligencia2/b<<endl;
		cout<<"Lealtad: "<<promlealtad2/b<<endl;
		cout<<"Valentia: "<<promvalentia2/b<<endl;
		cout<<"Liderazgo: "<<proml/b<<endl;
		//3
		float promh;
		for(int i=0;i<this->magos_hufflepuff.size();i++){
			MagoHufflepuff* mago=this->magos_hufflepuff[i];
		    promastucia3+=mago->getAstucia();
			prominteligencia3+=mago->getInteligencia();
			promlealtad3+=mago->getLealtad();
			promvalentia3+=mago->getValentia();
			promh+=mago->getPaciencia();
			
		}
		cout<<"---------------------------------"<<endl;
		cout<<"Casa Hufflepuff: "<<endl;
		cout<<"Cantidad Magos: "<<c<<endl;
		cout<<"Astucia: "<<promastucia3/c<<endl;
		cout<<"Inteligence: "<<prominteligencia3/c<<endl;
		cout<<"Lealtad: "<<promlealtad3/c<<endl;
		cout<<"Valentia: "<<promvalentia3/c<<endl;
		cout<<"Paciencia: "<<promh/c<<endl;
		//4
		float promc;
		for(int i=0;i<this->magos_ravenclaw.size();i++){
			MagoRavenclaw* mago=this->magos_ravenclaw[i];
		    promastucia4+=mago->getAstucia();
			prominteligencia4+=mago->getInteligencia();
			promlealtad4+=mago->getLealtad();
			promvalentia4+=mago->getValentia();
			promc+=mago->getCreatividad();
			
		}
		cout<<"---------------------------------"<<endl;
		cout<<"Casa Ravenclaw: "<<endl;
		cout<<"Cantidad Magos: "<<d<<endl;
		cout<<"Astucia: "<<promastucia4/d<<endl;
		cout<<"Inteligence: "<<prominteligencia3/d<<endl;
		cout<<"Lealtad: "<<promlealtad4/d<<endl;
		cout<<"Valentia: "<<promvalentia4/d<<endl;
		cout<<"Paciencia: "<<promc/d<<endl;
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
		cout<<"---------------------------------"<<endl;
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
		cout<<"---------------------------------"<<endl;
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
		cout<<"---------------------------------"<<endl;
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
		cout<<"---------------------------------"<<endl;
		cout<<"Casa de Mago: Hufflepuff"<<endl;
		cout<<"Mago # : "<<i<<endl;
		cout<<"Astucia: "<<mago->getAstucia()<<endl;
		cout<<"Inteligencia: "<<mago->getInteligencia()<<endl;
		cout<<"Lealtad: "<<mago->getLealtad()<<endl;
		cout<<"Valentia: "<<mago->getValentia()<<endl;
		cout<<"paciencia: "<<mago->getPaciencia()<<endl;	
	}
}