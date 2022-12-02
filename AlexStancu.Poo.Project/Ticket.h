#define _CRT_SECURE_NO_WARNINGS
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

	string eventType="";
	char* eventName = nullptr;
	string eventCategory = "";
	int nrRow = 0;
	int* seat=nullptr;

	//static int MAX_NR_SEATS;
	static int ID;

	//method static??



	//AT LEAST 2 METHODS


public:


	Ticket() :id(0)
	{
		this->eventType = "Unknown"; //ok
		this->eventName = new char[strlen("Unknown") + 1]; //ok
		strcpy(this->eventName, "Unknown"); //ok
		this->eventCategory = "Unknown"; //ok
		this->nrRow = 0;  //ok
		this->seat = NULL; //ok?

	}


	Ticket(string eventType, const char* eventName, string eventCategory, int nrRow, int* seat) :id(ID++)
	{
		this->eventType = eventType;
		this->eventName = new char[strlen(eventName) + 1];
		strcpy(this->eventName, eventName);
		this->eventCategory = eventCategory;
		this->nrRow = nrRow;
		this->seat = new int[this->nrRow];
		for (int i = 0; i < this->nrRow; i++)
		{
			this->seat[i] = seat[i];
		}

		cout << "row: " << nrRow;
		cout << "seat: " << *seat;
	}

	/*Ticket(const char* eventName, string eventCategory, int nrRow, int* seat) :id(ID++)
	{
		this->eventName = new char[strlen(this->eventName) + 1];
		strcpy(this->eventName, eventName);
		this->eventCategory = eventCategory;
		this->nrRow = nrRow;
		this->seat = new int[this->nrRow];
		for (int i = 0; i < this->nrRow; i++)
		{
			this->seat[i] = seat[i];
		}

		cout << "Type: " << eventType;
		cout << "Category: " << eventCategory;
		cout << "row: " << nrRow;
		cout << "seat: " << *seat;
	}*/

	string getEventType()
	{
		return this->eventType;
	}


	char* getEventName()
	{
		return this->eventName;
	}

	string getEventCategory()
	{
		return this->eventCategory;
	}

	int getRow()
	{
		return this->nrRow;

	}

	int* getSeat()
	{
		return this->seat;
	}

	const int getId()
	{
		return this->id;
	}

	//SETTERI:

	void setEventType(string eventType)
	{
		if (eventType.length() > 2 && eventType.length() < 25)   // msa zicem ca este movie sau fotbal
		{
			this->eventType = eventType;
		}
		else
		{
			cout << "Name is too short or too long";
		}
	}

	void setEvnetName(const char* eventName)
	{
		if (strlen(eventName) > 2 && strlen(eventName) < 25)
		{
			if (this->eventName != NULL)
			{
				delete[]this->eventName;
			}
			this->eventName = new char[strlen(eventName) + 1];
			strcpy(this->eventName, eventName);
		}
		else
		{
			cout << "Name is too short or too long";
		}
	}

	void setEventCategory(string eventCategory)
	{
		if (eventCategory.length() > 2 && eventCategory.length() < 25)
		{
			this->eventCategory = eventCategory;
		}
		else
		{
			cout << "Name is too short or too long";
		}

		
	}

	void setSeat(int nrRow, int* seat)
	{
		if (nrRow > 0 && nrRow < 5 && seat!=nullptr)
		{
			if (*seat > 0 && *seat < 11)
			{
				if (this->seat != NULL)
				{
					delete[]this->seat;
				}
				this->nrRow = nrRow;
				this->seat = new int[this->nrRow];
				for (int i = 0; i < this->nrRow; i++)
				{
					this->seat[i] = seat[i];
				}

			}
		
		}
		else
		{
			cout << "Row must be between 1 and 5 and seat between 1 and 10!";
		}
	}

	//Ticket(string eventType, string eventName, int row, int seat) :id(++ID)
	//{


	//}

	~Ticket()
	{
		if (this-> eventName != nullptr)
		{
			delete[]this->eventName;
		}

		if (this->seat!= nullptr)
		{
			delete[]this->seat;
		}
	}


	//constructor de copiere:  Ticket t1= t2;

	Ticket(const Ticket& newTicket) :id(newTicket.ID)
	{
		this->eventName = new char[strlen(newTicket.eventName) + 1];
		strcpy(this->eventName, newTicket.eventName);
		this->eventCategory = newTicket.eventCategory;
		this->nrRow = newTicket.nrRow;
		this->seat = new int[this->nrRow];
		for (int i = 0; i < this->nrRow; i++)
		{
			this->seat[i] = newTicket.seat[i];
		}
	}

	//operatorul =   se apeleaza cand avem 2 obiecte existente si vrem sa atribum valorile unuia altuia
	//operator =  -> destructor + constructor de copiere + return *this + EVITAREA AUTOASIGNARII!!


	// se apeleaza pe baza a doua obiecte existente deja

	Ticket& operator=(const Ticket& newTicket)
	{
		if (this != &newTicket)
		{
			if (this->eventName != nullptr)
			{
				delete[]this->eventName;
			}

			if (this->seat != nullptr)
			{
				delete[]this->seat;
			}

			this->eventName = new char[strlen(newTicket.eventName) + 1];
			strcpy(this->eventName, newTicket.eventName);
			this->eventCategory = newTicket.eventCategory;
			this->nrRow = newTicket.nrRow;
			this->seat = new int[this->nrRow];
			for (int i = 0; i < this->nrRow; i++)
			{
				this->seat[i] = newTicket.seat[i];
			}

			return *this;
		}


	}



	void addTicketIdToList(int id)
	{

		//create a txt with id s, add in it the id

		fstream file; //object of fstream class
		ofstream of;
		fstream f;

		// opening file using ofstream
		of.open("ExistingTicketsList.txt", ios::app);
		if (!of)
			cout << "No such file found";
		else {
			cout << "-                                          -\n";
			cout << "Ticket id to be added: "<<id<<endl;
			of << id<<endl;
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






	//don t need yet? 

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

 //int Ticket:: MAX_NR_SEATS=50;
 int Ticket:: ID=0;



