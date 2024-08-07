#include <iostream>
using namespace std;

int main() 
{
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;
    
    int credits;
    double totalCredits = 0;
    double totalGradePoints = 0;

    for (int i = 1; i <= numSubjects; ++i)
 {
     string subjectName;
     cout <<"==============================================\n"; 
    cout << "Type your "<< i << " subject name : "; 
    cin >> subjectName;
    
        
        cout << "Enter credit hours for Subject " << i << ": ";
        cin >> credits;

        char grade;
        cout << "Enter grade (A,a B,b C,c D,d F,f) for Subject " << i << ": ";
        cin >> grade;

        double gradePoints;

        switch (grade)
 {
            case 'A': 
            gradePoints = 4.0;
            break;
            case 'a':
                gradePoints = 4.0;
                break;
            case 'B':
            gradePoints = 3.0;
                break; 
            case 'b':
                gradePoints = 3.0;
                break;
            case 'C':
            gradePoints = 2.0;
                break;
            case 'c':
                gradePoints = 2.0;
                break;
            case 'D':
            gradePoints = 1.0;
                break;
            case 'd':
                gradePoints = 1.0;
                break;
            case 'F':
            gradePoints = 0.0;
                break;
            case 'f':
                gradePoints = 0.0;
                break;
            default:
                cout << "Invalid grade entered. Exiting.";
                return 1;
        }
        // cout << "Grade for your subjectname is: " << subjectName;

        totalCredits += credits;
        totalGradePoints += credits * gradePoints;
    }

    if (totalCredits > 0)
 {
        double cgpa = totalGradePoints / totalCredits;
        cout << "CGPA: " << cgpa << endl;
    } 
    else 
{
        cout << "Error! Total credits cannot be zero. Exiting." << endl;
        
    }

    return 0;
}