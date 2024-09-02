#include <iostream>
#include <Windows.h>

using namespace std;


int main() {

	string words[]{ "print", "if", "else", "while", "for", "break", "int", "string", "boolean", "char", "float", "double" };
	string controlWord;
	int mainChoice, score = 0, combo = 0;

	while (true) {
		cout << "" << endl;
		cout << "[1] Start Game" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "> ";
		cin >> mainChoice;
		system("cls");

		while (true) {

			int randomWord = rand() % (11 - 0 + 1) + 0;
			srand(time(0));

			if (mainChoice == 1) {
				cout << "" << endl;
				cout << "  Score: " << score << "   Combo: " << combo << "x" << endl;
				cout << "" << endl;
				cout << "" << endl;
				cout << "####################" << endl;
				cout << "" << endl;
				cout << "     > " << words[randomWord] << " <" << endl;
				cout << "" << endl;
				cout << "####################" << endl;
				cout << "" << endl;
				cout << "" << endl;
				cout << "> ";
				cin >> controlWord;

				if (controlWord == words[randomWord]) {
					score++;

					if (score >= 2) {
						combo++;
					}

					system("cls");
				}

				else {
					combo = 0;
					system("cls");
				}
			}

			else {
				Sleep(2000);
				break;
			}
		}
	}

	return 0;
}