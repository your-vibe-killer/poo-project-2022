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

	void getOptionFomKeyboard()
	{
		Ticket ticketList[50]; //list of all tickets
		int i = 0;

		
		string mainMenuOption = "";




		//string eventType;
		//char* eventName = new char[strlen("aaaaaaaaaaaaaaaaaaaaaaaaa") + 1];
		//string eventCategory = "";
		//int row = 0;
		//int* seat = 0;


		//int isSeatTaken[5][10];   //0/1 if seat is taken - like a map
		////bool isSeatTaken=false;

		int uniqueId;  //only need it for reading?








		//cout << "             (Write 1 or 2 or 3): ";
		//cout << "                                            \n";
		//cout << "                                            \n";
		//
		//cin >> mainMenuOption;
		//switch (stoi(mainMenuOption)) {
		//case 1:
		//{



		//	cout << "---------- Create a new Ticket:------------\n";
		//	cout << "-Event type: (movie, music, football)      -\n";
		//	cout << "-                                          -\n";
		//	cin >> eventType;
		//	//int initialStringLength = initialEventType.length();


		//	//char eventType[50 + 1];
		//	//strcpy_s(eventType, initialEventType.c_str());


		//	if (eventType == "movie")
		//	{
		//		cout << "-                                          -\n";
		//		cout << "-Insert movie name:                        -\n";
		//		cin >> eventName;
		//		cout << "-                                          -\n";
		//		cout << "-Movie category: (Normal, VIP)             -\n";
		//		cin >> eventCategory;
		//		cout << "-                                          -\n";
		//		cout << "-Stand row: (1 ... 5)                      -\n";
		//		cin >> row;
		//		cout << "-                                          -\n";
		//		cout << "-Row seat number: (1 ...  10)              -\n";
		//		//cin >> seat;
		//		cout << "-                                          -\n";
		//		cout << "-UNIQUE ID:  SDAF76T34VGC                  -\n";
		//		cout << "-                                          -\n";
		//		cout << "____________________________________________\n";
		//		//Ticket movieTicket(string eventType, char* eventName, string eventCategory, int row, int* seat);
		//		//Ticket movieTicket(char eventType, string eventCategory, int nrRow, int* seat);
		//		//ticketList[i]= movieTicket;
		//		//movieTicket.addTicketIdToList();

		//	}
		//	else if (eventType == "music")
		//	{
		//		cout << "-                                          -\n";
		//		cout << "-Insert theatrical piece name:             -\n";
		//		cin >> eventName;
		//		cout << "-                                          -\n";
		//		cout << "-Theatre cat.:(Category 1, Category 2)     -\n";
		//		cin >> eventCategory;
		//		cout << "-                                          -\n";
		//		cout << "-Stand row: (1 ... 9)                      -\n";
		//		cin >> row;
		//		cout << "-                                          -\n";
		//		cout << "-Row seat number: (1 ...  50)              -\n";
		//		//cin >> seat;
		//		cout << "-                                          -\n";
		//		cout << "-UNIQUE ID:  SDAF76T34VGC                  -\n";
		//		cout << "-                                          -\n";
		//		cout << "____________________________________________\n";
		//		//Ticket musicTicket(string eventType, char* eventName, string eventCategory, int row, int* seat);

		//	}
		//	else if (eventType == "football")
		//	{
		//		cout << "-                                          -\n";
		//		cout << "-Insert match name:                        -\n";
		//		cin >> eventName;
		//		cout << "-                                          -\n";
		//		cout << "-Event stand: (Stand 1, Stand 2)           -\n";
		//		cin >> eventCategory;
		//		cout << "-                                          -\n";
		//		cout << "-Stand row: (1 ... 9)                      -\n";
		//		cin >> row;
		//		cout << "-                                          -\n";
		//		cout << "-Row seat number: (1 ...  50)              -\n";
		//		//cin >> seat;
		//		cout << "-                                          -\n";
		//		cout << "-UNIQUE ID:  SDAF76T34VGC                  -\n";
		//		cout << "-                                          -\n";
		//		cout << "____________________________________________\n";
		//		//Ticket footballTicket(string eventType, char* eventName, string eventCategory, int row, int* seat);

		//	}
		//	else
		//	{
		//		cout << "-                                          -\n";
		//		cout << "-        Not a valid event type!           -\n";
		//		cout << "-                                          -\n";
		//		cout << "____________________________________________\n";
		//	}

		//}
		//	break;

		//case 2:
		//{
		//	cout << "--------Read an existing ticket-------------\n";
		//	cout << "-                                          -\n";
		//	cout << "           Insert UNIQUE ID:   ";

		//	cin >> uniqueId;
		//	//ReadTicket readTicket;
		//	//readTicket.checkTicketValidity(uniqueId);

		//	if (uniqueId == 0)
		//	{
		//		cout << "-                                          -\n";
		//		cout << "-       Ticket  OK                         -\n";
		//		cout << "ID: " << uniqueId<<endl;
		//		cout << "-                                          -\n";
		//		//readTicket.printTicketDetails();  DON T NEED IT YET
		//		cout << "-                                          -\n";
		//		cout << "____________________________________________\n";
		//	}
		//	else
		//	{
		//		cout << "-                                          -\n";
		//		cout << "-            Ticket NOT OK                 -\n";
		//		cout << "-                                          -\n";
		//		cout << "--------------------------------------------\n";
		//	}

		//}
		//	break;

		//case 3:
		//	cout << "---------------Exited-----------------------\n";
		//	cout << "-                                          -\n";
		//	cout << "-                                          -\n";
		//	cout << "--------------------------------------------\n";
		//	break;

		//}



		//return ticket;

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
	cout << " Ev type:"<<endl;
	out << ticket.getEventType()<<endl;
	cout << " Ev name:" << endl;
	out << ticket.getEventName()<<endl;
	cout << " Ev category:" << endl;
	out << ticket.getEventCategory()<<endl;
	cout << " Ev row:" << endl;
	out << ticket.getRow()<<endl;
	cout << " Ev seat:" << endl;
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
	if (ticket.getEventName() != nullptr)
	{
		delete[]ticket.getEventName();  //???
	}

	if (ticket.getSeat() != nullptr)
	{
		delete[]ticket.getEventName();  //??
	}


	cout << "-------------Operator>>---------------- ----\n";
	cout << "-                                          -\n";
	cout << " Ev type:" << endl;	
	string eventType="";
	in >> eventType;
	ticket.setEventType(eventType);
	cout << ticket.getEventType() << endl;

	cout << " Ev name:" << endl;
	char* eventName= new char[strlen("justgonsadfnhsd")+1];
	in >> eventName;
	strcpy(ticket.getEventName(), eventName);
	cout << ticket.getEventName() << endl;
	//ticket.setEvnetName(eventName);

	cout << " Ev category:" << endl;
	string eventCategory = "";
	in >> eventCategory;
	ticket.setEventCategory(eventCategory);
	cout << ticket.getEventCategory() << endl;

	 ////////////////////////////////////////////We ll try to fix the thing under this:///////////////
	/*cout << " Ev row:" << endl;
	int nrRow = 0;
	in >> nrRow;	*/

	//cout << " Ev seat:" << endl;
	//int* seat = new int[nrRow];
	//for (int i = 0; i < nrRow; i++)
	//{

	//	in >> seat[i];
	//	ticket.setSeat(nrRow, seat);
	//}


	return in;
}






