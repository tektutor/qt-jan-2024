#include "smartptr.h"

SmartPointer::SmartPointer(MyClass *pMyClass) {
	cout << "SmartPointer constructor ..."
	     << endl;

	ptrMyClass = pMyClass;
}

SmartPointer::~SmartPointer() {
	cout << "SmartPointer destructor ..."
	     << endl;

	if ( NULL != ptrMyClass )
		delete ptrMyClass;
}
