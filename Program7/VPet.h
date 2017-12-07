/*
 * VPet.h
 *
 *  Created on: Nov 23, 2017
 *      Author: guillem
 */

#ifndef VPET_H_
#define VPET_H_

class VPet
{
	public:

	// Constructors (Member functions)
	VPet(double weight, bool hungry);
	VPet();

	// Member functions
	void feedPet(int amount);
	bool getHungry();
	double getWeight();

	private:

	// Data members
	double weight;
	bool hungry;
};

#endif /* VPET_H_ */
