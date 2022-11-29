#pragma once
#include <exception>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
using namespace std;

class Ticket
{
public:
	Ticket()
	{

	}

	/*Ticket()
	{

	}*/

	~Ticket()
	{

	}

private:

	int* ID;

	char eventType[10];
	char* eventName = nullptr;
	string eventCategory;
	int row;
	int seat;

	//const 
    //static

	//method static??



	//AT LEAST 2 METHODS




};
