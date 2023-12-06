#pragma once
#include "int tyep.h"

class hp {
private :
	sixnum Currenthp;
	sixnum Maxhp;
	
public:
	bool maxhp(sixnum new_max_hp) {
		if (new_max_hp < 1)
			return false;
		Maxhp = new_max_hp;
		if (Currenthp > Maxhp)
			Currenthp = Maxhp;

		return true;
	}

	void takedamage(sixnum damage) {
		if (damage >= Currenthp ) {
			Currenthp = 0;
			return;
		}
		Currenthp -= damage;
	
	}

	void healing(sixnum heal) {
		if (heal + Currenthp > Maxhp) {
			Currenthp = Maxhp;
			return;
		}
		
		Currenthp += heal;
	}
};