#pragma once
#include "int tyep.h"

class StateBlock {
	stattype attack;
	stattype mana;
public :
	StateBlock(){
	attack = static_cast < stattype>(1u); 
	mana = static_cast < stattype> (1u);
	}
	StateBlock(stattype atk, stattype mna) {
		attack = static_cast <stattype>(atk);
		mana = static_cast<stattype>(mna);
	}
};