#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// Function to convert a string to lowercase
string toLowerCase(string text) {
    transform(text.begin(), text.end(), text.begin(), ::tolower);
    return text;
}
int main() {
    const int totalQuestions = 10;
  string questions[totalQuestions] = {
        "What is the capital of Bangladesh?",
        "What is the capital of India?",
        "What is the capital of Italy?",
        "What is the capital of Spain?",
        "What is the capital of Portugal?",
        "What is the capital of Pakistan?",
        "What is the capital of the United Kingdom?",
        "What is the capital of Ireland?",
        "What is the capital of Belgium?",
        "What is the capital of the Netherlands?"
    };
string answers[totalQuestions] = {
        "dhaka",
        "new delhi",
        "rome",
        "madrid",
        "lisbon",
        "islamabad",
        "london",
        "dublin",
        "brussels",
        "amsterdam"
    };
    int score = 0;
    string userAnswer;

    cout << "=============================\n";
    cout << "  🧠 European Capitals Quiz  \n";
    cout << "=============================\n";

    for (int i = 0; i < totalQuestions; ++i) {
        cout << "\nQuestion " << (i + 1) << ": " << questions[i] << endl;
        cout << "Your answer: ";
        getline(cin, userAnswer);

        // Convert user input to lowercase before comparing
        if (toLowerCase(userAnswer) == answers[i]) {
            cout << "✅ Correct!" << endl;
            score++;
        } else {
            cout << "❌ Wrong! The correct answer is " 
                 << char(toupper(answers[i][0])) << answers[i].substr(1) << "." << endl;
        }
    }

    cout << "\n=============================\n";
    cout << "Quiz complete! You scored " << score << " out of " << totalQuestions << "." << endl;

    // Optional feedback
    if (score == totalQuestions)
        cout << "🏆 Excellent! You are a geography genius!" << endl;
    else if (score >= 7)
        cout << "👏 Great job! You know your capitals well!" << endl;
    else if (score >= 4)
        cout << "🙂 Not bad, but you can do better!" << endl;
    else
        cout << "😅 Keep practicing! You will get there!" << endl;

    cout << "=============================\n";

    return 0;
}
