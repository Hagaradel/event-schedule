#include "Info.h"
#include <iostream>;
#include <fstream>;
#include <string> 
using std::ifstream;
using namespace std;

void Info::AddEventInfo()
{
	cout << "How Many Event do you want to Add ? "<< '\n';
	int number;
	cin >> number;
	ofstream file("Events.txt");
	

	for (int i = 0; i < number; i++) {
		cin.ignore();
		cout << " Enter Event name ";
		getline(cin, Event_Name);
		file << "Event name :" << Event_Name <<'\n';
		cout << " Enter start date ";
		getline(cin, start_date);
		file << "start date :" << start_date << '\n';
		cout << " Enter End date ";
		getline(cin, end_date);
		file << "End date :" << end_date << '\n';
		cout << " Enter place ";
		getline(cin, place);
		file << "Place :" << place << '\n';
		cout << " Enter start time ";
		getline(cin, start_time);
		file << "Start time :" << start_time << '\n';
		cout << " Enter reminder time ";
		getline(cin, reminder_time);
		file << "Reminder time :" << reminder_time<< '\n';
		cout << " Enter status ";
		getline(cin, status);
		file << "Status :" << status << '\n\n';
		

	}
	file.close();
	
}

string Info::parsing(ifstream file, string line)
{  
	
	char dlem = ':';
	char end = '.';
	file.getline(line, 50, dlem);
	
	return string();
}
