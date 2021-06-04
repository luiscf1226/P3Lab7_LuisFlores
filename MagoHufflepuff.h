#ifndef MAGOHUFFLEPUFF_H
#define MAGOHUFFLEPUFF_H

#include "Mago.h"

class MagoHufflepuff : public Mago
{
	private:
		int paciencia;
	public:
		MagoHufflepuff();
		virtual string toString();
		int getPaciencia();
	protected:
};

#endif