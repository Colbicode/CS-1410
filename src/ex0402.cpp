#include <iostream>
#include <iomanip>
using namespace std;

enum class Bill{
    ONE, FIVE, TEN, TWENTY
};

struct Amount {
    Bill bill;
    int amount;
};

struct Cash {
    Amount ones;
    Amount fives;
    Amount tens;
    Amount twenties;
};

int totalCash(Cash& c) {
    return (
        c.ones.amount * 1 +
        c.fives.amount * 5 +
        c.tens.amount * 10 +
        c.twenties.amount * 20
    );
}

int main(){
    Cash inWallet {
        {Bill::ONE, 2},
        {Bill::FIVE, 3},
        {Bill::TEN, 1},
        {Bill::TWENTY, 3}
    };

    int t;
    cout << "You have " << totalCash(inWallet) << " dollars in your wallet!" << endl;
    return 0;
}