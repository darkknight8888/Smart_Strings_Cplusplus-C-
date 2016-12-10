#include <cstdlib>
#include <iostream>
#include <cstring>
#include "String.cpp"
using namespace std;

int main(int argc, char** argv) {
    char* hello = "HELLO";
    
    String ss2(hello,5);
	String ss(ss2);
    
	cout<<"============"<<" COPIED POINTERS "<<"============"<<endl<<endl;
	cout << "ss length = " << ss.length() << endl;
	cout << "ss = ";
	ss.print();
    cout<<"============================================"<<endl;

	cout << "ss2 length = " << ss2.length() << endl;
	cout << "ss2 = ";
	ss2.print();
	cout<<"============================================"<<endl;
    ss2.append('W');

     
    cout<<"new ss length = " << ss.length() << endl;
	cout << "ss = ";
	ss.print();

	cout<<"============================================"<<endl;
    cout<<"new ss2 length = " << ss2.length() << endl;
    cout << "ss2 = ";
	ss2.print();

	system("pause");

    return 0;
}