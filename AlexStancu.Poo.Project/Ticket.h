#pragma once
#include <exception>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
using namespace std;

class Ticket
{
private:

	const int id;

	char eventType[10];
	char* eventName = nullptr;
	string eventCategory= "";
	int row;
	int seat;

	static int MAX_NR_SEATS;
	//const static int ID;
	static int ID;

	//method static??



	//AT LEAST 2 METHODS


public:


	Ticket():id(0)
	{

	}



	/*Ticket():id(++ID)
	{


	}*/

	~Ticket()
	{

	}


	int createRandomId()
	{
		int i = 0;
		while (i++ < 10) {
			int r = (rand() % 100) + 1;
			cout << r << " ";
		}
		return 0;
	}



};
int Ticket::MAX_NR_SEATS = 50;
//const int Ticket::ID = 50;
int Ticket::ID = 1;
