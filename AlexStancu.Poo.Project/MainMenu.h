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
		cout << "-        4.SECRET                          -\n";
		cout << "-        5.EXIT                            -\n";
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
	cout << "-                                          -\n";
	cout << "--------------------------------------------\n";
	cout << endl;
	return out;
}

//la op >> treb sa dezalocam prima data

istream& operator>>(istream& in, Ticket& ticket)
{
	int integerEventType = 0;
	bool isPremium = false;

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
		while (eventType != "movie" || eventType != "music" || eventType != "football")
		{
			eventType = "";
			cout << "Event type is NOT correct. Choose between (movie / music / football) -(Try again) \n";		
			in >> eventType;

			if (eventType == "movie" || eventType == "music" || eventType == "football")
			{
				ticket.setEventType(eventType);
				break;
			}				
		}
	}

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
		//SEARCH IN FILE BEFORE WE DO THIS

		//while (eventType != "movie" || eventType != "music" || eventType != "football")
		//{
		//	eventType = "";
		//	cout << "Event type is NOT correct. Choose between (movie / music / football) -(Try again) \n";
		//	in >> eventType;

		//	if (eventType == "movie" || eventType == "music" || eventType == "football")
		//	{
		//		ticket.setEventType(eventType);
		//		break;
		//	}
		//}


	}



	//string eventName;
	//in >> eventName;
	//const char* charEventName = new char[(eventName.length()) + 1];
	//charEventName= eventName.c_str();

	////add ticket.getName() to EventNames.txt
	////crate ticket.getName().txt;

	//bool ok = 0;

	//
	//	string eventNameString = eventName;
	//	string eventNameTxt = eventNameString + ".txt";
	//	FILE* pFile;
	//	pFile = fopen(eventNameTxt.c_str(), "r");
	//	if (pFile != NULL)
	//	{
	//		cout << "EXISTS";
	//		ok = 1;
	//		ticket.setEventName(charEventName);
	//		fclose(pFile);
	//	}
	//	else {		
	//			while (ok == 0)
	//			{
	//				in >> eventName;
	//				string eventNameString = eventName;
	//				string eventNameTxt = eventNameString + ".txt";

	//				pFile = fopen(eventNameTxt.c_str(), "r");
	//				if (pFile != NULL)
	//				{
	//					cout << "EXISTS";
	//					ok = 1;
	//					ticket.setEventName(charEventName);

	//					fclose(pFile);
	//				}
	//				if (ok == 1)
	//				{
	//					break;
	//				}
	//			}


	//		

	//		cout << "Does not exist";
	//		throw exception();

	//	}
















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
			if (eventCategory == "VIP")
			{
				isPremium = true;
			}
			ticket.setEventCategory(eventCategory);
		
		}
		catch (exception ex)
		{
			while (eventCategory != "Normal" || eventCategory != "VIP" )
			{
				eventCategory = "";
				cout << "Movie CATEGORY is NOT correct. -THROW (Try again: (Normal / VIP )) \n"; ;
				in >> eventCategory;

				if (eventCategory == "Normal" || eventCategory == "VIP")
				{
					if (eventCategory == "VIP")
					{
						isPremium = true;
					}
					ticket.setEventCategory(eventCategory);
				
					break;
				}
			}

		}

	}
	else if (eventType == "music")
	{
		cout << " Music event category:   (Category1 / Category2 ) -WITHOUT SPACES" << endl;
		string eventCategory = "";
		in >> eventCategory;

		try {
			if (eventCategory == "Category2")
			{
				isPremium = true;
			}
			ticket.setEventCategory(eventCategory);
		}
		catch (exception ex)
		{

			while (eventCategory != "Category1" || eventCategory != "Category2")
			{
				eventCategory = "";
				cout << "Music CATEGORY is NOT correct. -THROW (Try again: (Category1 / Category2 )) \n"; ;
				in >> eventCategory;

				if (eventCategory == "Category1" || eventCategory == "Category2")
				{
					if (eventCategory == "Category2")
					{
						isPremium = true;
					}
					ticket.setEventCategory(eventCategory);
					break;
				}
			}
		}

	}
	else if (eventType == "football")
	{
		cout << " Football event category:   (Stand1 / Stand2 ) -WITHOUT SPACES" << endl;
		string eventCategory = "";
		in >> eventCategory;

		try {
			if (eventCategory == "Stand2")
			{
				isPremium = true;
			}
			ticket.setEventCategory(eventCategory);
		}
		catch (exception ex)
		{
			while (eventCategory != "Stand1" || eventCategory != "Stand2")
			{
				eventCategory = "";
				cout << "Football CATEGORY is NOT correct. -THROW (Try again: (Stand1 / Stand2 )) \n"; ;
				in >> eventCategory;

				if (eventCategory == "Stand1" || eventCategory == "Stand2")
				{
					if (eventCategory == "Stand2")
					{
						isPremium = true;
					}
					ticket.setEventCategory(eventCategory);
					break;
				}
			}
		}
	}
	else
	{
		cout << "Event CATEGORY is NOT correct. We don t have an event type! ";
	}


	cout << "-                                          -\n";
	cout << ticket.getEventCategory() << endl;
	cout << "-                                          -\n";

	if (isPremium == true)
	{
		cout << " Event row:  (between: 1 .. 2)" << endl;
	}
	else
	{
		cout << " Event row:  (between: 3 .. 5)" << endl;
	}
	
	int nrRow = 0;
	in >> nrRow;

	if ((isPremium == true && nrRow == 1) || (isPremium == true && nrRow == 2))
	{

		try {
			ticket.setPremiumRow(nrRow);
			cout << "-                                          -\n";



		}
		catch (exception ex)
		{

			while (nrRow < 1 || nrRow>2)
			{
				nrRow = 0;
				cout << "PREMIUM Row is wrong. -THROW (Try again: (1 .. 2 )) \n"; ;
				in >> nrRow;

				if (nrRow > 0 && nrRow < 3)
				{
					ticket.setPremiumRow(nrRow);
					cout << "SETPREMIUM- \n";
					break;
				}
			}

		}

	}
	else
	{
		if ((isPremium == true && nrRow != 1) || (isPremium == true && nrRow != 2))
		{


			try {
				ticket.setPremiumRow(nrRow);
				cout << "-                                          -\n";
				cout << "SETPREMIUM- \n";



			}
			catch (exception ex)
			{

				while (nrRow < 1 || nrRow>2)
				{
					nrRow = 0;
					cout << "PREMIUM Row is wrong. -THROW (Try again: (1 .. 2 )) \n"; ;
					in >> nrRow;

					if (nrRow > 0 && nrRow < 3)
					{
						ticket.setPremiumRow(nrRow);
						cout << "SETPREMIUM- \n";
						break;
					}
				}

			}


		}
		else
		{
			try {
				ticket.setRow(nrRow);
				cout << "-                                          -\n";
				cout << "SETNORMAL- \n";


			}
			catch (exception ex)
			{

				while (nrRow < 3 || nrRow>5)
				{
					nrRow = 0;
					cout << "Row is wrong. -THROW (Try again: (3 .. 5 )) \n"; ;
					in >> nrRow;

					if (nrRow > 2 && nrRow < 6)
					{
						ticket.setRow(nrRow);
						cout << "SETNORMAL- \n";
						break;
					}
				}

			}




		}

	

	}


	cout << " Event seat:  (between: 1 .. 10)" << endl;
	int seatNr = 0;
	in >> seatNr;   //-ACTUAL NR THAT COUNTS
	cout << "-                                          -\n";
	cout << "Seats:      \n";
	try {
		ticket.setSeat(seatNr);
		cout << "-                                          -\n";
	}
	catch (exception ex)
	{
		while (seatNr < 1 || seatNr>10)
		{
			seatNr = 0;
			cout << "Seat is wrong. -THROW (Try again: (1 .. 10 )) \n"; ;
			in >> seatNr;

			if (seatNr > 0 && seatNr < 6)
			{
				ticket.setSeat(seatNr);
				break;
			}
		}
	}
	cout << "-                                          -\n";

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







