//덩치 - 실버 5

#include <algorithm>
#include <iostream>
using namespace std;

struct Dungchi {
    int weight = 0, height = 0, rank = 1;
    bool operator>(Dungchi);
    bool operator<(Dungchi);
};
bool Dungchi::operator>(Dungchi d) { 
    return (weight > d.weight) && (height > d.height);
}
bool Dungchi::operator<(Dungchi d) { 
    return (weight < d.weight) && (height < d.height); 
}

int main() {
    int N;
    cin >> N;
    vector<Dungchi> d;
    for (int i = 0; i < N; i++) {
        int w, h;
        cin >> w >> h;
        Dungchi temp = {w, h};
        auto it = d.begin();
        while (it != d.end()) {
            if (*it < temp) (*it).rank++;
            else if (*it > temp) temp.rank++;
            it++;
        }
        d.push_back(temp);
    }
    for(int i = 0 ; i < N; i++) {
        cout << d[i].rank << " ";
    }
}
