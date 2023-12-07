
#pragma once
#include "hp.h"
#include "StatBlock.h"

class assain : public hp, public StateBlock {
public:
	static const stattype HPGrowth = 15u;
	static const stattype Baseatk = 15u;
	static const stattype Basemana = 10;
	assain() : hp(HPGrowth, HPGrowth), StateBlock(Baseatk, Basemana) {};
};