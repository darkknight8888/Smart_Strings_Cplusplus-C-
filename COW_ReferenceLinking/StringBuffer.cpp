// implementing string buffer class

#include <cstring>
#include "StringBuffer.h"

// default constructor
StringBuffer::StringBuffer(){
	
	this->_strbuf = NULL;
	this->_length = 0;
	this->_alloc_size = 0;
}
/*
 * Destructor StringBuffer
 * */
StringBuffer::~StringBuffer(){
//	cout << "STRING BUFFER DESTRUCTOR CALLED" << endl;
	
	delete[] this->_strbuf;
}
StringBuffer::StringBuffer(const StringBuffer &objStringBuffer){
	//deep copy
	this->_length = objStringBuffer._length;	
	this->_strbuf = new char[this->_length+1];	
	strncpy(this->_strbuf, objStringBuffer._strbuf, this->_length + 1);	
	this->_alloc_size = this->_length + 1;	
}

StringBuffer::StringBuffer(const char *t_str){
//	cout << "STRING BUFFER STR_CONSTRUCTOR CALLED" << endl;
	
	this->_length = strlen(t_str);		
	this->_strbuf = new char[this->_length + 1];
	strncpy(this->_strbuf, t_str, this->_length + 1);
	this->_alloc_size = this->_length + 1;
}

int StringBuffer::length() const{
	return this->_length;
}

char * StringBuffer::getStrBufptr() const{
	return this->_strbuf;
}

void StringBuffer::append(char ch){
	char *new_strbuf = new char[this->_alloc_size + 1];	
	strncpy(new_strbuf, this->_strbuf, this->_length+1);
	new_strbuf[this->_length] = ch;
	this->_length++;
	delete[] this->_strbuf;	
	this->_strbuf = NULL;
	this->_strbuf = new_strbuf;
}

int StringBuffer::alloc_size() const{
	return this->_alloc_size;
}
