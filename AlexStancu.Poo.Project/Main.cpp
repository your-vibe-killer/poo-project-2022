#include "MainMenu.h"
#include "ReadTicket.h"
#include "Ticket.h"
#include <vector>
#include <fstream>




int main(int argc, char* argv[]) {



	//UserInput d1;
	//d1.userChoice();

	MainMenu menu;
	menu.printMainMenu();
	menu.getOptionFomKeyboard();
    Ticket ticket;
	cout << ticket;
	ticket.addTicketIdToList();
	ReadTicket readTicket;
	readTicket.checkTicketValidity();

	

	//return 0;

}