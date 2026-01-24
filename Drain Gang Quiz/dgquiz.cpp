#include <iostream>
using namespace std;

int main() {
    char guess;
    int score = 0;

    string questions[] =
    {
        "1. What is bladee's real name?:-",
        "2. What does Ecco2k's father do?:-",
        "3. Who is the Legendary Member?:-",
        "4. What case did Thaiboy fight against?:-"
    };

    string options[][4] =
    {
        {"A. Benjamin Reichwald       C. Sonny Moore\n"
               " B. Bob Garnish              D. Benjamin Reichness"},
        {"A. Music Producer           C. Fashion Designer\n"
               " B. Artist Manager           D. Band Member"},
        {"A. Ecco2k                   C. WhiteArmor\n"
               " B. Thaiboy Digital          D. Yung Sherman"},
        {"A. Coke                     C. Arson\n"
               " B. Deportation              D. Physical Abuse"}
    };

    char answerKey[] = {'A','C','B','B'};

    int Qsize = sizeof(questions)/sizeof(questions[0]);

    //forloop for printing questions
    for (int i = 0; i < Qsize; i++)
    {
        cout << "------------------------------------------------------\n";
        cout << questions[i] << '\n';
        cout << "------------------------------------------------------\n";


        //forloop for printing options
        int Osize = sizeof(options[i])/sizeof(options[i][0]); //size of options
        for (int j = 0; j < Osize ; j++)
        {
            cout << " " << options[i][j];
        }
        cout << endl;
        cout << "------------------------------------------------------\n";


        //user input
        cout << "Your answer: ";
        cin >> guess;
        guess = toupper(guess);

        //VALIDATION
        if (guess != 'A' && guess != 'B' && guess != 'C' && guess != 'D')
        {
            cout << "INVALID ENTRY. Must be A, B, C, or D.\n";
            i--; //Repeats the question
            continue;
        }

        if (guess == answerKey[i])
        {
           cout << "C O R R E C T  A N S W E R\n";
            score++;
        }
        else
        {
            cout << "W R O N G  A N S W E R\n";
            cout << "The correct answer is: " << answerKey[i] << endl;
        }
    }

    //SCORE
    cout << "------------------------------------------------------\n";
    cout << "                      RESULTS                         \n";
    cout << "------------------------------------------------------\n";
    cout << "Total Correct Guesses: " << score << '\n';
    cout << "Total No. of Questions: " << Qsize << '\n';
    cout << "Your score: " << ((double)score/Qsize)*100 << "%" << '\n';
    cout << "------------------------------------------------------\n";
}