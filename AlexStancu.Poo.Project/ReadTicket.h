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
	int* idList;
	int nrOfIds;
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
			bool isValid = false;
			fstream f;

			f.open("ExistingTicketsList.txt");
			cout << endl;
			cout << endl;
			getline(f, line);

			if (line == receivedId) {

				cout << "RECEIVED: " << receivedId;
				isValid = true;
				cout << "-                                          -\n";
				cout << "It is a valid ID!";
				cout << "-                                          -\n";
				cout << "Show ticket details? (y/n) " << endl;
				char answer;
				cin >> answer;

				while (answer != 'y' && answer != 'n')
				{
					answer = 'a';
					cout << "Wrong answer, try again! (y or n)" << endl;
					cin >> answer;
					if (answer == 'y' || answer == 'n')
						break;
				}
				if (answer == 'y')
				{
					Ticket mockTicket;
					mockTicket.deserialize(stoi(receivedId));


				}
				if (answer == 'n')
				{
					cout << "You chose no!" << endl;;
				}



				cout << "____________________________________________\n";
				return 0;
			}
			else
			{

				while (f >> line) {

					if (line == receivedId) {    //our id

						cout << "RECEIVED: " << receivedId;
						isValid = true;
						cout << "-                                          -\n";
						cout << "It is a valid ID!";
						cout << "-                                          -\n";
						cout << "Show ticket details? (y/n) " << endl;
						char answer;
						cin >> answer;

						while (answer != 'y' && answer != 'n')
						{
							answer = 'a';
							cout << "Wrong answer, try again! (y or n)" << endl;
							cin >> answer;
							if (answer == 'y' || answer == 'n')
								break;
						}
						if (answer == 'y')
						{
							Ticket mockTicket;
							mockTicket.deserialize(stoi(receivedId));


						}
						if (answer == 'n')
						{
							cout << "You chose no!" << endl;;
						}

					}
					else
					{
						getline(f, line, '\n');

					}

				}

				if (isValid == false)
				{
					cout << "-                                          -\n";
					cout << "NOT a valid ID!";
					cout << "-                                          -\n";
					cout << "____________________________________________\n";
					return 0;
				}
			}
			f.close();
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