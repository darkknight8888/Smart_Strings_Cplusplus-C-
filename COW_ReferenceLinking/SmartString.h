#ifndef __SMARTSTRING__
#define __SMARTSTRING__
#include <cstdio>

#include "StringNode.h"
#include "List.h"

class SmartString {
public:
	List* newList;
	StringNode* dataNode;
	
	SmartString();
	SmartString(const char*);
	SmartString(const SmartString &);
	~SmartString();
	void append(char);
	void print();
	

};

//default constructor -- initialize list and Node to NULL
SmartString::SmartString() {
	this->newList = NULL;
	this->dataNode = NULL;
}

SmartString::SmartString(const char* str) {
	this->newList = new List();
	this->dataNode = new StringNode();
	newList->_strbuff = new StringBuffer(str);
	this->newList->lst.push_back(this->dataNode);
}

//prints the string contents
void SmartString::print() {
	char* toPrint = this->newList->_strbuff->getStrBufptr();
	
	if (toPrint != NULL) {
		cout << this->newList->_strbuff->getStrBufptr() << endl;		
	}
}

//append char 
void SmartString::append(char ch) {
	char* orignal_char = this->newList->_strbuff->getStrBufptr();
	
    
	this->newList->lst.remove(this->dataNode);
	delete this->dataNode;
	this->dataNode = NULL;
	
	this->newList = new List();
	this->dataNode = new StringNode();
	newList->_strbuff = new StringBuffer(orignal_char);
	newList->_strbuff->append(ch);
		
	this->newList->lst.push_back(this->dataNode);
}

//copy constructor
SmartString::SmartString(const SmartString &objSmartStr){
	this->newList = objSmartStr.newList;
	this->dataNode = NULL;
	this->dataNode = new StringNode();
	this->newList->lst.push_back(this->dataNode);
}

//destructor
SmartString::~SmartString() {
	this->newList->lst.remove(this->dataNode);
	delete this->dataNode;
	this->dataNode = NULL;
			
	//call list destructor if lst.size = 0
	if (this->newList->lst.size() == 0) {
		delete this->newList;
		this->newList = NULL;
	}
	
}

#endif
