#include "MainMenu.h"
#include "ReadTicket.h"
#include "Ticket.h"
#include "TicketPremium.h"
#include "AbstractEx.h"
#include <vector>
#include <fstream>
#include<string>
#include <iostream>




int main(int argc, char* argv[]) {


	MainMenu menu;
	menu.printMainMenu();
	int mainMenuOption;
	int uniqueId;
	string eventName="";


	cout << "             (Write 1 or 2 or 3 or 4 or 5): ";
	cout << "                                            \n";
	cout << "                                            \n";
	cin >> mainMenuOption;

	//if()

	switch (mainMenuOption) {
	case 1:
	{
		Ticket mockTicket;
		cin >> mockTicket;
		
		if (mockTicket.getRow()==1 || mockTicket.getRow()==2)
		{
			string message = "message";
			TicketPremium ticketPremium(mockTicket.getEventType(), mockTicket.getEventName(), mockTicket.getEventCategory(),
				mockTicket.getRow(), mockTicket.getSeat(), message);
			int id = ticketPremium.getId();
			ticketPremium + id;
			int realId = ticketPremium.getRealId();
			ticketPremium.serialize(realId);
			cout << endl;
			Ticket* t1 = new TicketPremium();
			TicketPremium* tp1 = new TicketPremium();
			cout << t1->showMessage() << endl;
			cout << tp1->showMessage() << endl;
			cout << t1->showMessage2() << endl;
			cout << tp1->showMessage2() << endl;

			AbstractEx* ex;


		}else
		{
			Ticket ticketFinal(mockTicket.getEventType(), mockTicket.getEventName(), mockTicket.getEventCategory(),
				mockTicket.getRow(), mockTicket.getSeat());
			int id = ticketFinal.getId();
			ticketFinal + id;
			int realId = ticketFinal.getRealId();
			ticketFinal.serialize(realId);
			cout << endl;

		}

		AbstractEx* ex = new Ticket();
		AbstractEx* exa = new TicketPremium();

		//
	

	
	}
	break;

	case 2:
	{
		cout << "--------Read an existing ticket-------------\n";
		cout << "-                                          -\n";
		cout << "           Insert UNIQUE ID:   ";

		cin >> uniqueId;
		ReadTicket readTicket;
		readTicket.checkTicketValidity(uniqueId);


	}
	break;

	case 3:
	{
		cout << "----------Show event list:------------------\n";
		cout << "-                                          -\n";
		cout << "-                                          -\n";
		 	fstream f;
			string word;
		f.open("EventNames.txt");
		while (f >> word) {
			cout << word << endl;
			cout << "-                                          -\n";			
		}
		f.close();
		// show content
		cout << "-                                          -\n";
		cout << "--------------------------------------------\n";
		cout << "-             For more details:                -\n";

		cout << "Write event name to see: max seats, Nr. rows, Seats per row, Time, Location\n";
		cin >> eventName;
		f.open(eventName+".txt");
		cout << endl;
		while (f >> word) {
			cout << word << endl;

		}
		f.close();

		//open specific file
		//show content
	
		
		cout << "-                                          -\n";
		cout << "--------------------------------------------\n";
		

	}
	break;

	case 5:
	{	cout << "---------------Exited-----------------------\n";
	cout << "-                                          -\n";
	cout << "-                                          -\n";
	cout << "--------------------------------------------\n";
	
	}
	break;

	case 4:
	{	cout << "                           ---------------Secret-----------------------\n";





		cout << "	777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777 777777777\n";
		cout << "	777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777 777777777\n";
		cout << "	777777777777777777777777777777777............................................7777777777777 777777777\n";
		cout << "	7777777777777777777777777................7777777777777777777777777777777777.....7777777777 777777777\n";
		cout << "	7777777777777777777...........7777777777.....777777777777777..7777777777777777...777777777 777777777\n";
		cout << "	77777777777777777....77777777777777777777777777777777777777777777..7777777777777...7777777 777777777\n";
		cout << "	77777777777777....7777.77......777777777777...77777777777777..777777.777777777777...777777 777777777\n";
		cout << "	777777777777....7777777777777777777777777777777777777777777777777..7777.7777777777...77777 777777777\n";
		cout << "	77777777777...777777777777.....77777777777777777777.7777777777...777.7777.777777777...7777 777777777\n";
		cout << "	7777777777..77777777777.7777777777777777777777777.7777777777777777..777.7777.7777777...777 777777777\n";
		cout << "	7777777777..777777777.777777777777.7777777777777777777777777777777777.77.7777.7777777..777 777777777\n";
		cout << "	7777777777..77777777.77777777777777777777777777777777777777777777777777.77.77777777777..77 777777777\n";
		cout << "	777777777..777777777777777777777777777777777777777777..............7777777777777777777...7 777777777\n";
		cout << "	77777777...777777777777........7777777777777777777.....777............77777777777777777... 777777777\n";
		cout << "	7777....77777777777..............7777777777777....777777........77...777777777777777777... 7777777\n";
		cout << "	777...777.....7...7...............77777777777...77777.................7777.7777........7.. ..77777\n";
		cout << "	77..777.777777777777777777.............7777777.........77777777777..777.777777777777777777 ...7777\n";
		cout << "	7..77.777..777777777777777777777....77777777777.....777777...77777777777777..........77777 77..777\n";
		cout << "	7..7.77.777......7777777777777777..7777777777777777777777777....7777777......777777....777 7.7..77\n";
		cout << "	7...77777..........7777.777777777..777777777777777777777777777...........77777..77777...77 7.77...\n";
		cout << "	7...77777.7777777........77777777..7777777777777777777777777777777777777777777..777777..77 7.77...\n";
		cout << "	7...77.7777777..77....77777777....77777777777777777777777777777777777777777.....7777777..7 7.777..\n";
		cout << "	7..7777.777777..77777777777....7777777777777777........7777777777777777.....777......77..7 7.777..\n";
		cout << "	7....777..77....7777777777.....77777777777777777777..77777777777777......77777...7...7...7 7.77...\n";
		cout << "	77..7..77777....7777777..77.....777777777.......777..7777777777.......77777777..777777..77 7777...\n";
		cout << "	77...7777.77..7...777.77777777...77777777777777.7...777777........7..7777777....77777..777 .77...7\n";
		cout << "	777...77777.........777777777777......777777777777777........777777..7777......777777777.. 77..777\n";
		cout << "	7777...7777..7..7......77777777777...77777777777........7777777777...7........7777777.7777 7...777\n";
		cout << "	77777..7777....77..77........77777777..............77..7777777777.......77...7777777777... ..77777\n";
		cout << "	77777..7777....77..7777....................7777777777..777777........7777...777777777777.. .777777\n";
		cout << "	77777..7777....77..777...7777777..7777777..7777777777...7.........7..777...77777777777...7 7777777\n";
		cout << "	77777..7777........777..77777777..7777777..777777777...........7777..77...77777777777...77 7777777\n";
		cout << "	77777..7777.................................................7777777......777777777777..777 7777777\n";
		cout << "	77777..7777...........................................7..77777777777...7777777777777...777 7777777\n";
		cout << "	77777..77777....................................7777777..777777777...77777777777777...7777 7777777\n";
		cout << "	77777..77777..7...........................7..7777777777...77777....777777777777777...77777 7777777\n";
		cout << "	77777..777777..7..77..777..77777...77777777..77777777777..777....777777777777777...7777777 7777777\n";
		cout << "	77777..777777......7...777..77777..77777777..777777777777......7777777777777777...77777777 7777777\n";
		cout << "	77777..7777777....777...77...7777..77777777..777777777......7777777.77777.777...7777777777 7777777\n";
		cout << "	77777..777777777.........77..7777...7777777..77.........77777777.77777..777....77777777777 7777777\n";
		cout << "	77777..77777777777777...............................777777777..7777..7777.... 777777777777777\n";
		cout << "	7777...77777777.777777777777777777777777777777777777777777.77777..7777.....77 77777777777777\n";
		cout << "	7777..7777777777.777777777777777777777777777777777777..777777.77777.....77777 77777777777777\n";
		cout << "	7777..777777777777.777777777777777777777777777777..777777..77777.....77777777 77777777777777\n";
		cout << "	77..77777..77777777...77777777777..........777777..7777777......7777777 777777777777\n";
		cout << "	7..777777777.7777777777777777777777777...777777777777.....777777 77777777\n";
		cout << "	7...7777777777...............777777777777777777777.....777777 7777\n";
		cout << "	7...777777777777777777777777777777777777777777.....777777 77\n";
		cout << "	77...77777777777777777777777777777777777..7.....7777777\n";
		cout << "	777....7777777777777777777777777777..........77777777\n";
		cout << "	7777.....7777777777777777777.........77777777777777\n";
		cout << "	7777777........................77777777777777777777\n";
		
	}
	break;

}

}