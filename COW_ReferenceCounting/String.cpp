#include <iostream>
#include "StringBuffer.cpp"
using namespace std;

class String {
private:
	StringBuffer* _stringbuffer;
public:
	String() : _stringbuffer(NULL) {}

	~String() {
		if (_stringbuffer->_refcount == 1) {
			cout << "String finally deleted" << endl;
			delete _stringbuffer;
			_stringbuffer = NULL;
		} else {
			cout << "Reference count: " << _stringbuffer->_refcount << endl;
			_stringbuffer->_refcount --;
		}
	}

	String(char* buffer, int len) {
		_stringbuffer = new StringBuffer(buffer, len);
		_stringbuffer->_refcount = 1;
	}

	int length() const {
		return _stringbuffer->length();
	}

	void append(char c) {
		_stringbuffer->_refcount -= 1;

		char* newString = new char[_stringbuffer->length() + 1];

		for (int i = 0; i < _stringbuffer->length(); i ++) {
			newString[i] = _stringbuffer->charAt(i);
		}

		newString[_stringbuffer->length()] = c;

		_stringbuffer = new StringBuffer(newString, _stringbuffer->length() + 1);
		_stringbuffer->_refcount = 1;
	}

	char charAt(int i) {
		return _stringbuffer->charAt(i);
	}

	String(const String& rhs) {
		this->_stringbuffer = rhs._stringbuffer;
		_stringbuffer->_refcount ++;
	}

	void print() {
		_stringbuffer->print();
	}
};