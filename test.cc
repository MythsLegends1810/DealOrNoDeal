
#include "/public/read.h"
#include <fstream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <numeric>
#include <algorithm>
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


	vector<int> case_name;
	vector<int> choices;
	int userVal = 0;
	while (true) {
		case_file >> userVal;
		if (!case_file) break;
		case_name.push_back(userVal);
	}
	int total = 0;
	int count = 0;
	int avg = 0;

	while (true) {
		cout << "Please enter a briefcase to open:" << endl;
		cin >> userVal; // briefcase to open
		if (userVal == -1) break;
		if (!cin || userVal < -1 || userVal > case_name.size()) die();
		cout << "That briefcase held " << case_name.at(userVal + 1) << " dollars" <<  endl;
		for (int i = 1; i < case_name.size(); i++) {
			total = accumulate((case_name.begin() + i), case_name.end(), 0);
			cout << total << endl;
			if (case_name.empty() || case_name.size() < 2)
				avg = 0;
			else avg = total / case_name.size();
			cout << avg << endl;
		}
		choices.push_back(userVal);

		if (userVal > case_name.size()) die();
		auto it = find(choices.begin(), choices.end(), userVal);
		if (case_name.empty() || case_name.size() < 2)
			avg = 0;
		else avg = total / case_name.size();
		cout << avg << endl;
	}
	// case is now empty after read
	/*		for (int i = 0; i < case_name.size(); i++) {
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

			if (userVal == -1) {
				cout << " you won " << avg << " dollars" << endl;



			} */

//Next...
//Do you remember how to open a file?
//How to check to see if the file opened successfully?
//How do you store data in a vector?
//How do you average values across a vector?





}
