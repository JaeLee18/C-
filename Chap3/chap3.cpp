#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::setprecision;
using std::cout; using std::string;
using std::endl; using std::streamsize;

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

	// Get the current precison level
	// setprecision(prec): resotre to the current precision level
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
	<< 0.2 * midterm + 0.4 * final + 0.4 * sum / count
	<< setprecision(prec) << endl;
}