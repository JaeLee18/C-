#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin; using std::setprecision;
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::sort; using std::vector;

int main(){
	cout << "Your name is : ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	cout << "Enter your midterm and final exam grades: ";
	double midterm, final;
	cin >> midterm >> final;

	cout << "Enter all your hw grades, "
	"followed by end-of-file(Ctrl+D): ";

	int count = 0;
	double sum = 0;

	double x;
	// >> returns "cin" in this case, if there are no inputs then
	// it returns False.
	/*
		"cin" returns False when
		1. EOF
		2. No type-matched
		3. System detects any malfuncitons from input hardwares.
	*/

	/*
	Using while statement, no way to calculate median, so use Vector
	while (cin >> x){
		count += 1;
		sum += x;
	}
	*/

	std::vector<double> homework;
	while(cin >> x){
		homework.push_back(x);
	}

	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0){
		cout << endl << "Must endter at least one grade. " << endl;
		return 1;
	}
	sort(homework.begin(), homework.end());

	vec_sz mid = size / 2;
	double median;

	median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];


	// Get the current precison level
	// setprecision(prec): resotre to the current precision level
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
	<< 0.2 * midterm + 0.4 * final + 0.4 * median
	<< setprecision(prec) << endl;
}