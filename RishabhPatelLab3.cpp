#include <iostream>
#include <iomanip>
using namespace std;

void getScore(int &score);
void calcAverage(int scores[]);
int findLowest(int scores[]);

int main()
{
    int scores[5];

    for (int i = 0; i < 5; i++)
    {
        getScore(scores[i]);
    }

    calcAverage(scores);

    return 0;
}

void getScore(int& score)
{
    cout << "Enter a diving score: ";
    cin >> score;
    while (score < 0 || score > 10)
    {
        cout << "Error, Re-enter a diving score [0,10]: ";
        cin >> score;
    }
}

void calcAverage(int scores[])
{
    double sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += scores[i];
    }
    int lowestScore = findLowest(scores);
    sum -= lowestScore;
    double avgScore = sum / 4;
    cout << "After dropping the lowest score, ";
    cout << lowestScore;
    cout << ", the dividing average score is ";
    cout << avgScore << ".\n";
}

int findLowest(int scores[])
{
    int lowestScore = scores[0];
    for (int i = 1; i < 5; i++)
    {
        if (scores[i] < lowestScore)
        {
            lowestScore = scores[i];

        }

    }
    return lowestScore;
}