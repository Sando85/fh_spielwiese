#include "StdAfx.h"
#include "Worker.h"


Worker::Worker(String ^name, String ^lastName, int wage)
{
	this->name = name;
	this->lastName = lastName;
	this->wage = wage;
}

void Worker::incWage(int inc){
	wage += inc;
}

void Worker::showData(void){
	Console::WriteLine("Name: " + name);
	Console::WriteLine("Vorname: " + lastName);
	Console::WriteLine("Gehalt: " + wage);
	Console::ReadLine();
}

