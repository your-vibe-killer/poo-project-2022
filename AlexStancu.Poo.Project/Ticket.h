#pragma once
#include <exception>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <fstream>
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


	//Ticket( char eventType[], const char eventName, string eventCategory, int row, int seat) :id(ID++)
	//{
	//	//char* eventType = new char[strlen(eventType) + 1];

	//	strcpy_s(this->eventType, eventType);
	//	this->eventCategory = eventCategory;
	//	this->row = row;
	//	this->seat = seat;

	//	cout << "row: " << row ;
	//	cout << "seat: " <<seat;
	//}

	Ticket( char* eventType, string eventCategory, int row, int seat) :id(ID++)
	{

		strcpy_s(this->eventType, eventType);
		this->eventCategory = eventCategory;
		this->row = row;
		this->seat = seat;

		cout << "Type: " << eventType;
		cout << "Category: " << eventCategory;
		cout << "row: " << row;
		cout << "seat: " << seat;
	}



	//Ticket(string eventType, string eventName, int row, int seat) :id(++ID)
	//{


	//}

	~Ticket()
	{

	}

	void addTicketIdToList()
	{

		//create a txt with id s, add in it the id

		fstream file; //object of fstream class
		char text[200];

		ofstream of;
		fstream f;

		// opening file using ofstream
		of.open("ExistingTicketsList.txt", ios::app);
		if (!of)
			cout << "No such file found";
		else {
			cout << "-                                          -\n";
			cout << "ID TO BE ADDED: ";
			cin >> text;
			of << text<<endl;
			cout << "-                                          -\n";
			cout << "-Data appended successfully                -\n";
			cout << "-                                          -\n";
			cout << "____________________________________________\n";
			of.close();
			string word;

			// opening file using fstream
			f.open("ExistingTicketsList.txt");
			cout << endl;
			cout << endl;
			cout << "-List of ID's:                             -\n";
			cout << "-                                          -\n";
			while (f >> word) {
				cout << word << " ";
			}
			cout << endl;
			cout << "-                                          -\n";
			cout << "____________________________________________\n";
			f.close();
		}

	}








	void printTicketDetails(Ticket ticket)
	{
		string objectEventType = "movie";
		string ticketDetail = " TICKET DETAIL ";
		cout << "-                                          -\n";
		cout << "-Ticket Details:                           -\n";
		cout << "-                                          -\n";
		if (objectEventType == "movie")
		{
			cout << "-                                          -\n";
			cout << "-Movie name:                               -\n";
			cout << "-                                          -\n";
			cout << ticketDetail;
			cout << "-                                          -\n";
			cout << "-Movie category:                           -\n";
			cout << "-                                          -\n";
			cout << ticketDetail;
			cout << "-                                          -\n";
			cout << "-Stand row:                                -\n";
			cout << "-                                          -\n";
			cout << ticketDetail;
			cout << "-                                          -\n";
			cout << "-Row seat number:                          -\n";
			cout << "-                                          -\n";
			cout << ticketDetail;
			cout << "-                                          -\n";
			cout << "-UNIQUE ID:                                -\n";
			cout << "-                                          -\n";
			cout << ticketDetail;
			cout << "-                                          -\n";
			cout << "____________________________________________\n";
		}
		else if (objectEventType == "music")
		{
			cout << "-                                          -\n";
			cout << "-Theatrical piece name:                    -\n";
			cout << "-                                          -\n";
			cout << ticketDetail;
			cout << "-                                          -\n";
			cout << "-Theatre category:                         -\n";
			cout << "-                                          -\n";
			cout << ticketDetail;
			cout << "-                                          -\n";
			cout << "-Stand row:                                -\n";
			cout << "-                                          -\n";
			cout << ticketDetail;
			cout << "-                                          -\n";
			cout << "-Row seat number:                          -\n";
			cout << "-                                          -\n";
			cout << ticketDetail;
			cout << "-                                          -\n";
			cout << "-UNIQUE ID:                                -\n";
			cout << "-                                          -\n";
			cout << ticketDetail;
			cout << "-                                          -\n";
			cout << "____________________________________________\n";

		}
		else if (objectEventType == "football")
		{
			cout << "-                                          -\n";
			cout << "-Match name:                               -\n";
			cout << "-                                          -\n";
			cout << ticketDetail;
			cout << "-                                          -\n";
			cout << "-Event stand:                              -\n";
			cout << "-                                          -\n";
			cout << ticketDetail;
			cout << "-                                          -\n";
			cout << "-Stand row:                                -\n";
			cout << "-                                          -\n";
			cout << ticketDetail;
			cout << "-                                          -\n";
			cout << "-Row seat number:                          -\n";
			cout << "-                                          -\n";
			cout << ticketDetail;
			cout << "-                                          -\n";
			cout << "-UNIQUE ID:                                -\n";
			cout << "-                                          -\n";
			cout << ticketDetail;
			cout << "-                                          -\n";
			cout << "____________________________________________\n";
		}
		else
		{
			cout << "-                                          -\n";
			cout << "-        Not a valid event type!           -\n";
			cout << "-                                          -\n";
			cout << "____________________________________________\n";
		}




	}




};

