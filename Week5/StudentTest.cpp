// StudentTest.cpp
#include "Student.h"
#include <iostream>

void test_student_score() {
    Student s = {1, "John Doe", 80, 70, {100, 90, 80}};
    StudentScoreCalculator calculator; 
    double score = calculator.calculateTotalScore(s); 
    double expected_score = 70 * 0.3 + 80 * 0.3 + (100 + 90 + 80) / 3.0 * 0.4;

    if (score == expected_score) {
        std::cout << "Test passed!" << std::endl;
    } else {
        std::cout << "Test failed: Expected " << expected_score << ", got " << score << std::endl;
    }
}

int main() {
    test_student_score();

    return 0;
}
