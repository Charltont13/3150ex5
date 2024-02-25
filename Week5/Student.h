
#include <string>
#include <vector>

struct Student {
    int id;
    std::string name;
    int final;
    int midterm;
    std::vector<int> hw_grades;
};

class StudentScoreCalculator {
public:
    double calculateTotalScore(const Student& student);
    void printStudent(const Student& student);
};
