#pragma once
#include <exception>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "ReadTicket.h"
#include "CreateTicket.h"
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

		
		string mainMenuOption = "";

		char eventType[10] = "";
		char* eventName = nullptr;
		string eventCategory = "";
		int row = 0;
		int seatNr = 0;
		int isSeatTaken[5][10];   //0/1 if seat is taken - like a map
		//bool isSeatTaken=false;
		string uniqueId;  //only need it for reading?

		cout << "             (Write 1 or 2 or 3): ";
		cout << "                                            \n";
		cout << "                                            \n";
		
		cin >> mainMenuOption;
		switch (stoi(mainMenuOption)) {
		case 1:
			cout << "---------- Create a new Ticket:------------\n";
			cout << "-Event type: (movie, music, football)      -\n";
			cout << "-                                          -\n";
			cin >> eventType;
			if (eventType == "movie")
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
				CreateTicket movieTicket(char eventType, const char* eventName, string eventCategory, int row, int seat);
		
			}
			else if (eventType == "music")
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
				CreateTicket musicTicket(char eventType, const char* eventName, string eventCategory, int row, int seat);

			}
			else if (eventType == "football")
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
				CreateTicket footballTicket(char eventType, const char* eventName, string eventCategory, int row, int seat);
			}
			else
			{
				cout << "-                                          -\n";
				cout << "-        Not a valid event type!           -\n"        ;
				cout << "-                                          -\n";
				cout << "____________________________________________\n";
			}
			break;

		case 2:
			cout << "--------Read an existing ticket-------------\n";
			cout << "-                                          -\n";
			cout << "           Insert UNIQUE ID:   ";

			cin >> uniqueId;

			if (uniqueId == "aaa")
			{
				cout << "-                                          -\n";
				cout << "-            Ticket  OK                    -\n";
				cout << "-                                          -\n";
				ReadTicket readTicket;
				//readTicket.checkTicketValidity(CreateTicket ticket);     //cum facem check ul?
				//cout << "____________________________________________\n";
			}
			else
			{
				cout << "-                                          -\n";
				cout << "-            Ticket NOT OK                 -\n";
				cout << "-                                          -\n";
				cout << "--------------------------------------------\n";
			}
			break;

		case 3:
			cout << "---------------Exited-----------------------\n";
			cout << "-                                          -\n";
			cout << "-                                          -\n";
			cout << "--------------------------------------------\n";
			break;

		}

		//CreateTicket createTicket(string eventType, string eventName,int row, int seat, string uniqueId );
		//ReadTicket readTicket();
		//Ticket ticket();

		CreateTicket ticketList[50]; //list of all tickets
		int i = 0;
		//ticketList[i] = ticket;

		//return ticket;

		 //https://www.geeksforgeeks.org/array-of-objects-in-c-with-examples/
		 //make an array of objects c++ example
	}

};






