#include <iostream>
#include "StringBuffer.cpp"
using namespace std;

class String {
private:
	StringBuffer* _stringbuffer;
public:
	String() : _stringbuffer(NULL) {}

	~String() {
		delete _stringbuffer;
		_stringbuffer = NULL;
	}

	String(char* buffer, int len) {
		_stringbuffer = new StringBuffer(buffer, len);
	}

	int length() const {
		return _stringbuffer->length();
	}

	void append(char c) {
		_stringbuffer->append(c);
	}

	char charAt(int i) {
		return _stringbuffer->charAt(i);
	}

	String(const String& rhs) {
		this->_stringbuffer = new StringBuffer(*(rhs._stringbuffer));
	}

	void print() {
		_stringbuffer->print();
	}
};