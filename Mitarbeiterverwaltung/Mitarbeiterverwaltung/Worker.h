#pragma once

using namespace System;

ref class Worker
{

	String ^name;
	String ^lastName;
	int wage;

public:
	Worker(String ^name, String ^lastName, int wage);
	void incWage(int inc);
	void showData(void);
};

