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


	cout << "\nDo you want to fix any mistakes? (y/n): ";
	cin >> choice;

	while (choice == "y")
	{
		//choice = "";

		int IndexToFix = 0;
		cout << "Which entry would you like to fix? (1-6): ";
		cin >> IndexToFix;

		if (IndexToFix > 0 && IndexToFix <=6 )
		{
			cout << "\nEnter a " << entries[IndexToFix - 1].type << ": ";
			cin >> entries[IndexToFix - 1].input;
		}
		else
		{
			while (IndexToFix < 0 || IndexToFix >6) {
				cout << "\nInvalid entry number! Please enter a number from 1 to " << EntrySize << "\n\n";
				cout << "Which entry would you like to fix? (1-6): ";
				cin >> IndexToFix;
			}

			if (IndexToFix > 0 && IndexToFix <= 6)
			{
				cout << "\nEnter a " << entries[IndexToFix - 1].type << ": ";
				cin >> entries[IndexToFix - 1].input;
			}
			
		}
		
		cout << "Do you want to fix any mistakes? (y/n): ";
		cin >> choice;
	}
		// Print Mad Lib
	cout << "\n\nYour Mad Lib:\n\n";
	cout << "Yesterday, I went to " << entries[0].input << " and saw a ";
	cout << entries[1].input << " " << entries[2].input << ". ";
	cout << "I asked " << entries[3].input << " if he wanted to " << entries[4].input << ", ";
	cout << "but he said he was busy walking his pet " << entries[5].input << ".\n";

	(void)_getch();
	return 0;
}
