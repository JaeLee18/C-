#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <iostream>
#include <string>
#include <vector>

struct Student_info{
	std::string name;
	double midterm, final;
	std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);




istream& read(istream& is, Student_info& s){
	is >> s.name >> s.midterm >> s.final;
	read_hw(is, s.homework);
	return is;
}

bool compare(const Student_info& x, const Student_info& y){
	return x.name < y.name;
}

istream& read_hw(istream& in, vector<double>& hw){
	if (in){
		hw.clear();

		double x;

		while(in >> x){
			hw.push_back(x);
		}

		in.clear();
	}
	return in;
}
#endif