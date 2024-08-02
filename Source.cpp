#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function Declarations
void startDay();
void morningRoutine();
void afternoonRoutine();
void eveningRoutine();
void exercise();
void eatBreakfast();
void gotoWork();
void continueWorking();
void sleepIn();
void doHomework();
void playvideoGames();
void haveLunch();
void takeNap();
void continueWorking();
void watchTV();
void haveDinner();
void gotoBed();
bool playAgain();

int main() {
	string name;

	cout << "Welcome to your interactive day simulation! \n";
	cout << "Please enter your name: ";
	getline(cin, name);
	cout << "Hello " << name << "! Lets start your day! \n";

	startDay();

	return 0;
}

//Function Definitions
void startDay() {
	morningRoutine();
	while (true) {
		if (!playAgain()) {
			cout << "Thank you for playing! Goodbye!\n";
			break;
		}
		else {
			morningRoutine();
		}
	}
}

void morningRoutine() {
	int choice;
	cout << "\nIt's morning. What would you like to do?\n";
	cout << "1. Sleep In\n";
	cout << "2. Exercise\n";
	cout << "3. Have Breakfast\n";
	cout << "4. Play Video Games\n";
	cout << "5. Watch TV\n";
	cout << "6. Go To Work\n";
	cout << "7. Do Homework\n";
	cout << "8. Exit\n";
	cout << "Enter your choice: ";
	cin >> choice;

	if (choice == 1) {
		sleepIn();
	}
	else if (choice == 2) {
		exercise();
	}
	else if (choice == 3) {
		eatBreakfast();
	}
	else if (choice == 4) {
		playvideoGames();
	}
	else if (choice == 5) {
		watchTV();
	}
	else if (choice == 6) {
		gotoWork();
	}
	else if (choice == 7) {
		doHomework();
	}
	else if (choice == 8) {
		cout << "Exiting the program.\n";
		exit(0);
	}
	else {
		cout << "Invalid choice! Pleast try again.\n";
		morningRoutine();
		return;
	}

	afternoonRoutine();
}

void afternoonRoutine() {
	int choice;
	cout << "It's afternoon. What would you like to do?\n";
	cout << "1. Have Lunch\n";
	cout << "2. Continue Working\n";
	cout << "3. Take a Nap\n";
	cout << "4. Play Video Games\n";
	cout << "5. Watch TV\n";
	cout << "6. Do Homework\n";
	cout << "7. Exit\n";
	cout << "Enter your choice: ";
	cin >> choice;

	if (choice == 1) {
		haveLunch();
	}
	else if (choice == 2) {
		continueWorking();
	}
	else if (choice == 3) {
		takeNap();
	}
	else if (choice == 4) {
		playvideoGames();
	}
	else if (choice == 5) {
		watchTV();
	}
	else if (choice == 6) {
		doHomework();
	}
	else if (choice == 7) {
		cout << "Exiting the program\n";
		exit(0);
	}
	else {
		cout << "Invalid choice! Please try again.\n";
		afternoonRoutine();
		return;
	}

	eveningRoutine();
}

void eveningRoutine() {
	int choice;
	cout << "\nIt's evening. What would you like to do?\n";
	cout << "1. Exercise\n";
	cout << "2. Have Dinner\n";
	cout << "3. Watch TV\n";
	cout << "4. Go to Bed\n";
	cout << "5. Restart the Day\n";
	cout << "6. Exit\n";
	cout << "Enter your choice: ";
	cin >> choice;

	if (choice == 1) {
		exercise();
	}
	else if (choice == 2) {
		haveDinner();
	}
	else if (choice == 3) {
		watchTV();
	}
	else if (choice == 4) {
		gotoBed();
	}
	else if (choice == 5) {
		cout << "Restarting the day...\n";
		morningRoutine();
		return;
	}
	else if (choice == 6) {
		cout << "Exiting the program.\n";
		exit(0);
	}
	else {
		cout << "Invalid choice! Please try again.\n";
		eveningRoutine();
		return;
	}
}

void exercise() {
	cout << "You chose to exercise. Enjoy your workout!\n";
}

void eatBreakfast() {
	cout << "You chose to eat breakfast. Enjoy your meal!\n";
}

void gotoWork() {
	cout << "You chose to go to work. Be productive!\n";
}

void continueWorking() {
	cout << "You chose to continue working. Keep it up!\n";
}

void sleepIn() {
	cout << "You chose to sleep in. Enjoy the rest!\n";
}

void doHomework() {
	cout << "You chose to do homework. Be productive and no distractions!\n";
}

void playvideoGames() {
	cout << "You chose to play video games. Lets get that high score!\n";
}

void haveLunch() {
	cout << "You chose to eat lunch. Enjoy your meal!\n";
}

void takeNap() {
	cout << "You chose to take a nap. Enjoy the additional rest!\n";
}

void watchTV() {
	cout << "You chose to watch TV. Go ahead and binge your favorite show!\n";
}

void haveDinner() {
	cout << "You chose to eat dinner. Enjoy your meal!\n";
}

void gotoBed() {
	cout << "You chose to go to bed. Goodnight!\n";
}

bool playAgain() {
	char choice;
	cout << "\nWould you like to play again? (y/n): ";
	cin >> choice;
	return (choice == 'y' || choice == 'Y');
}