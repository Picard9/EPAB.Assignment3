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
	// Variable to store user's choice whether to fix mistakes
	string choice;


	//Array's Size Declaration 
	const int EntrySize = 6;

	//Array initialization
	Entry entries[] =
	{
		{"place", ""},
		{"adjective", ""},
		{"noun", ""},
		{"famous person", ""},
		{"verb", ""},
		{"animal", ""}
	};

	// Ask the user to enter words for each entry
	for (int i = 0; i < EntrySize; i++)
	{
		//Access the first character
		char firstChar = tolower(entries[i].type[0]);

		//Check whether the first character is a vowel
		if (firstChar == 'a' || firstChar == 'e' || firstChar == 'i' || firstChar == 'o' || firstChar == 'u')
			cout << (i + 1) << ". " << "Enter an " << entries[i].type << ": ";
		else
			cout << (i + 1) << ". " << "Enter a " << entries[i].type << ": ";

		cin >> entries[i].input;
	}

	//Allow the user to fix mistakes if needed.
	cout << "\nDo you want to fix any mistakes? (y/n): ";
	cin >> choice;

	while (choice == "y")
	{

		//Allow the user to re-enter a word for a specific entry to fix.
		int IndexToFix = 0;
		cout << "Which entry would you like to fix? (1-6): ";
		cin >> IndexToFix;

		// If invalid number is entered, keep asking until it's valid
		while (IndexToFix < 0 || IndexToFix > EntrySize) {
			cout << "\nInvalid entry number! Please enter a number from 1 to " << EntrySize << "\n\n";
			cout << "Which entry would you like to fix? (1-6): ";
			cin >> IndexToFix;
		}

		//Access the first character
		char firstChar = tolower(entries[IndexToFix - 1].type[0]);


		if (IndexToFix > 0 && IndexToFix <=6 )
		{
			//Check whether the first character is a vowel
			if (firstChar == 'a' || firstChar == 'e' || firstChar == 'i' || firstChar == 'o' || firstChar == 'u')
				cout << "\nEnter an " << entries[IndexToFix-1].type << ": ";
			else
				cout << "\nEnter a " << entries[IndexToFix-1].type << ": ";

		}


		cin >> entries[IndexToFix - 1].input;

		//Allow the user to fix mistakes if needed.
		cout << "Do you want to fix any mistakes? (y/n): ";
		cin >> choice;
	}
	
	// Display the completed story to the user.
	cout << "\n\nYour Mad Lib:\n\n";
	cout << "Yesterday, I went to " << entries[0].input << " and saw a ";
	cout << entries[1].input << " " << entries[2].input << ". ";
	cout << "I asked " << entries[3].input << " if he wanted to " << entries[4].input << ", ";
	cout << "but he said he was busy walking his pet " << entries[5].input << ".\n";

	(void)_getch();
	return 0;
}
