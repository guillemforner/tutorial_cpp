#include "VPet.h"

VPet::VPet(double w, bool hun):weight(w),hungry(hun){}
VPet::VPet():weight(100),hungry(true){}

void VPet::feedPet(int amt)
{
	if(amt >= 0.5 * weight)
	{
		hungry = false;
	}
	else
	{
		hungry = true;
	}

	weight = weight + 0.25 * amt;
}

double VPet::getWeight()
{
	return weight;
}

bool VPet::getHungry()
{
	return hungry;
}
