#include <iostream>
#include "myclass.h"
using namespace std;

class SmartPointer {
private:
	MyClass *ptrMyClass;
public:
	SmartPointer( MyClass *);
	~SmartPointer();
};
