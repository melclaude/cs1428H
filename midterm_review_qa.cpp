// Melissa Claude
// A04772481

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double inst, price, tip, total;

    cout << "Input the price of the meal: " << endl;
    cin >> price;
    cout << "How much do you want to tip: " << endl;
    cin >> tip;

   tip = tip / 100.00;
   total = price * tip;
   cout << "Your tip should be $" << total << "." <<endl;
   total = total + price;
   cout << "The total of your meal is $" << total << "." << endl;
    return 0;

}
