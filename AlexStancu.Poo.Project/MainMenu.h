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
	int menuOption = 0;

public:
	MainMenu()
	{
		this->menuOption = 0;
	};

	MainMenu(int menuOption)
	{

		this->menuOption = menuOption;
	};

	MainMenu(const MainMenu &mainmenu)
	{
		this->menuOption =mainmenu.menuOption;
	};

	MainMenu &operator=(const MainMenu& mainmenu)
	{
	    this->menuOption = mainmenu.menuOption;
	    return *this;
	}

	~MainMenu()
	{

	};

	void printMainMenu()
	{
		cout << "---------------Main Menu--------------------\n";
		cout << "-       Please choose an option:           -\n";
		cout << "-        1. Create a ticket                -\n";
		cout << "-        2.Read/Check a ticket             -\n";
		cout << "-        3.See event list                  -\n";
		cout << "-        4.EXIT                            -\n";
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
	out << ticket.getSeat() << endl;
	
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




	try {
		ticket.setEventType(eventType);
	}
	catch (exception ex)
	{

		cout << "Event type is NOT correct. Choose between (movie / music / football) -(Try again)";
		in >> eventType;
	}


	//while (eventType != "movie" || eventType != "music" || eventType != "football")
	//{
	//	try {
	//		in >> eventType;
	//		ticket.setEventType(eventType);
	//		
	//	}
	//	catch (exception ex)
	//	{

	//		cout << "Event type is NOT correct. Choose between (movie / music / football) -(Try again)";
	//		//in >> eventType;
	//	}

	//};


	

	cout << "-                                          -\n";
	cout << ticket.getEventType() << endl;
	cout << "-                                          -\n";

	cout << " Event name:" << endl;
	string eventName;
	in >> eventName;
	const char* charEventName = new char[(eventName.length()) + 1];
	charEventName= eventName.c_str();

	//add ticket.getName() to EventNames.txt
	//crate ticket.getName().txt;


	try {
		ticket.setEventName(charEventName);
	}
	catch (exception ex)
	{
		cout << "Event name is NOT correct. -(THROW) ";
	}


	cout << "-                                          -\n";
	cout << ticket.getEventName() << endl;
	cout << "-                                          -\n";

	   //  DACANU AM UN TIP, SI E UNJNOWN NU APARE NASTA!!!!
	if (eventType == "movie")
	{
		cout << " Movie event category:   (Normal / VIP )  -WITHOUT SPACES" << endl;
		string eventCategory = "";
		in >> eventCategory;

		try {
			ticket.setEventCategory(eventCategory);
		}
		catch (exception ex)
		{
			cout << "Event CATEGORY is NOT correct. -(THROW) ";
		}

	}
	else if (eventType == "music")
	{
		cout << " Music event category:   (Category1 / Category2 ) -WITHOUT SPACES" << endl;
		string eventCategory = "";
		in >> eventCategory;

		try {
			ticket.setEventCategory(eventCategory);
		}
		catch (exception ex)
		{
			cout << "Event CATEGORY is NOT correct. -(THROW) ";
		}

	}
	else if (eventType == "football")
	{
		cout << " Football event category:   (Stand1 / Stand2 ) -WITHOUT SPACES" << endl;
		string eventCategory = "";
		in >> eventCategory;

		try {
			ticket.setEventCategory(eventCategory);
		}
		catch (exception ex)
		{
			cout << "Event CATEGORY is NOT correct. -(THROW) ";
		}

	}
	else
	{
		cout << "Event CATEGORY is NOT correct. We don t have an event type! ";
	}


	cout << "-                                          -\n";
	cout << ticket.getEventCategory() << endl;
	cout << "-                                          -\n";

	cout << " Event row:" << endl;
	int nrRow = 0;
	in >> nrRow;
	ticket.setRow(nrRow);
	cout << "-                                          -\n";

	cout << " Event seat:" << endl;
	int seatNr = 0;
	in >> seatNr;   //-ACTUAL NR THAT COUNTS
	cout << "-                                          -\n";
	cout << "Seats:      ";
	ticket.setSeat(seatNr);
	cout << "-                                          -\n";




	//cout << " Event seat:" << endl;
	//in >> seatNr;   //-ACTUAL NR THAT COUNTS
	//cout << "-                                          -\n";
	////delete[]ticket.getSeat();
	//int* seat = new int[seatNr];

	///*	try {*/


	///*if (nrRow < 6 && nrRow	>0  && seatNr < 11 && seatNr>0)
	//{*/
	//cout << "-                                          -\n";
	//cout << "Seats:      ";
	//	for (int i = 1; i <= seatNr; i++)
	//	{
	//			ticket.setSeat(i, seat);
	//	
	//	}
	//	cout << endl;
	//	cout << "-                                          -\n";
	/*	}*/
		//catch (exception ex)
		//{
		//	cout << "Event ROW or SEAT NOT corect. -(THROW) ";
		//}


	//if (nrRow < 6 && seatNr<11)
	//{
		cout << "Row    Seat taken: " << endl;
		cout << "-    1 2 3 4 5 6 7 8 9 10" << endl;
		cout << nrRow << "\    ";

		for (int i = 0; i < seatNr-1; i++)
		{


			cout <<"0 ";

		}
		cout << "1";
		cout << endl;
		cout << "-                                          -\n";
	//}
		

		//Ticket ticketFinal(string eventType, const char* eventName, string eventCategory, int nrRow, int* seat);


	return in;
}







