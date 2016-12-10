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
		String ss4(ss2);
		String ss5(ss2);

		cout<<"========="<<" COW with Reference Counting "<<"========="<<endl<<endl;
		cout << "ss length = " << ss.length() << endl;
		cout << "ss = ";
		ss.print();

		cout<<"============================================"<<endl;
		cout << "ss2 length = " << ss2.length() << endl;
		cout << "ss2 = ";
		ss2.print();

		cout<<"============================================"<<endl;
		cout << "ss3 length = " << ss3.length() << endl;
		cout << "ss3 = ";
		ss3.print();

		cout<<"============================================"<<endl;
		cout << "ss4 length = " << ss4.length() << endl;
		cout << "ss4 = ";
		ss4.print();

		cout<<"============================================"<<endl;
		cout << "ss5 length = " << ss5.length() << endl;
		cout << "ss5 = ";
		ss5.print();

		ss2.append('W');

		cout<<"============================================"<<endl;
		cout<<"new ss length = " << ss.length() << endl;
		cout << "ss = ";
		ss.print();

		cout<<"============================================"<<endl;
		cout<<"new ss2 length = " << ss2.length() << endl;
		cout << "ss2 = ";
		ss2.print();

		cout<<"============================================"<<endl;
		cout << "new ss3 length = " << ss3.length() << endl;
		cout << "ss3 = ";
		ss3.print();

		cout<<"============================================"<<endl;
		cout << "new ss4 length = " << ss4.length() << endl;
		cout << "ss4 = ";
		ss4.print();

		cout<<"============================================"<<endl;
		cout << "new ss5 length = " << ss5.length() << endl;
		cout << "ss5 = ";
		ss5.print();
		cout<<"============================================"<<endl;

	}

	system("pause");

	return 0;
}