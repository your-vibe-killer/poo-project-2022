#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <exception>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "ReadTicket.h"
#include "Ticket.h"
using namespace std;



class MainMenu {

private:

public:
	MainMenu()
	{

	};

	//MainMenu()
	//{

	//	//params
	//};

	~MainMenu()
	{

	};

	void printMainMenu()
	{
		cout << "---------------Main Menu--------------------\n";
		cout << "-       Please choose an option:           -\n";
		cout << "-        1. Create a ticket                -\n";
		cout << "-        2.Read/Check a ticket             -\n";
		cout << "-        3.EXIT                            -\n";
		cout << "--------------------------------------------\n";


	}




	void getOptionFomKeyboard(int option)
	{
		//Ticket ticketList[50]; //list of all tickets
		//int i = 0;



	  //	int isSeatTaken[5][10];   //0/1 if seat is taken - like a map
		//bool isSeatTaken=false;


	}
	//operatori op<< si op>>:
	
	//friend ofera accesul la atributele private fara sa aiba pointerul this
	//friend il folosim cand avem nevoie de un operator ce are nevoie de 2 termeni (stanga, dreapta iar 
	//cel din stanga nu este de celo clasic! ex: cout<<e1; cin>>e2; e1=44+e2;

	friend ostream& operator<<(ostream& out, Ticket& ticket);
	friend istream& operator>>(istream& is, Ticket& ticket);


	

};

ostream& operator<<(ostream& out, Ticket& ticket)
{

	cout << "-------------Operator<<---------------- ----\n";
	cout << "-                                          -\n";
	cout << " Event type:"<<endl;
	out << ticket.getEventType()<<endl;
	cout << " Event name:" << endl;
	out << ticket.getEventName()<<endl;
	cout << " Event category:" << endl;
	out << ticket.getEventCategory()<<endl;
	cout << " Event row:" << endl;
	out << ticket.getRow()<<endl;
	cout << " Event seat:" << endl;
	for (int i = 0; i < ticket.getRow(); i++)
	{
		out << ticket.getSeat()[i]<<endl;
	}
;
	cout << "-                                          -\n";
	cout << "--------------------------------------------\n";
	out << endl;
	return out;
}

//la op >> treb sa dezalocam prima data

istream& operator>>(istream& in, Ticket& ticket)
{
	int integerEventType = 0;

	cout << "---------- Create a new Ticket:-------------\n";
	cout << "-                                          -\n";
	cout << " Insert Event type:   (movie / music / football)" << endl;	
	string eventType="";
	in >> eventType;
	if (eventType=="movie")
	{
		integerEventType = 1;
	}
	else if (eventType == "music")
	{
		integerEventType = 2;
	}
	else if (eventType == "football")
	{
		integerEventType = 3;
	}
	 
	try {
	
	}
	catch (invalid_argument & e)
	{
		cout <<"Event type is WRONG";
	}

	ticket.setEventType(eventType);

	cout << "-                                          -\n";
	cout << ticket.getEventType() << endl;
	cout << "-                                          -\n";

	cout << " Event name:" << endl;
	string eventName;
	in >> eventName;
	const char* c = new char[(eventName.length()) + 1];
	c= eventName.c_str();
	ticket.setEventName(c);
	cout << "-                                          -\n";
	cout << ticket.getEventName() << endl;
	cout << "-                                          -\n";

	
	switch (integerEventType) {
	case 1:
	{
		cout << " Movie event category:   (Normal / VIP )  -WITHOUT SPACES" << endl;
		break;
	}
	
	case 2:
	{
		cout << " Music event category:   (Category1 / Category2 ) -WITHOUT SPACES" << endl;
		break;
	}
	
	case 3:
	{
		cout << " Football event category:   (Stand1 / Stand2 ) -WITHOUT SPACES" << endl;
		break;
	}
	
	default:
		break;
	}

	string eventCategory = "";
	in >> eventCategory;
	ticket.setEventCategory(eventCategory);
	cout << "-                                          -\n";
	cout << ticket.getEventCategory() << endl;
	cout << "-                                          -\n";

	 ////////////////////////////////////////////We ll try to fix the thing under this:///////////////
	cout << " Event row:" << endl;
	int nrRow = 0;
	int seatNr = 0;
	in >> nrRow;
	cout << "-                                          -\n";

	cout << " Event seat:" << endl;
	in >> seatNr;
	cout << "-                                          -\n";
	
	int* seat = new int[seatNr];

	

	for (int i = 0; i < seatNr; i++)
	{

		 seat[i]=0;
	
		ticket.setSeat(i, seat);
		seat[seatNr] = seatNr;
		ticket.setSeat(seatNr, seat);

	}


	cout << "Row    Seat taken: " << endl;
	cout << "-    1 2 3 4 5 6 7 8 9 10" << endl;
	cout << nrRow<<"\    ";

	for (int i = 1; i <=seatNr; i++)
	{

		
		cout << seat[i]<< "|";

	}


	//for (int i = 0; i < nrRow; i++)
	//{

	//	ticket.setSeat(0, seat);
	//	ticket.setSeat(nrRow, seat);
	//	cout << "-                                          -\n";
	//}
	cout << endl;
	cout << "-                                          -\n";


	//Ticket movieTicket(string eventType, char* eventName, string eventCategory, int row, int* seat);


	return in;
}







