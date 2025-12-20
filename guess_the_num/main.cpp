#include<iostream>
#include<random>

using namespace std;

constexpr int MINI = 0;
constexpr int MAX = 100;
constexpr int EXIT = 404;

int rando(){
    static mt19937 generator(random_device{}());

    uniform_int_distribution<int> distri(MINI, MAX);
    return distri(generator);
}

void play_guess(){
    int secret = rando();
    int guess;
    int attempts = 0;

    cout << "Guess a number between " << MINI << " and " << MAX << "\n";

    while(true){
        cin>> guess;
        attempts++;

        if(!cin){
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"Invalid Input!! Try again:)\n";
            continue;
        }

        if (guess > secret) {
            cout << "Too high. Try again.\n";
        } else if (guess < secret) {
            cout << "Too low. Try again.\n";
        } else {
            cout << "Correct! You guessed it in " << attempts << " attempts.\n\n";
            break;
        }
    }
}

int main(){
    while (true) {
        cout << "-----------------------------\n";
        cout << "Press 1 to play\n";
        cout << "Press " << EXIT << " to exit\n";
        cout << "-----------------------------\n";

        int choice;
        cin >> choice;

        if (!cin) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input.\n";
            continue;
        }

        if (choice == 1) {
            play_guess();
        } else if (choice == EXIT) {
            cout << "Goodbye!\n";
            break;
        } else {
            cout << "Wrong choice.\n";
        }
    }
}
