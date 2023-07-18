#include <iostream>

using namespace std;

int main() {
    int startTime;
    int endTime;
    int duration;

    cin >> startTime >> endTime;

    if (startTime >= endTime) {
        duration = (24 - startTime) + endTime;
    } else {
        duration = endTime - startTime;
    }

    cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;

    return 0;
}
