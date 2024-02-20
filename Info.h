#pragma once
#include <string> ;

using namespace std;

class Info
{
public:
	string Event_Name;
	string start_date;
	string end_date;
	string place;
	string start_time;
	string reminder_time;
	string status; 

public : 
	void AddEventInfo();
	string parsing(ifstream file ,string line);
};

