#include "Event.h"
#include "Info.h"
#include<vector>
#include<iostream>
#include <fstream>
#include <vector> 
using namespace std;

vector<Info> event;

void Event::AddEvent()
{
	//Info i; 
	//i.AddEventInfo();
	//event.push_back(i);
}

void Event::DeleteEvent()
{

}

void Event::UpdateEvent()
{

}

void Event::Menu()
{
	cout << "+------ SCHEDULER ------+\n"
		"|  1. New Event         |\n"
		"|  2. Delete Event      |\n"
		"|  3. Display Schedule  |\n"
		"|  4. Save Schedule     |\n"
		"|  5. Load Schedule     |\n"
		"|  6. Exit              |\n"
		"+-----------------------+\n";
	cout << "Please choose one of Them ";
	int choice;
	while (true) {
		cin >> choice;
		if (choice == 1)
		{
			Info i; 
			i.AddEventInfo();
			break;
		}
		else if (choice == 2) 
		{
			break;
		}
		else if (choice == 3)
		{
			break;
		}
	}

}
