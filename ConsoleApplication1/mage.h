
#pragma once
#include "hp.h"
#include "StatBlock.h"

class mage : public hp, public StateBlock {
public:
	static const stattype HPGrowth = 10u;
	static const stattype Baseatk = 1u;
	static const stattype Basemana = 20;
	mage() : hp(HPGrowth, HPGrowth), StateBlock(Baseatk, Basemana) {};
};