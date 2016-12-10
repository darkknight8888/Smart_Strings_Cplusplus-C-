#include <iostream>

using namespace std;

class StringBuffer {
public :
	StringBuffer() : _strbuf(NULL), _length(0) {}
	
	StringBuffer(char* buffer, int len) {
		this->_strbuf = new char[len];
		this->_length = len;
		
		for (int i = 0; i < len; i ++) {
			this->_strbuf[i] = buffer[i];
		}
	}

	~StringBuffer() {
		delete[] _strbuf;
		_strbuf = NULL;
		_length = 0;
	}

	StringBuffer(const StringBuffer& rhs) {
		this->_strbuf = new char[rhs.length()];
		this->_length = rhs._length;

		for (int i = 0; i < _length; i ++) {
			_strbuf[i] = rhs._strbuf[i];
		}
	}

    char charAt(int i) const {
		return _strbuf[i];
	}

    int length() const {
		return _length;
	}

	void reserve(int) {}           //allocates memory for the string, according to the passed character length
    void append(char c) {
		char* newString = new char[this->_length + 1]; 
		for (int i = 0; i < this->_length; i ++) {
			newString[i] = _strbuf[i];
		}

		newString[this->_length] = c;

		delete[] _strbuf;
		this->_strbuf = newString;
		this->_length = _length + 1;
	}

	void print() {
		for (int i = 0; i < _length; i ++) {
			cout << _strbuf[i];
		}
		cout << endl;

		cout << (int *) (_strbuf) << endl;
	}

	int _refcount;
private:
    char* _strbuf;        //buffer to store the original string
    int _length;          //length of the string
};
