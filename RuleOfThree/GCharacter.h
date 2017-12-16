/*
 * GCharacter.h
 *
 *  Created on: Dec 7, 2017
 *      Author: guillem
 */

#ifndef GCHARACTER_H_
#define GCHARACTER_H_

#include <iostream>
#include <string>

class GCharacter
{
	friend std::ostream& operator<<(std::ostream& os, const GCharacter& gc);
public:
	static const int DEFAULT_CAPACITY = 5;

	// Constructor
	GCharacter(std::string name = "John", int capacity = DEFAULT_CAPACITY);

	// Copy Constructor
	GCharacter(const GCharacter& source);

	// Overloaded Assignment
	GCharacter& operator=(const GCharacter& source);

	// Destructor
	~GCharacter();

	// Member function
	void insert(const std::string& toolName);

private:
	std::string name;
	int capacity;
	int used;
	std::string* toolHolder;

};



#endif /* GCHARACTER_H_ */
