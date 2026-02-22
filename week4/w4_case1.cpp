// Case Study 1: Grading a Multi-Choice Test
// Automatically grade multiple-choice test answers for multiple students using 2D arrays
// Each row represents one student's answers
// Each column represents a question
// Compare student answers with the key array

#include <iostream>
using namespace std;

int main()
{
    int numStudents, numQuestions;

    cout << "Enter number of students: ";
    cin >> numStudents;

    cout << "Enter number of questions: ";
    cin >> numQuestions;

    // Declare arrays
    char answerKey[numQuestions];
    char studentAnswers[numStudents][numQuestions];
    int scores[numStudents];

    // Input answer key
    cout << "\nEnter answer key (e.g., A B C D): " << endl;
    for (int i = 0; i < numQuestions; i++)
    {
        cin >> answerKey[i];
    }

    // Input student answers
    for (int i = 0; i < numStudents; i++)
    {
        cout << "\nEnter answers for Student " << i + 1 << ": " << endl;
        for (int j = 0; j < numQuestions; j++)
        {
            cin >> studentAnswers[i][j];
        }
    }

    // Grade each student's test
    cout << "\n--- GRADING RESULTS ---" << endl;
    for (int i = 0; i < numStudents; i++)
    {
        int correctCount = 0;

        // Compare with answer key
        for (int j = 0; j < numQuestions; j++)
        {
            if (studentAnswers[i][j] == answerKey[j])
            {
                correctCount++;
            }
        }

        scores[i] = correctCount;

        // Display results
        cout << "\nStudent " << i + 1 << ":" << endl;
        cout << "  Correct answers: " << correctCount << "/" << numQuestions << endl;
        cout << "  Score: " << (correctCount * 100.0 / numQuestions) << "%" << endl;

        // Show detailed comparison
        cout << "  Answers: ";
        for (int j = 0; j < numQuestions; j++)
        {
            cout << studentAnswers[i][j];
            if (studentAnswers[i][j] == answerKey[j])
            {
                cout << "✓ ";
            }
            else
            {
                cout << "✗ ";
            }
        }
        cout << endl;
    }

    // Display answer key for reference
    cout << "\nAnswer Key: ";
    for (int i = 0; i < numQuestions; i++)
    {
        cout << answerKey[i] << " ";
    }
    cout << endl;

    return 0;
}




double min(double array[], int n) {
    double minimum = array[0];      
    for (int i = 1; i < n; i++) {
        if (array[i] < minimum) {
            minimum = array[i];      
        }
    }
    return minimum;
}