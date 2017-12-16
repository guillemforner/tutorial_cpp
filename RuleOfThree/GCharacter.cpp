/*
 * GCharacter.cpp
 *
 *  Created on: Dec 7, 2017
 *      Author: guillem
 */

#include "GCharacter.h"

using namespace std;

// constructor

GCharacter::GCharacter(string n, int cap)
{
	name = n;
	capacity = cap;
	used = 0;

	toolHolder = new string[cap];

}

// copy constructor
GCharacter::GCharacter(const GCharacter& source)
{
	cout << "Copy Constructor called." << endl;

	this->name = source.name;
	this->capacity = source.capacity;
	used = source.used;
	toolHolder = new string[source.capacity];

	copy(source.toolHolder, source.toolHolder + used, this->toolHolder);

//	for(int i = 0; i < used; i++)
//	{
//		toolHolder[i] = source.toolHolder[i];
//	}

}

// Overloaded assignment
GCharacter& GCharacter::operator=(const GCharacter& source)
{
	cout << "Overloaded Assignment called" << endl;

	// Check for self assignment
	// gc1 = gc1;
	if(this == &source)
	{
		return *this;
	}

	//
	this->name = source.name;
	this->capacity = source.capacity;
	used = source.used;

	copy(source.toolHolder, source.toolHolder + used, this->toolHolder);

	return *this;

}

// Destructor
GCharacter::~GCharacter()
{
	cout << "Destructor called for " << this->name
			<< " @ this memory location " << this << endl;

	delete[] toolHolder;
}


// Inserting a new tool into tollHolder
void GCharacter::insert(const string& toolName)
{
	if(used == capacity)
	{
		cout << "Tool Holder is full. Cannot add any additional tools" << endl;
	}
	else
	{
		toolHolder[used] = toolName;
		used++;
	}
}

std::ostream& operator<<(std::ostream& os, const GCharacter& gc)
{
	os << "Game Character " << gc.name <<
			"\nhas the following tools: " << std::endl << "| ";

	for(int i = 0; i < gc.used; i++)
	{
		os << gc.toolHolder[i] + " | ";
	}

	return os << std::endl;
}














