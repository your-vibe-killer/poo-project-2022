#pragma once
#include <exception>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
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
		string menuOption;
		string mainMenuOption = "1";
		string uniqueId;
		string eventType;
		string eventName;

		cout << "             (Write 1 or 2  or 3): ";
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
				cout << "-                                          -\n";
				cout << "-Movie category: (Normal, VIP)             -\n";
				cout << "-                                          -\n";
				cout << "-Stand row: (1 ... 5)                      -\n";
				cout << "-                                          -\n";
				cout << "-Row seat number: (1 ...  10)              -\n";
				cout << "-                                          -\n";
				cout << "-UNIQUE ID:  SDAF76T34VGC                  -\n";
				cout << "-                                          -\n";
				cout << "____________________________________________\n";
			}
			else if (eventType == "music")
			{
				cout << "-                                          -\n";
				cout << "-Insert theatrical piece name:             -\n";
				cout << "-                                          -\n";
				cout << "-Theatre cat.:(Category 1, Category 2)-\n";
				cout << "-                                          -\n";
				cout << "-Stand row: (1 ... 9)                      -\n";
				cout << "-                                          -\n";
				cout << "-Row seat number: (1 ...  50)              -\n";
				cout << "-                                          -\n";
				cout << "-UNIQUE ID:  SDAF76T34VGC                  -\n";
				cout << "-                                          -\n";
				cout << "____________________________________________\n";

			}
			else if (eventType == "football")
			{
				cout << "-                                          -\n";
				cout << "-Insert match name:                        -\n";
				cout << "-                                          -\n";
				cout << "-Event stand: (Stand 1, Stand 2)           -\n";
				cout << "-                                          -\n";
				cout << "-Stand row: (1 ... 9)                      -\n";
				cout << "-                                          -\n";
				cout << "-Row seat number: (1 ...  50)              -\n";
				cout << "-                                          -\n";
				cout << "-UNIQUE ID:  SDAF76T34VGC                  -\n";
				cout << "-                                          -\n";
				cout << "____________________________________________\n";
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
				cout << "____________________________________________\n";
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
	}

};






