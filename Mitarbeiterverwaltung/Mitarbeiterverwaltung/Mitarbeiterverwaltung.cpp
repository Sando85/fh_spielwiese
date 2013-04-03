// Mitarbeiterverwaltung.cpp : main project file.

#include "stdafx.h"
#include "Worker.h"

using namespace System;

int main(array<System::String ^> ^args)
{

	Worker ^billy = gcnew Worker("Bill", "Blubber", 2000);
	Worker ^max = gcnew Worker("Max", "Power",2500);
	Worker ^rainer = gcnew Worker("Rainer", "Zufall", 1000);

	billy->showData();
	max->showData();
	rainer->showData();

	billy->incWage(250);

	billy->showData();
	max->showData();
	rainer->showData();

    Console::ReadLine();

	array<Worker^> ^workerList = gcnew array<Worker^>(5);

	delete rainer;

    return 0;
}
