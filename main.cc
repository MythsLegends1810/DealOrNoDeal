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

int main ()
{
	//But on one line instead of three, because I'm cool like that
	string filename = read("Please enter a filename:\n");
	ifstream case_file(filename);
	if (!case_file) die();

	size_t n = 0;
	if (n < 2) die();
	vector<int> case_name;
	vector<int> choices;
	int c = 0;

	//Next...
	//Do you remember how to open a file? check
	//How to check to see if the file opened successfully?
	//How do you store data in a vector?
	//How do you average values across a vector?
}
