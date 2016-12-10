#include <cstdlib>
#include <iostream>
#include <cstring>
#include "String.cpp"
using namespace std;

int main(int argc, char** argv) {
	char* hello = "HELLO";

	{
		String ss(hello,5);
		String ss2(ss);
		String ss3(ss2);

		cout<<"============"<<" OWNED POINTERS "<<"============"<<endl<<endl;
		cout << "Address of ss: " << &ss << endl;
		cout << "Address of ss2: " << &ss2 << endl;
		cout << "Address of ss3: " << &ss3 << endl;

		cout<<"============================================"<<endl;
		std::cout << "ss length = " << ss.length() << std::endl;
		std::cout << "ss = ";
		ss.print();

		cout<<"============================================"<<endl;
		std::cout << "ss2 length = " << ss2.length() << std::endl;
		std::cout << "ss2 = ";
		ss2.print();

		cout<<"============================================"<<endl;
		std::cout << "ss3 length = " << ss3.length() << std::endl;
		std::cout << "ss3 = ";
		ss3.print();

		ss2.append('W');

		cout<<"============================================"<<endl;
		std::cout<<"new ss length = " << ss.length() << std::endl;
		std::cout << "ss = ";
		ss.print();

		cout<<"============================================"<<endl;
		std::cout<<"new ss2 length = " << ss2.length() << std::endl;
		std::cout << "ss2 = ";
		ss2.print();
		cout<<"============================================"<<endl;


		std::cout << "ss3 length = " << ss3.length() << std::endl;
		std::cout << "ss3 = ";
		ss3.print();
		cout<<"============================================"<<endl;
	} 

	system("pause");

	return 0;
}