#include "/public/read.h"
#include <fstream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

void die() {
	cout << "You dun goofed.\n";
	exit(0);
}

int main() {
	//But on one line instead of three, because I'm cool like that
	string filename = read("Please enter a filename:\n");
//	cin >> filename;
	ifstream case_file(filename);
	if (!case_file) die();

	int N = 0;;
	case_file >> N;
	vector<int> case_name;
	vector<int> choices;


	for (int i = 0; i < N; i++) {
		int userInput = 0;
		case_file >> userInput;
		case_name.push_back(userInput);
	}
	int userVal = 0;
	cout << "Please enter a briefcase to open" << endl;
	while (true) {
		cin >> userVal;
		//	for (int i = 0; i < case_name.size(); i++)
		if (userVal > 0 && userVal <= case_name.size())
			cout << "that case contained " << case_name.at() << endl;
		if (userVal == -1) break;
	}
//Next...
//Do you remember how to open a file? check
//How to check to see if the file opened successfully? Check
//How do you store data in a vector?
//How do you average values across a vector?
}
