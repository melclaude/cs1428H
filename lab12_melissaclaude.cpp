#include <iostream>
using namespace std;

int sumNumbers(int value);
int fibonacci(int value);

int main(){

    int n1, n2;
    cout << "Insert a number to find the factorial." << endl;
    cin >> n1;

    int answer = sumNumbers(n1);
    cout << n1 << " factorial is " << answer << endl;

    cout << "Insert a number for calculate Fibonacci up until that number." << endl;
    cin >> n2;
    int fibanswer = fibonacci(n2);

    //only shows some values
    /*for (int counter = 0; counter < n2; counter++){
        cout << fibonacci(counter) << " ";
        counter += 1;
    }
    */
    cout << endl << "The Fibonacci sequence up to " << n2 << " is " << fibanswer;







    return 0;


}
int sumNumbers(int val)
{
// When to stop
if (val == 1)
    return val;
return val * sumNumbers(val-1);
}

int fibonacci(int val)
{
// When to stop
if (val == 1)
    return val;
else if (val == 0)
    return val;
else

     return fibonacci(val-1) + fibonacci(val-2);

}
