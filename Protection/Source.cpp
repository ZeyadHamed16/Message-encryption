#include <string>
#include <iostream>
using namespace std;

void protectMessage(string w)
{
	int wordLength = w.length();
	for (int i = 0; i < wordLength; i++)
	{
		int wordNum = (int)w[i];
		wordNum += 3;
		cout << (char)wordNum;
	}
}

void solveProtectMessage(string pw)
{
	int wordLength = pw.length();
	for (int i = 0; i < wordLength; i++)
	{
		int wordNum = (int)pw[i];
		wordNum -= 3;
		cout << (char)wordNum;
	}
}

int main()
{
	string word, pWord;

	//1st code
	cout << "Protect your messages with this technique:-\n";
	cout << "Message: ";
	getline(cin, word);

	cout << "Protected message: ";
	protectMessage(word);
	cout << "\n\n";

	//2nd code
	cout << "To see your protected messages, use this technique:-\n";
	cout << "Protected message: ";
	getline(cin, pWord);

	cout << "Message: ";
	solveProtectMessage(pWord);
	cout << "\n\n";
}

//code1
	/*
void protectMessage(string w)
{
	int wordLength = w.length();
	for (int i = 0; i < wordLength; i++)
	{
		(int)w[i];
	}

	for (int i = 0; i < wordLength; i++)
	{
		int wordNum = (int)w[i];
		wordNum += 3;
		cout << (char)wordNum;
	}
}

int main()
{
	string word;

	cout << "Protect your messages with this technique:-\n";
		cout << "Message: ";
		getline(cin, word);

		cout << "Protected message: ";
		protectMessage(word);
		cout << "\n\n";
}
*/

//code2
	/*
void solveProtectMessage(string pw)
{
	int wordLength = pw.length();
	for (int i = 0; i < wordLength; i++)
	{
	int wordNum = (int)pw[i];
	wordNum -= 3;
	cout << (char)wordNum;
	}
}

int main()
{
	string pWord;

	cout << "To see your protected messages, use this technique:-\n";
	cout << "Protected messages: ";
	getline(cin, pWord);

	int wordLength = pWord.length();

	cout << "Message: ";
	solveProtectMessage(pWord);
	cout << "\n\n";
}

*/

//Try again code
	/*
		do
		{

			//code

			//If the user wanna to try again [didn't work while useing _getline()_]
			do
			{
				cout << "Try again : (Y)es or (No) ==> ";
				cin >> tryAgain;
				tryAgain = toupper(tryAgain);
				if (tryAgain == 'Y' || tryAgain == 'N')
				{
					cout << "\n";
					break;
				}
				else
				{
					cout << "You must enter (Y) or (N) not otherwise.\n";
				}
			} while (true);

		} while (tryAgain == 'Y');
		cout << "Thanx :)" << endl;
		
	*/