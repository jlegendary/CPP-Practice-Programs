//
//  main.cpp
//   Remove Vowels
//
//  Created by JLegendary on 8/5/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//   JLegendary@me.com
//


#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void removeVowels(string &str);
bool itIsVowel(char ch);


int main()
{
	string userInput;

    cout << "Remove vowels from string: " << endl;
	cin >> userInput;

	removeVowels(userInput);
	
	cout << "String with vowels removed: " << userInput << "'" << endl;

	return 0;
}


void removeVowels(string &str)
{
	int index = 0;
	int len = static_cast<int>(str.length());
	string substr1, substr2;
	char ch;

	while (index < len)
	{
		ch = str[index];
		if (itIsVowel(ch) == true)
		{
			substr1 = str.substr(0, index);
			substr2 = str.substr(index + 1, len);
			str = substr1 + substr2;
			len = static_cast<int>(str.length());
		}
		else
			index = index + 1;
	}
}


bool itIsVowel(char ch)
{
	ch = tolower(ch);
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		return true;
	else
		return false;
}