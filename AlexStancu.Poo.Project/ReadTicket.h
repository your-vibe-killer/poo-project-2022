#pragma once
#include <exception>
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>
#include "Ticket.h"
using namespace std;


//we receive an ID, we search in txt for id?/in char matrix for ID
//if it exists, 

class ReadTicket {

private:
	int receivedTicketID=0;
	

	
	public:

		ReadTicket()
		{
			this->receivedTicketID = 0;
		}

		ReadTicket(int id)
		{
			this->receivedTicketID = id;
		}

		~ReadTicket()
		{

		}

		int getId()
		{
			return this->receivedTicketID;
		}

		void setId(int id)
		{
			if (id>=0 )
			{
				this ->receivedTicketID = id;
			}
		}


		ReadTicket(const ReadTicket& readticket)
		{
			this->receivedTicketID = readticket.receivedTicketID;
		}

		ReadTicket& operator=(const ReadTicket& readticket)
		{
			this->receivedTicketID = readticket.receivedTicketID;
			return *this;
		}


	int checkTicketValidity(int id)
	{
			string line;
			string receivedId = to_string(id);
			//string insertedId;
			bool isValid = false;
			ifstream ticketFile("ExistingTicketsList.txt", ios_base::in);
			getline(ticketFile, line);

			//cout << "Please insert the Id you want to check: " << endl;
			//cin >> receivedId;
		
			while (!ticketFile.eof())
			{

				do {
				
					if (line == receivedId) {    //our id
						//this->tableExists = 1;
						isValid = true;
						cout << "-                                          -\n";
						cout << "It is a valid ID!";
						cout << "-                                          -\n";
						cout << "____________________________________________\n";
						return 0;
					}
					else
					{
						cout << "-                                          -\n";
						cout << "NOT a valid ID!";
						cout << "-                                          -\n";
						cout << "____________________________________________\n";
						return 0;
					}
				} while (getline(ticketFile, line, '\n') && (isValid == true));  //DOESN T WORK ON LAST LINE



			}

			ticketFile.close();


	}


	//do we need it yet?
	void printTicketDetails(int id)
	{
		string objectEventType= "movie";
		string ticketDetail= " TICKET DETAIL ";
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






	//ReadTicket()
//{

//}

//ReadTicket()
//{

//}

//~ReadTicket()
//{

//}
	
};

//AT LEAST 2 METHODS