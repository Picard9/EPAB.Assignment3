#include<iostream>
#include<conio.h>


using namespace std;

//Struture
struct Entry
{
	string type;
	string input;
};


int main()
{

	string choice;
	const int EntrySize = 6;
	Entry entries[] =
	{
		{"place", ""},
		{"adjective", ""},
		{"noun", ""},
		{"famous person", ""},
		{"verb", ""},
		{"animal", ""}
	};

	for (int i = 0; i < EntrySize; i++)
	{

		cout << (i + 1) << ". " << "Enter a " << entries[i].type << ": ";
		cin >> entries[i].input;
	}


	cout << "Do you want to fix any mistakes? (y/n): ";
	cin >> choice;
	if (choice == "y")
	{
		choice = "";

		int rowToFix = 0;
		cout << "Which entry would you like to fix? (1-6): ";
		cin >> rowToFix;
		cout << "Enter a " << entries[rowToFix - 1].type << ": ";
		cin >> entries[rowToFix - 1].input;

		cout << "Do you want to fix any mistakes? (y/n): ";
		cin >> choice;
		
		if (choice == "y")
		{
		    rowToFix = 0;
			cout << "Which entry would you like to fix? (1-6): ";
			cin >> rowToFix;
			cout << "Enter a " << entries[rowToFix - 1].type << ": ";
			cin >> entries[rowToFix - 1].input;

			cout << "Do you want to fix any mistakes? (y/n): ";
			cin >> choice;
		}
		else
		{
			cout << "\n\nYour Mad Lib: \n\n";
			cout << "Yesterday, I went to "<< entries[0].input << " and saw a";
			cout << entries[1].input << " " << entries[2].input << ". ";
			cout << "I asked " << entries[3].input << " if he wanted to " << entries[4].input <<", ";
			cout << "but he said he was busy walking his pet " << entries[5].input <<".";

		}

	}
	else
	{
		cout << "\n\nYour Mad Lib: \n\n";
		cout << "Yesterday, I went to " << entries[0].input << " and saw a";
		cout << entries[1].input << " " << entries[2].input << ". ";
		cout << "I asked " << entries[3].input << " if he wanted to " << entries[4].input << ",";
		cout << "but he said he was busy walking his pet " << entries[5].input << ".";

	}

	(void)_getch();
	return 0;
}
