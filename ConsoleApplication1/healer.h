
#pragma once
#include "hp.h"
#include "StatBlock.h"

class healer : public hp, public StateBlock {
public:
	static const stattype HPGrowth = 25u;
	static const stattype Baseatk = 1u;
	static const stattype Basemana = 15;
	healer() : hp(HPGrowth, HPGrowth), StateBlock(Baseatk, Basemana) {};
};