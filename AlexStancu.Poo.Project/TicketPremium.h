#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "Ticket.h"
#include "AbstractEx.h"
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
#include"AbstractEx.h"
using namespace std;
//using Ticket::opera




class TicketPremium: public Ticket
{
	string message;  //message from Event Creator
public:
	TicketPremium():Ticket()
	{
		this->message = "Thank you for buying this ticket!";
	};

	TicketPremium(string eventType, const char* eventName, string eventCategory,
		int nrRow, int seat ,string message) :Ticket(eventType, eventName, eventCategory, nrRow, seat)
	{
		this->message = message;
	};
	TicketPremium(const TicketPremium& e):Ticket(e)
	{
		this->message = e.message;
	}
	TicketPremium& operator=(const TicketPremium& e)
	{
		Ticket:: operator=(e);
		this->message = e.message;
		return *this;
	}
	~TicketPremium()
	{

	}

	friend istream& operator>>(istream& in, TicketPremium& e)
	{
		in >> (Ticket&)e;
		return in;
	}

	  string showMessage()override
	{
		return "Premium ticket or regular, you ll never know (VIRTUAL METH)" ;
	}

	  virtual string showMessage2()override
	  {
		  return "Another  message (VIRTUAL METH) ";
	  }

	  float value()
	  {
		  return 2;
	  }
};


