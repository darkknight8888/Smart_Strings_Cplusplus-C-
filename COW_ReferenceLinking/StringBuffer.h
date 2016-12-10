// declaring string buffer class

#ifndef STRING_BUFFER_H
#define STRING_BUFFER_H

#include <iostream>

using namespace std;

class StringBuffer {	
	private:
		char *_strbuf;	//buffer to store the original string
		int _length;	//length of the string
		int _alloc_size;
	public:
			
		StringBuffer();	
		~StringBuffer();	
		StringBuffer(const StringBuffer &);	
		StringBuffer(const char*);	//constructor to convert a char* to StringBuffer
		char charAt(int) const;	//returns the character at the passed index
		int length() const;
		void append(char);	
		char * getStrBufptr() const;
		int alloc_size() const;

};


#endif
