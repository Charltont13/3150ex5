
#include "Student.h"

int main() {
    Student student = {
        1, 
        "John Doe", 
        90, 
        85, 
        {10, 9, 8, 10, 9} 
    };

    StudentScoreCalculator calculator;
    calculator.printStudent(student);

    return 0;
}
