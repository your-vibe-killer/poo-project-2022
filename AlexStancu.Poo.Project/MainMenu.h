#pragma once
#include <exception>
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
using namespace std;



class MainMenu {

public:
	MainMenu()
	{

	};

	void printMainMenu()
	{
		cout << "---------------Main Menu--------------------\n";
		cout << "-       Please choose an option:           -\n";
		cout << "-        1. Create a ticket                -\n";
		cout << "-        2.Read/Check a ticket             -\n";
		cout << "-                                          -\n";
		cout << "-                                          -\n";
		cout << "-                                          -\n";
		cout << "-                                          -\n";
		cout << "-                                          -\n";
		cout << "-                                          -\n";
		cout << "--------------------------------------------\n";

	

	}

	void getOptionFomKeyboard()
	{

		string menuOption;
		string line;
		//ifstream myfile("comenzi.txt");

	/*	if (myfile)
		{
			getline(myfile, line);

		}
		else cout << "We' ve got a problem \n";
		do {
			sqlText = line;*/


	cout << "(Write 1 or 2):";



		string mainMenuOption = "1";
		cin >> mainMenuOption;
		switch (stoi(mainMenuOption)) {
		case 1:
			cout << "Option1	                   ";
			cin >> mainMenuOption;
			break;
		case 2:
			cout << "Option2                       ";
			cin >> mainMenuOption;
			break;

		}
	}

};






