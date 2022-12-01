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

		//char eventType[10] = "";
		string initialEventType;
		char* eventName = new char[strlen("tHISISTHELONGESTNAMEIGUESS") + 1];
		string initialEventName;
		string eventCategory = "";
		int row = 0;
		int seatNr = 0;
		int isSeatTaken[5][10];   //0/1 if seat is taken - like a map
		//bool isSeatTaken=false;
		int uniqueId;  //only need it for reading?
		//int* 

		cout << "             (Write 1 or 2 or 3): ";
		cout << "                                            \n";
		cout << "                                            \n";
		
		cin >> mainMenuOption;
		switch (stoi(mainMenuOption)) {
		case 1:
		{
			cout << "---------- Create a new Ticket:------------\n";
			cout << "-Event type: (movie, music, football)      -\n";
			cout << "-                                          -\n";
			cin >> initialEventType;
			//int initialStringLength = initialEventType.length();
			char eventType[50 + 1];
			strcpy_s(eventType, initialEventType.c_str());


			if (initialEventType == "movie")
			{
				cout << "-                                          -\n";
				cout << "-Insert movie name:                        -\n";
				cin >> eventName;
				cout << "-                                          -\n";
				cout << "-Movie category: (Normal, VIP)             -\n";
				cin >> eventCategory;
				cout << "-                                          -\n";
				cout << "-Stand row: (1 ... 5)                      -\n";
				cin >> row;
				cout << "-                                          -\n";
				cout << "-Row seat number: (1 ...  10)              -\n";
				cin >> seatNr;
				cout << "-                                          -\n";
				cout << "-UNIQUE ID:  SDAF76T34VGC                  -\n";
				cout << "-                                          -\n";
				cout << "____________________________________________\n";
				//Ticket movieTicket(char eventType, char* eventName, string eventCategory, int row, int seat);
				Ticket movieTicket(char eventType, string eventCategory, int row, int seat);
				//ticketList[i]= movieTicket;
				//movieTicket.addTicketIdToList();

			}
			else if (initialEventType == "music")
			{
				cout << "-                                          -\n";
				cout << "-Insert theatrical piece name:             -\n";
				cin >> eventName;
				cout << "-                                          -\n";
				cout << "-Theatre cat.:(Category 1, Category 2)     -\n";
				cin >> eventCategory;
				cout << "-                                          -\n";
				cout << "-Stand row: (1 ... 9)                      -\n";
				cin >> row;
				cout << "-                                          -\n";
				cout << "-Row seat number: (1 ...  50)              -\n";
				cin >> seatNr;
				cout << "-                                          -\n";
				cout << "-UNIQUE ID:  SDAF76T34VGC                  -\n";
				cout << "-                                          -\n";
				cout << "____________________________________________\n";
				Ticket musicTicket(char eventType, char* eventName, string eventCategory, int row, int seat);

			}
			else if (initialEventType == "football")
			{
				cout << "-                                          -\n";
				cout << "-Insert match name:                        -\n";
				cin >> eventName;
				cout << "-                                          -\n";
				cout << "-Event stand: (Stand 1, Stand 2)           -\n";
				cin >> eventCategory;
				cout << "-                                          -\n";
				cout << "-Stand row: (1 ... 9)                      -\n";
				cin >> row;
				cout << "-                                          -\n";
				cout << "-Row seat number: (1 ...  50)              -\n";
				cin >> seatNr;
				cout << "-                                          -\n";
				cout << "-UNIQUE ID:  SDAF76T34VGC                  -\n";
				cout << "-                                          -\n";
				cout << "____________________________________________\n";
				Ticket footballTicket(char eventType, char* eventName, string eventCategory, int row, int seat);
			}
			else
			{
				cout << "-                                          -\n";
				cout << "-        Not a valid event type!           -\n";
				cout << "-                                          -\n";
				cout << "____________________________________________\n";
			}

		}
			break;

		case 2:
		{
			cout << "--------Read an existing ticket-------------\n";
			cout << "-                                          -\n";
			cout << "           Insert UNIQUE ID:   ";

			cin >> uniqueId;
			//ReadTicket readTicket;
			//readTicket.checkTicketValidity(uniqueId);

			if (uniqueId == 0)
			{
				cout << "-                                          -\n";
				cout << "-       Ticket  OK                         -\n";
				cout << "ID: " << uniqueId;
				cout << "-                                          -\n";
				//readTicket.printTicketDetails();  DON T NEED IT YET
				cout << "-                                          -\n";
				cout << "____________________________________________\n";
			}
			else
			{
				cout << "-                                          -\n";
				cout << "-            Ticket NOT OK                 -\n";
				cout << "-                                          -\n";
				cout << "--------------------------------------------\n";
			}

		}
			break;

		case 3:
			cout << "---------------Exited-----------------------\n";
			cout << "-                                          -\n";
			cout << "-                                          -\n";
			cout << "--------------------------------------------\n";
			break;

		}



		//return ticket;

		 //https://www.geeksforgeeks.org/array-of-objects-in-c-with-examples/
		 //make an array of objects c++ example
	}

};






