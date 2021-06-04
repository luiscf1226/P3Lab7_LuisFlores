#ifndef MAGORAVENCLAW_H
#define MAGORAVENCLAW_H

#include "Mago.h"

class MagoRavenclaw : public Mago
{
	private:
		int creatividad;
		
	public:
		MagoRavenclaw();
		virtual string toString();
		int getCreatividad();
	protected:
};

#endif