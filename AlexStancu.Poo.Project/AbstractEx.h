#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <exception>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <fstream>
#include <istream>
#include <sstream>

using namespace std;

class AbstractEx
{
	int val;
public:
	AbstractEx()
	{
		val = 0;
	}

	AbstractEx(int val)
	{
		this->val = val;
	}
	virtual float value() = 0;
};