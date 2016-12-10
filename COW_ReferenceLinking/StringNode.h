
// SmartString.h contains contains declaration of SmartString Class. 
// SmartString class is a wrapper around StringBuffer class.


#ifndef SMART_STRING_H
#define SMART_STRING_H

#include "StringBuffer.h"
class StringNode {

public:
	StringNode* prev;
	StringNode* next;

	StringNode();	//default constructor
	~StringNode();	
};

#endif
