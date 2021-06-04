#ifndef MAGOGRYFFINDOR_H
#define MAGOGRYFFINDOR_H

#include "Mago.h"

class MagoGryffindor : public Mago
{
	private:
		int atrevimiento;
	public:
		MagoGryffindor();
		virtual string toString();
		int getAtrevimiento();
	protected:
};

#endif