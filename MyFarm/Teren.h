
#ifndef TEREN_H
#define TEREN_H

#include "Planta.h"
#include <vector>

class Teren {

public:

	int nivel;
	enum class NumarulTerenului {
		Invalid,
		UNU,
		DOI,
		TREI,
	};

	Teren();
	Teren(const int& nivel,NumarulTerenului numarulterenului);
	virtual ~Teren();

	NumarulTerenului getNumarulTerenului() const;
	void arataTerenurile() const;
	void creazaTerenul();

	static NumarulTerenului alegeTerenul();
	const std::vector<Planta>& getPlante() const { return plante; }

	void adaugaPlanta(const Planta& planta);
	void golesteTeren();
	void afiseazaPlante() const;
private:

	NumarulTerenului numarTeren;
	std::vector<Planta> plante;


};

#endif
