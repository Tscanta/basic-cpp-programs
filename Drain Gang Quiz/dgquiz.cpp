#include <iostream>
using namespace std;

int main() {
    char quess;
    int score;

    string questions[] = {"1. What is bladee's real name?:- \n","2. What does Ecco2k's father do?:- \n","3. Who is the Legendary Member?:- \n", "4. What case did Thaiboy fight against?:- \n"};

    string options[][4] = {{"A. Benjamin Reichwald | B. Bob Garnish | C.X | D. X"},{"A. X | B. X | C. Fashion Designer | D. X"}, {"A. Ecco2k | B. Thaiboy Digital | C. Whtiearmor | D. Yung Shermen"}, {"A. Coke | B. Deportation | C. Arson  | D. Physical Abuse"}};

    char answerKey[] = {'A','C','B','B'};

    int Qsize = sizeof(questions)/sizeof(questions[0]);

    //forloop for printing questions
    for (int i = 0; i < Qsize; i++)
    {
        cout << "------------------------------------------------------\n";
        cout << questions[i] << endl;
        // cout << "------------------------------------------------------\n";

        int Osize = sizeof(options[i])/sizeof(options[i][0]); //size of options

        //forloop for printing options
        for (int j = 0; j < Osize ; j++)
        {
            cout << options[i][j] << endl;
        }
    }
}