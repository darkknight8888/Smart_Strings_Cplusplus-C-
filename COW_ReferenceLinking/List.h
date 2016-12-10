#ifndef __LIST__
#define __LIST__

#include "StringNode.h"
#include "StringBuffer.h"
#include <list>

class List {
public:
	StringBuffer* _strbuff;
	list<StringNode*> lst;
	
	List();
	~List();
	
};

#endif
