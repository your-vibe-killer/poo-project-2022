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

	}


	Ticket(string eventType, const char* eventName, string eventCategory, int nrRow, int seat) :id(ID++)
	{
		this->eventType = eventType;
		this->eventName = new char[strlen(eventName) + 1];
		strcpy(this->eventName, eventName);
		this->eventCategory = eventCategory;
		this->nrRow = nrRow;
		this->seat = seat;
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

		if (nrRow > 2 && nrRow < 6)
		{
			this->nrRow = nrRow;

		}
		else
		{
			throw exception();
		}


	}


	void setPremiumRow(int nrRow)
	{

		if (nrRow > 0 && nrRow < 3)
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

	int getRealId()
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
		int contor = 0;
		while (f >> word) {
			idList[contor] = stoi(word);
			cout << idList[contor] << " ";
			contor++;

		}
		f.close();

		int max = idList[0];

		for (int i = 0; i < contor; i++)
		{
			if (idList[i] > max)
			{
				max = idList[i];
			}

		}
		return max;
	}

	void serialize(int id) 
	{

		string fileName = to_string(id) + "ticket";

		ofstream f(fileName, ios::out | ios::binary);
		//int//
		f.write((char*)&id, sizeof(id));
		//char*
	
		int nameSize = strlen(this->eventName);
		f.write((char*)&nameSize, sizeof(nameSize));
		f.write(this->eventName, nameSize + 1);
		//string//
		int eventCategorySize = this->eventCategory.size();
		f.write((char*)&eventCategorySize, sizeof(eventCategorySize));
		f.write(this->eventCategory.c_str(), eventCategorySize + 1);

		int eventTypeSize = this->eventType.size();
		f.write((char*)&eventTypeSize, sizeof(eventTypeSize));
		f.write(this->eventType.c_str(), eventTypeSize + 1);

		f.write((char*)&this->nrRow, sizeof(this->nrRow));
		f.write((char*)&this->seat, sizeof(this->seat));

		f.close();

	}

	void deserialize(int id)
	{
		cout << "DESERIZED TICKET: " << endl;
		string fileName = to_string(id) + "ticket";
		ifstream f(fileName, ios::in | ios::binary);
		if(f.is_open())
		{
			if (this->eventName != NULL)
			{
				delete[]this->eventName;
			}

			//int
			f.read((char*)&id, sizeof(id));
			cout << id << endl;
			//char*

			int nameSize = 0;
			f.read((char*)&nameSize, sizeof(nameSize));
			this->eventName = new char[nameSize + 1];
			f.read(this->eventName, nameSize + 1);
			cout << eventName << endl;
			//string//
			int eventCategorySize = 0;
			f.read((char*)&eventCategorySize, sizeof(eventCategorySize));
			char* aux = new char[eventCategorySize + 1];
			f.read(aux, eventCategorySize + 1);
			this->eventCategory = aux;
			cout << eventCategory << endl;
			delete[] aux;

			int eventTypeSize = 0;
			f.read((char*)&eventTypeSize, sizeof(eventTypeSize));
			char* aux2 = new char[eventTypeSize + 1];
			f.read(aux2, eventTypeSize + 1);
			this->eventType = aux2;
			cout << eventType << endl;
			delete[] aux2;

			f.read((char*)&this->nrRow, sizeof(this->nrRow));
			cout << nrRow << endl;
			f.read((char*)&this->seat, sizeof(this->seat));
			cout << seat << endl;
			f.close();

		}
		else
		{
			cout << "Nu merge deschis fisierul binar!";
		}
	
	}

	//Ticket operator+(Ticket ticket, string seat)
	//{
	//	Location result = loc;


};
 //int Ticket:: MAX_NR_SEATS=50;
 int Ticket:: ID=1;