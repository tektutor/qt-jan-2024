#include <iostream>
#include "smartptr.h"
using namespace std;

int main ( ) {
	//Raw pointer
	//MyClass *ptrMyClass = new MyClass;
	//
	//Our simple smart pointer
	SmartPointer smartPtr1( new MyClass );
	SmartPointer smartPtr2( new MyClass );

	cout << "Size of MyClass is " << sizeof(MyClass) << " byte."<< endl;

	return 0;
}
