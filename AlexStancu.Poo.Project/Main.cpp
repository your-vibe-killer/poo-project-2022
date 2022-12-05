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


	cout << "             (Write 1 or 2 or 3): ";
	cout << "                                            \n";
	cout << "                                            \n";
	cin >> mainMenuOption;

	switch (mainMenuOption) {
	case 1:
	{
		Ticket ticket;
		cin >> ticket;
		int id = ticket.getId();
		ticket + id;

	
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
		cout << "---------------Exited-----------------------\n";
		cout << "-                                          -\n";
		cout << "-                                          -\n";
		cout << "--------------------------------------------\n";
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