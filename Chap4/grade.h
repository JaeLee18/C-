#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <vector>
#include "student_info.h"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);



double grade(double midterm, double final, double homework){
	return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double>& hw){
	if (hw.size() == 0){
		throw domain_error("student has done no homework");
	}

	// overloading
	return grade(midterm, final, median(hw));
}

double grade(const Student_info& s){
	return grade(s.midterm, s.final, s.homework);
}
#endif