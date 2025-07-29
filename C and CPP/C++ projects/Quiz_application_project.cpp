#include <iostream>
using namespace std;

int playQuiz();  // Function prototype

int main() {
    int score = playQuiz();  // Call the function and get the score
    cout << "Your final score is: " << score << endl;
    return 0;
}

int playQuiz() {
    char c;
    char option;
    int score = 0;  // Initialize score to 0

    cout << "---------Welcome to Quiz Game---------" << endl;
    cout << "---------Please follow the rules---------" << endl;
    cout << "---------Please enter everything in small letters" << endl;
    cout << "Step 1: Quiz contains 10 questions" << endl;
    cout << "Step 2: You will be given 1 mark for each right answer" << endl;
    cout << "Step 3: There will be no negative marking" << endl;
    cout << "Step 4: Press s to start the quiz" << endl;
    cout << "Step 5: Please select option a, b, c" << endl;
    cin >> c;

    if (c == 's' || c == 'S') {
        // Question 1
        cout << "Q1. What is the capital of India?" << endl;
        cout << "(a) Delhi  (b) Mumbai  (c) Bhopal" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score += 1;
        }
        else 
        {
            cout<<"right answer is delhi\n";
        }
        {
            cout<<"  ";
        }

        // Question 2
        cout << "Q2. What is the name of the national bird?" << endl;
        cout << "(a) Peacock  (b) Sparrow  (c) Pigeon" << endl;
        cin >> option;
        if (option == 'a' || option == 'A') {
            score += 1;
        }
        else 
        {
            cout<<"right answer is peacock\n";
        }
        {
            cout<<"  ";
        }
        
       

    } else {
        cout << "You need to press 's' to start the quiz." << endl;
    } 
    // Question 3
    cout<<"Q3. What is the capital of Madhya Pradesh\n?"<<endl;
    cout<<"(a)Indore   (b) Jabalpur    (c) Bhopal"<<endl;
    cin>>option;

    if(option == 'c'|| option == 'C'){
        score +=1;
    }
    else {
        cout<<"right answer is Bhopal\n"<<endl;
    }
    cout<<"Q4. What is full form of BSF?"<<endl;
    cout<<"(a) Border Sir Field (b) Bhopal science force (c) Border Security Force"<<endl;

    return score;
}
