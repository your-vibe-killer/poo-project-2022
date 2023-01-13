#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "Ticket.h"
#include "MainMenu.h"
#include <exception>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <string>
#include <fstream>
#include <istream>
#include <sstream>
using namespace std;
//using Ticket::opera




class TicketWithMessage: public Ticket
{
	string message;  //message from Event Creator
public:
	TicketWithMessage():Ticket()
	{
		this->message = "Thank you for buying this ticket!";
	};

	TicketWithMessage(string eventType, const char* eventName, string eventCategory,
		int nrRow, int seat ,string message) :Ticket(eventType, eventName, eventCategory, nrRow, seat)
	{
		this->message = message;
	};
	TicketWithMessage(const TicketWithMessage& e):Ticket(e)
	{
		this->message = e.message;
	}
	TicketWithMessage& operator=(const TicketWithMessage& e)
	{
		Ticket:: operator=(e);
		this->message = e.message;
		return *this;
	}
	~TicketWithMessage()
	{

	}

	friend istream& operator>>(istream& in, TicketWithMessage& e)
	{
		in >> (Ticket&)e;
		return in;
	}

	
};


