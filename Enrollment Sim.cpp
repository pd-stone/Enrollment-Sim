////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//                        Semester Programming Project                        //
//                        CS 231                                              //
//                        Paul Stone                                          //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <ctime>
using namespace std;

string stuNum;
string lastName;
string firstName;
string major;
string ssn;

string CRS1number;
string CRS1section;
string CRS1name;

string CRS2number;
string CRS2section;
string CRS2name;

string CRS3number;
string CRS3section;
string CRS3name;

string CRS4number;
string CRS4section;
string CRS4name;

string CRS5number;
string CRS5section;
string CRS5name;

string CRS6number;
string CRS6section;
string CRS6name;

double CRShours = 0;

string monthString[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
string dayString[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

void getTm( int &year, int &month, int &day, int &weekDay )
{
   time_t tt;
   time( &tt );
   tm TM = *localtime( &tt );

   year    = TM.tm_year + 1900;
   month   = TM.tm_mon ;
   day     = TM.tm_mday;
   weekDay = TM.tm_wday ;
}


int main()
{
	int year, month, day, hour, mins, secs, weekDay;
   	getTm( year, month, day, weekDay );
      
	ifstream InputFile;
	InputFile.open ("StudentSchedule.txt");
	string stuNumInp;
	getline(InputFile,stuNumInp);
	string lastNameInp;
	getline(InputFile,lastNameInp);
	string firstNameInp;
	getline(InputFile,firstNameInp);
	string majorInp;
	getline(InputFile,majorInp);
	string ssnInp;
	getline(InputFile,ssnInp);
	InputFile.close();
	
	
	bool cont = false;
	do
	{
		system("CLS");
		
		cout << "-------------------------------------------------------------------------------------------------------------------";
		cout << "\n\n";
		cout << "                                        Jacksonville State University";
		cout << "\n\n";
		cout << "                                             Fall Semester 2019";
		cout << "\n\n";
		cout << "                                                    CS230";
		cout << "\n\n";
		cout << "                                                  Paul Stone";
		cout << "\n\n";
		cout << "-------------------------------------------------------------------------------------------------------------------";
		cout << "\n\n\n\n\n";
		cout << "                              C O U R S E  E N R O L L M E N T  S I M U L A T I O N";
		cout << "\n\n\n\n";
		cout << "-------------------------------------------------------------------------------------------------------------------";
		cout << "\n\n\n";
		cout << "-------------------------------------------------------------------------------------------------------------------";
		cout << "\n\n";
	
		char answer;
		cout << "Continue? y or n: ";
		cin >> answer;
		
		switch (answer)
		{
			case 'Y':
				cont = true;
				break;
			
			case 'y':
				cont = true;
				break;
				
			case 'N':
				cont = false;
				break;
				
			case 'n':
				cont = false;
				break;
		}
		
	} while (cont == false);


	bool check = false;
	do
	{
		system("CLS");
		
		cout << "------------------------------ C O U R S E  E N R O L L M E N T  S I M U L A T I O N ------------------------------";
		cout << "\n\n\n\n";
		cout << "                                      Please enter the following information ";
		cout << "\n\n\n";
		cout << "                                               Student Number: ";
		cin >> stuNum;
		cout << "                                               Last Name: ";
		cin >> lastName;
		cout << "                                               First Name: ";
		cin >> firstName;
		cin.ignore();
		cout << "                                               Major: ";
		getline(cin, major);
		cout << "                                               SSN: ";
		cin >> ssn;
		cin.ignore();
		cout << "\n\n\n\n\n";
		cout << "-------------------------------------------------------------------------------------------------------------------";
		cout << "\n";
		cout << "-------------------------------------------------------------------------------------------------------------------";
		cout << "\n\n";
		
		system("pause");
	
		// This compares the input file to the inputs the user has given to see if they match
		// If they do not match the input file values then the program will make you input them again
		//The values should be as follows to match
		//
		// 001195269
		// Stone
		// Paul
		// Computer Science
		// 111111111
		
		if (stuNumInp == stuNum && lastNameInp == lastName && firstNameInp == firstName && majorInp == major && ssnInp == ssn)
		{
			system("CLS");
			
			cout << "------------------------------ C O U R S E  E N R O L L M E N T  S I M U L A T I O N ------------------------------";
			cout << "\n\n\n\n";
			cout << "                                Information Correct! Procceeding to Course Input!";
			cout << "\n\n\n\n";
			
			system("pause");
			
			check = true;
		}
		else
		{
			system("CLS");
			
			cout << "------------------------------ C O U R S E  E N R O L L M E N T  S I M U L A T I O N ------------------------------";
			cout << "\n\n\n\n";
			cout << "                                Sorry! The information you provided does not match.";
			cout << "\n\n";
			cout << "                                  Please try again with the Correct information!";
			cout << "\n\n\n\n";
			
			system("pause");
		}

	} while (check == false);
	

	bool conFinal = false;
	while (conFinal == false)
	{
		system("CLS");
		for (int i = 1; i < 7; i++)
		{
			cout << "------------------------------ C O U R S E  E N R O L L M E N T  S I M U L A T I O N ------------------------------";
			cout << "\n\n\n\n";
			cout << "                                      Please enter the following information ";
			cout << "\n\n\n";
			
			cout << "                                               Course " << i << " Number: ";
			switch(i)
			{
				case 1:
					getline(cin, CRS1number);
					break;
				case 2:
					getline(cin, CRS2number);
					break;
				case 3:
					getline(cin, CRS3number);
					break;
				case 4:
					getline(cin, CRS4number);
					break;
				case 5:
					getline(cin, CRS5number);
					break;
				case 6:
					getline(cin, CRS6number);
					break;
			}
			cout << "                                               Course " << i << " Section: ";
			switch(i)
			{
				case 1:
					getline(cin, CRS1section);
					break;
				case 2:
					getline(cin, CRS2section);
					break;
				case 3:
					getline(cin, CRS3section);
					break;
				case 4:
					getline(cin, CRS4section);
					break;
				case 5:
					getline(cin, CRS5section);
					break;
				case 6:
					getline(cin, CRS6section);
					break;
			}
			cout << "                                               Course " << i << " Name: ";
			switch(i)
			{
				case 1:
					getline(cin, CRS1name);
					break;
				case 2:
					getline(cin, CRS2name);
					break;
				case 3:
					getline(cin, CRS3name);
					break;
				case 4:
					getline(cin, CRS4name);
					break;
				case 5:
					getline(cin, CRS5name);
					break;
				case 6:
					getline(cin, CRS6name);
					break;
			}
			cout << "                                               Course " << i << " Hours: ";
			double hourstemp;
			cin >> hourstemp;
			CRShours = CRShours + hourstemp;
			cout << "\n";
			
	
			cout << "                                        Do you have another course? y or n: ";
			char classcheck;
			cin >> classcheck;
			cin.ignore();
					
			switch (classcheck)
			{
	
				case 'N':
					i = 7;
					break;
				
				case 'n':
					i = 7;
					break;
					
			}
			cout << "\n\n";
			
			system("CLS");
		}
		
	
		cout << "-------------------------------------------------------------------------------------------------------------------";
		cout << "\n";
		cout << "                                        Jacksonville State University";
		cout << "\n";
		cout << "                                             Fall Semester 2019";
		cout << "\n";
		cout << "                                               Class Schedule";
		cout << "\n\n\n\n";
		cout << "              Date: "<< dayString[weekDay] << ", " << day << " " << monthString[month] << " " << year << "                          Advisor: Sharee Hutchinson                    ";
		cout << "\n\n\n";
		cout << "          SSN:" << ssn << "     Name: " << firstName << " " << lastName << setw(32) <<"Major: " << major;
		cout << "\n\n\n";
		cout << "          CRS1: " << CRS1number << " " << CRS1section << " " << CRS1name;
		cout << "\n\n";
		cout << "          CRS2: " << CRS2number << " " << CRS2section << " " << CRS2name;
		cout << "\n\n";
		cout << "          CRS3: " << CRS3number << " " << CRS3section << " " << CRS3name;
		cout << "\n\n";
		cout << "          CRS4: " << CRS4number << " " << CRS4section << " " << CRS4name;
		cout << "\n\n";
		cout << "          CRS5: " << CRS5number << " " << CRS5section << " " << CRS5name;
		cout << "\n\n";
		cout << "          CRS6: " << CRS6number << " " << CRS6section << " " << CRS6name;
		cout << "\n\n";
		cout << "                                              Total Hours: " << CRShours;
		cout << "\n\n";
		
		char ans;
		
		cout << "                                      Would you like to ReEnter your Classes?\n";
		cout << "                                                    y or n: ";
		cin >> ans;
		cin.ignore();
		
		switch (ans)
		{
			case 'Y':
				conFinal = false;
				break;
			case 'y':
				conFinal = false;
				break;
			case 'N':
				conFinal = true;
				break;
			case 'n':
				conFinal = true;
				break;
			
		}

	}
	
	// This Turns the input file into the output file (to save hard drive space)
	ofstream ScheduleFile;
	ScheduleFile.open ("StudentSchedule.txt");
	ScheduleFile << stuNum << "\n" << lastName << "\n" << firstName << "\n" << major << "\n" << ssn << "\n\n";
	ScheduleFile << CRS1number << "\n" << CRS1section << "\n" << CRS1name << "\n\n";
	ScheduleFile << CRS2number << "\n" << CRS2section << "\n" << CRS2name << "\n\n";
	ScheduleFile << CRS3number << "\n" << CRS3section << "\n" << CRS3name << "\n\n";
	ScheduleFile << CRS4number << "\n" << CRS4section << "\n" << CRS4name << "\n\n";
	ScheduleFile << CRS5number << "\n" << CRS5section << "\n" << CRS5name << "\n\n";
	ScheduleFile << CRS6number << "\n" << CRS6section << "\n" << CRS6name << "\n\n";
	ScheduleFile << "Total Course Hours: " << CRShours;
	ScheduleFile.close();

	return 0;
}
