//평균 - 브론즈 1
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    //cin.tie(NULL); ios_base::sync_with_stdio(false);
    int n;
    char* scoreChar = new char[10000];
    cin >> n;
    cin.ignore();
    double* score = new double[n];
    double avg = 0.0;
    cin.getline(scoreChar,10000);
    
    for (int i = 0; i < n; ++i) {
        score[i] = atoi(scoreChar);
        if(score[i]/10 < 1) scoreChar = scoreChar + 2;
        else if (*(score+i) == 100) scoreChar = scoreChar + 4;
        else scoreChar = scoreChar + 3;    
    }
    double maxScore = *max_element(score, score+n);
    for (int j = 0; j < n ; ++j) {
        *(score+j) =  *(score+j) / maxScore * 100;
        avg += *(score+j);
    }
    avg /= n;
    cout << avg;
    delete[] score;
    return 0;
}
