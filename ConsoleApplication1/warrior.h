#pragma once
#include "hp.h"
#include "StatBlock.h"

class warrior : public hp , public StateBlock{
public :
	static const stattype HPGrowth = 20u;
	static const stattype Baseatk = 19u;
	static const stattype Basemana = 3;
	warrior() : hp(HPGrowth, HPGrowth) , StateBlock(Baseatk , Basemana){};
};