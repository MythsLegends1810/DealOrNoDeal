
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

	int N = 0; // breifcases
	case_file >> N;
	if (N < 2) die();
	vector<int> case_name;
	vector<int> choices;


	for (int i = 0; i < N; i++) {
		int casevalue = 0; // dollar amount
		case_file >> casevalue;
		if (!case_file) die();
		case_name.push_back(casevalue);
	}
	int userVal = 0;
	cout << "Please enter a briefcase to open: " << endl;
	while (true) {
		cin >> userVal; // briefcase to open
		int avg = 0;

		if (userVal == -1) {
			cout << " you won " << avg << " dollars" << endl;

			if (userVal <  0 || userVal >=  case_name.size())  die();
			if (case_name.at(userVal) == 0) die();
			cout << "That briefcase held " << case_name.at(userVal) << " dollars" <<  endl;
			case_name.at(userVal) = 0; // case is now empty after read

			int total = 0;
			int count = 0;

			for (int i = 0; i < case_name.size(); i++) {
				int Casevalue = case_name.at(i);
				total += Casevalue;
				count ++;
			}

			if (count == 1) {
				for (int i = 0; i < case_name.size(); i++) {
					if (case_name.at(i) != 0) {
						cout << " you won " << case_name.at(i) << " dollars" << endl;

					}
				}

			}







			if (count > 0) {
				avg = total / count;
			}

			cout << "I will offer you " << avg << " dollars to walk away" << endl;






//Next...
//Do you remember how to open a file?
//How to check to see if the file opened successfully?
//How do you store data in a vector?
//How do you average values across a vector?



		}

	}
}
