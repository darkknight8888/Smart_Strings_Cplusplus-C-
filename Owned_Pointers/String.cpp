#include <iostream>
#include "StringBuffer.cpp"
using namespace std;

class String {
private:
	StringBuffer* _stringbuffer;
	bool owner;

public:
	String() : _stringbuffer(NULL), owner(false) {} // Note: owner is false in two cases: NULL or ownership is bequeathed.

	~String() {
		cout << "String destructor called" << endl;
		cout << this << endl;

		if (owner == true) {
			delete _stringbuffer;
			_stringbuffer = NULL;
		}
	}

	String(char* buffer, int len) {
		_stringbuffer = new StringBuffer(buffer, len);
		this->owner = true;
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

	String(String& rhs) {
		if (rhs.owner == false) {
			// Case 1: If there are two pointers, let us assume that the first pointer is not an owner
			// and the second pointer is an owner. And I would like to create a new pointer from the first pointer
			// whose owner variable is false.
			// In this case, throw an error.


			// then code for this situation will be : 
			// throw(exception );

			// Case 2: We should allow this to happen by making the third pointer owner variable set to false.
			// Owner remains the second pointer.

			// then code for this situation will be : 
			this->_stringbuffer = rhs._stringbuffer;
			this->owner = false;

		} else {
			this->owner = true;
			rhs.owner = false;

			this->_stringbuffer = rhs._stringbuffer;
		}
	}

	void print() {
		_stringbuffer->print();
	}
};