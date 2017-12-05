#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void betFunc(int & myMoney,int & bet);
void getRolls(int & compDie1, int & userDie1);
void results(int & compDie1, int & userDie1, int & myMoney, int & bet);


int main(){
    int total= 1000;
    int user_roll, comp_role, bet_amount;
    bool play = true;
    cout << "Gambling is an addiction...." << endl;

    do{
        betFunc(total, bet_amount);
        getRolls(user_roll, comp_role);
        results(comp_role, user_roll, total, bet_amount);


        char play_again;
        cout << "Would you like to continue?" << endl;
        cin >> play_again;

        switch(play_again){
            case 'n':
            case 'N':
                    cout << "You ended with $" << total << endl;
                    play=false;
                    break;
            default: break;
        }

    }while(play==true && total > 0);
return 0;
}

void betFunc(int & myMoney,int & bet){
    bool check_bet = false;
    cout << "You currently have $" << myMoney << endl;
    cout << "How much do you bet?" << endl;
    cin >> bet;
    while (!check_bet){
        if (bet > myMoney || bet < 0){
            cout << "Incorrect bet amount." << endl;
            cin >> bet;
        }
        else
        {
            check_bet = true;
        }
    }
    cout << "$" << bet << endl;

}
void getRolls(int & compDie1, int & userDie1){
    srand(time(NULL));
    compDie1= rand() % 6+1;
    userDie1 = rand() % 6+1;
    cout << "You rolled a " << userDie1 << endl;
    cout << "Your opponent rolled a " << compDie1 << endl;

}

void results(int & compDie1, int & userDie1, int & myMoney, int & bet){
    if (compDie1 < userDie1){
        cout << "You lost $" << bet << endl;
        myMoney = myMoney - bet;
        if (myMoney <= 0){
            cout << "You ran out of money." << endl;
        }
    }
    else if (compDie1 > userDie1){
        myMoney = myMoney + bet;
        cout << "You gain $" << bet << endl;
    }
    else{
        cout << "It was a draw." << endl;

    }

}



