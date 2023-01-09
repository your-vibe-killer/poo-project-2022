#include "MainMenu.h"
#include "ReadTicket.h"
#include "Ticket.h"
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


	cout << "             (Write 1 or 2 or 3): ";
	cout << "                                            \n";
	cout << "                                            \n";
	cin >> mainMenuOption;

	switch (mainMenuOption) {
	case 1:
	{
		Ticket mockTicket;
		cin >> mockTicket;

	
		//add ticket.getName() to EventNames.txt
		//crate ticket.getName().txt;

		//mockTicket + id;
		cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
		//cout << ticket.getEventName() << endl;
		//cout << ticket.getEventType() << endl;
		cout << mockTicket.getEventCategory() << endl;

		cout << mockTicket.getRow() << endl;
		cout << mockTicket.getSeat() << endl;
		cout << mockTicket.getId() << endl;
		Ticket ticketFinal(mockTicket.getEventType(), mockTicket.getEventName(), mockTicket.getEventCategory(), mockTicket.getRow(), mockTicket.getSeat());
		cout << ticketFinal.getId() << endl;
		int id = ticketFinal.getId();
		ticketFinal + id;
		cout << "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
	

	
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
		//ff

	}
	break;

	case 3:
	{
		cout << "----------Show event list:------------------\n";
		cout << "-                                          -\n";
		// open EventNames.txt
		// show content
		cout << "-                                          -\n";
		cout << "-             More details:                -\n";
		cout << "Write event name and add `.txt`, like this example: `theEventName.txt`\n";
		cin >> eventName;
		//open specific file
		//show content
	
		
		cout << "-                                          -\n";
		cout << "--------------------------------------------\n";
		

	}
	break;

	case 4:
	{	cout << "---------------Exited-----------------------\n";
	cout << "-                                          -\n";
	cout << "-                                          -\n";
	cout << "--------------------------------------------\n";
	
	}
	break;
	



}



	//return ticket;




























	// 
	// 
	//menu.getOptionFomKeyboard();

	//cout << ticket;

	//ticket.addTicketIdToList(ticket.getId());
	//cout<<"ID: "<<ticket.getId()<<endl;
	//ReadTicket readTicket;
	//readTicket.checkTicketValidity();

	

	//return 0;

}