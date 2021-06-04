#ifndef CLASEHOGWARTS_H
#define CLASEHOGWARTS_H
#include "Mago.h"
#include "MagoHufflepuff.h"
#include "MagoRavenclaw.h"
#include "MagoSlytherin.h"
#include "MagoGryffindor.h"
#include <vector>

class ClaseHogwarts
{
	private:
		int year;
		vector<MagoSlytherin*> magos_slytherin;
		vector<MagoHufflepuff*> magos_hufflepuff;
		vector<MagoGryffindor*> magos_gryffindor;
		vector<MagoRavenclaw*> magos_ravenclaw;
		//
		
	public:
		void print();
		void promedio_habilidades_por_casa();
		ClaseHogwarts();
		ClaseHogwarts(int);
		vector<MagoSlytherin*> getMagosSlytherin();
		vector<MagoHufflepuff*> getMagosHufflepuff();
		vector<MagoGryffindor*> getMagosgryffindor();
		vector<MagoRavenclaw*> getMagosravenclaw();
		//
		void setMagosSlytherin(vector<MagoSlytherin*>);
		void setMagosHufflepuff(vector<MagoHufflepuff*>);
		void setMagosGryffindor(vector<MagoGryffindor*>);
		void setMagosRavenclaw(vector<MagoRavenclaw*>);
		
		//
		void addMagoS(MagoSlytherin*);
		void addMagoH(MagoHufflepuff*);
		void addMagoG(MagoGryffindor*);
		void addMagoR(MagoRavenclaw*);
		int getYear();
		
	
};

#endif