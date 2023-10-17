#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    int min = 1;
    int max = 100;
    int secretNumber = rand() % (max - min + 1) + min;
    int maxAttempts = 7;
    int attempts = 0;
    int guess;

    cout << "Bienvenue dans le jeu de devinette de nombres!" << endl;
    cout << "Je pense à un nombre entre " << min << " et " << max << ". Vous avez " << maxAttempts << " tentatives pour deviner." << endl;

    while (attempts < maxAttempts) {
        cout << "Tentative " << attempts + 1 << " : Entrez un nombre : ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Bravo, vous avez deviné le nombre " << secretNumber << " en " << attempts + 1 << " tentatives!" << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Trop bas. Essayez à nouveau." << endl;
        } else {
            cout << "Trop haut. Essayez à nouveau." << endl;
        }

        attempts++;
    }

    if (attempts >= maxAttempts) {
        cout << "Vous avez atteint le nombre maximal de tentatives. Le nombre était " << secretNumber << "." << endl;
    }

    return 0;
}
