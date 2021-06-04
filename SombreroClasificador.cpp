#include "SombreroClasificador.h"
ClaseHogwarts* SombreroClasificador::clasificar_magos_nuevos(vector<Mago*> lista,int y){
	ClaseHogwarts* retval=new ClaseHogwarts(y);
	int conts=0,contr=0,conth=0,contg=0;
	for(int i=0;i<lista.size();i++){
		//	Escalera* escaleratemp=dynamic_cast<Escalera*>(lista[i]);
		if(typeid( *lista[i])==typeid(MagoSlytherin)){
			//retval->addMagosSlytherin(mago);
			MagoSlytherin* magos=dynamic_cast<MagoSlytherin*>(lista[i]);
			retval->addMagoS(magos);
			conts++;
		}
		if(typeid( *lista[i])==typeid(MagoHufflepuff)){
			//retval->addMagosHufflepuff(mago);
			MagoHufflepuff* magoh=dynamic_cast<MagoHufflepuff*>(lista[i]);
			retval->addMagoH(magoh);
			conth++;
		}
		if(typeid( *lista[i])==typeid(MagoRavenclaw)){
			MagoRavenclaw* magor=dynamic_cast<MagoRavenclaw*>(lista[i]);
			retval->addMagoR(magor);
			contr++;
		}
					
		if(typeid( *lista[i])==typeid(MagoGryffindor)){
			MagoGryffindor* magog=dynamic_cast<MagoGryffindor*>(lista[i]);
			retval->addMagoG(magog);
			contg++;
		}
	}
	cout<<"Cantidad Slytherin: "<<conts<<endl;
	cout<<"Cantidad Hufflepluff: "<<conth<<endl;
	cout<<"Cantidad Ravenclaw: "<<contr<<endl;
	cout<<"Cantidad Gryffdindor: "<<contg<<endl;
	return retval;
}
SombreroClasificador::SombreroClasificador(){
	
}