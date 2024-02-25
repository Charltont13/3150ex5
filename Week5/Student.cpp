
#include "Student.h"
#include <numeric>
#include <iostream>

double StudentScoreCalculator::calculateTotalScore(const Student& student) {
    double homework_total = std::accumulate(student.hw_grades.begin(), student.hw_grades.end(), 0.0);
    double homework_average = homework_total / student.hw_grades.size();
    double total_score = student.midterm * 0.3 + student.final * 0.3 + homework_average * 0.4;
    return total_score;
}

void StudentScoreCalculator::printStudent(const Student& student) {
    std::cout << "Student ID: " << student.id << "\n"
              << "Name: " << student.name << "\n"
              << "Midterm: " << student.midterm << "\n"
              << "Final: " << student.final << "\n"
              << "Total Class Score: " << calculateTotalScore(student) << std::endl;
}
