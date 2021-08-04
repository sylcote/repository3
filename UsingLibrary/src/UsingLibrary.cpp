//============================================================================
// Name        : UsingLibrary.cpp
// Author      : Sylvain Côté
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "TestLibrary.h"

using namespace std;
using namespace TestLib;

int main() {
	TestLibrary myLib;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	myLib.setx(5);

	cout << "TestLibray ouput: " << myLib.toString() << " Number: " << myLib.getx() << endl;
	cout << "End of programm" << endl;

	return 0;
}
