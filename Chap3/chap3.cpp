#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

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
	while (cin >> x){
		count += 1;
		sum += x;
	}

	// Get the current precison level
	// setprecision(prec): resotre to the current precision level
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
	<< 0.2 * midterm + 0.4 * final + 0.4 * sum / count
	<< setprecision(prec) << endl;
}