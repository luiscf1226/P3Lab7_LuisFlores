#ifndef MAGO_H
#define MAGO_H
#include <string>
#include <iostream>
using namespace std;
class Mago
{
	protected:
		int astucia;
		int inteligencia;
		int lealtad;
		int valentia;
		
	public:
		Mago();
		Mago(int,int,int,int);
		int getAstucia();
		int getInteligencia();
		int getLealtad();
		int getValentia();
		virtual string toString()=0;
	
};

#endif