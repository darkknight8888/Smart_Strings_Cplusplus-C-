#include <iostream>
#include <cstring>
#include "StringBuffer.h"
#include "StringNode.h"
#include "SmartString.h"

using namespace std;

int main(void)
{

	cout<<"=========="<<" COW with Reference Linking "<<"=========="<<endl<<endl;
	SmartString s1("Hello");
	s1.print();	//print string
	cout << "Pointers refering to string: " << "String_1: " << s1.newList->lst.size() << endl;
	
	SmartString s2(s1);
	s2.print();
	cout<<"============================================"<<endl;
	cout << "Pointers refering to string: " << "String_1: " << s1.newList->lst.size() << endl;
	cout << "Pointers refering to string: " << "String_2: " << s2.newList->lst.size() << endl;
	
	SmartString s3(s2);
	s3.print();
	
	cout<<"============================================"<<endl;
	cout << "Pointers refering to string: " << "String_1: " << s1.newList->lst.size() << endl;
	cout << "Pointers refering to string: " << "String_2: " << s2.newList->lst.size() << endl;
	cout << "Pointers refering to string: " << "String_3: " << s3.newList->lst.size() << endl;
	
	s1.append('W');	//appending one letter
	
	cout<<"============================================"<<endl;
	cout << "Pointers refering to string: " << "String_1: " << s1.newList->lst.size() << endl;
	cout << "Pointers refering to string: " << "String_2: " << s2.newList->lst.size() << endl;
	cout << "Pointers refering to string:: " << "String_3: " << s3.newList->lst.size() << endl;
	cout<<"============================================"<<endl;
	
	s1.print();
	s2.print();
	s3.print();

	system("pause");
	return 0;
}

