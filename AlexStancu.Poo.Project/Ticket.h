#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <exception>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <fstream>
#include <istream>
#include <sstream>
using namespace std;


class Ticket
{
private:

	const int id;

	string eventType="";
	char* eventName = nullptr;
	string eventCategory = "";
	int nrRow = 0;
	int seat=0;

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
		this->seat = 0; //ok?
		cout << "DEFAULT CTOR \n";

	}


	Ticket(string eventType, const char* eventName, string eventCategory, int nrRow, int seat) :id(ID++)
	{
		this->eventType = eventType;
		this->eventName = new char[strlen(eventName) + 1];
		strcpy(this->eventName, eventName);
		this->eventCategory = eventCategory;
		this->nrRow = nrRow;
		this->seat = seat;
	
	cout << "PARAMETER CTOR \n";


	}

      

	


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

	int getSeat()
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
		if (eventType.length() > 4 && eventType.length() < 9)   // sa zicem ca este movie sau fotbal
		{
			if (eventType =="movie" || eventType == "music" || eventType == "football")
			{
				this->eventType = eventType;
			}
		
		}
		else
		{
			throw exception();
		}
			
		
	}

	void setEventName(const char* eventName)
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
			throw exception();
		}
	}

	void setEventCategory(string eventCategory)
	{

		if (eventCategory.length() > 2 && eventCategory.length() < 25)
		{
			if (eventType == "movie")
			{
				if (eventCategory == "Normal" || eventCategory == "VIP")
				{
					this->eventCategory = eventCategory;

				}
				else
				{
					throw exception();
				}
			}else
				if (eventType == "music")
				{
					if (eventCategory == "Category1" || eventCategory == "Category2" || eventCategory == "Box")
					{
						this->eventCategory = eventCategory;

					}
					else
					{
						throw exception();
					}
				}else
					if (eventType == "football")
					{
						if (eventCategory == "Stand1" || eventCategory == "Stand2")
						{
							this->eventCategory = eventCategory;

						}
						else
						{
							throw exception();
						}
					}

		}

		else
		{
			throw exception();
		}

		
	}

	void setSeat(int seat)
	{
		
				if (seat >0 && seat <11 )
				{
					this->seat = seat;
				}
				else
				{
					throw exception();
				}
							

	}

	void setRow(int nrRow)
	{

		if (nrRow > 0 && nrRow < 6)
		{
			this->nrRow = nrRow;

		}
		else
		{
			throw exception();
		}


	}


	~Ticket()
	{
		if (this-> eventName != nullptr)
		{
			delete[]this->eventName;
		}

	}


	//constructor de copiere:  Ticket t1= t2;

	Ticket(const Ticket& newTicket) :id(newTicket.ID)
	{
		this->eventName = new char[strlen(newTicket.eventName) + 1];
		strcpy(this->eventName, newTicket.eventName);
		this->eventCategory = newTicket.eventCategory;
		this->nrRow = newTicket.nrRow;
		this->seat = newTicket.seat;
	
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

	

			this->eventName = new char[strlen(newTicket.eventName) + 1];
			strcpy(this->eventName, newTicket.eventName);
			this->eventCategory = newTicket.eventCategory;
			this->nrRow = newTicket.nrRow;
			this->seat = newTicket.seat;
		
			return *this;
		}


	}

	Ticket operator+(int id)
	{

		string filename = "ExistingTicketsList.txt";
		ifstream fin;

		fstream file; 
		ofstream of;


		int numberofIds = 0;
		string word;


			// opening file using fstream to see how many ids are
		fstream f;
		f.open("ExistingTicketsList.txt");
		cout << endl;
		cout << endl;
		while (f >> word) {
			numberofIds++;
			
		}
		f.close();


		int idList[5000];
		for (int i = 0; i < numberofIds; i++)
		{
			idList[i] = 0;
		}


		f.open("ExistingTicketsList.txt");
		cout << endl;
		cout << endl;
		cout << "-List of ID's:                             -\n";
		cout << "-                                          -\n";
		int contor = 0;
		while (f >> word) {
				idList[contor] = stoi(word);
				cout << idList[contor] << " ";
				contor++;

		}


		cout << endl;

		cout << "____________________________________________\n";
		f.close();


		int max = idList[0]; 

		for (int i = 0; i < contor; i++)
		{
			if (idList[i] > max)
			{
				max = idList[i];
			}

		}

		max++;



		// opening file using ofstream
		of.open("ExistingTicketsList.txt", ios::app);
		if (!of)
			cout << "No such file found";
		else {
			// opening file using fstream too see which is the biggest id


			cout << "-                                          -\n";
			cout << "Ticket id to be added: " << max << endl;
			of << max << endl;
			cout << "-                                          -\n";
			cout << "-Data appended successfully                -\n";
			cout << "-                                          -\n";
			cout << "____________________________________________\n";
			of.close();
		
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
			contor++;
		}

		return *this;

	}


	//void addTicketIdToList(int id)           // overload the +OP ?
	//{

	//	//create a txt with id s, add in it the id

	//	fstream file; //object of fstream class
	//	ofstream of;
	//	fstream f;

	//	// opening file using ofstream
	//	of.open("ExistingTicketsList.txt", ios::app);
	//	if (!of)
	//		cout << "No such file found";
	//	else {
	//		cout << "-                                          -\n";
	//		cout << "Ticket id to be added: "<<id<<endl;
	//		of << id<<endl;
	//		cout << "-                                          -\n";
	//		cout << "-Data appended successfully                -\n";
	//		cout << "-                                          -\n";
	//		cout << "____________________________________________\n";
	//		of.close();
	//		string word;

	//		// opening file using fstream
	//		f.open("ExistingTicketsList.txt");
	//		cout << endl;
	//		cout << endl;
	//		cout << "-List of ID's:                             -\n";
	//		cout << "-                                          -\n";
	//		while (f >> word) {
	//			cout << word << " ";
	//		}
	//		cout << endl;
	//		cout << "-                                          -\n";
	//		cout << "____________________________________________\n";
	//		f.close();
	//	}

	//}






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

	//Ticket operator+(Ticket ticket, string seat)
	//{
	//	Location result = loc;
	//	result.setSeatZone(seat);

	//	return result;
	//}


};

 //int Ticket:: MAX_NR_SEATS=50;
 int Ticket:: ID=1;




  