#include <iostream>
using namespace std;


void select_sort(int arr[], int sizes);
int linear_search(int arr[12], int sizes, int value);
bool prime_or_nah(int num);
bool happy_or_nah(int num);
bool AddToCycle(int);


int main(){

    int num =17;
    int my_arr[12] = {10, 12 ,3, 5, 2, 6, 13, 1, 9, 27, 15, 21};
    int append_arr[20];
    prime_or_nah(num);
    select_sort(my_arr, 12);
    linear_search(my_arr, 12, num);



return 0;
}

void select_sort(int arr[], int sizes){
    int start_here, minIndex, minValue;
    for (start_here = 0; start_here < sizes; start_here++)
    {
        minIndex= start_here;
        minValue = arr[start_here];
        for (int index = start_here + 1; index < sizes; index++)
        {
            if (arr[index] < minValue){
                minValue = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[start_here];
        arr[start_here] = minValue;
    }
}

int linear_search(int arr[12], int sizes, int value ){
    int index = 0;
    int position = -1;
    bool found = false;
    while (index < sizes && !found){
            if (arr[index] == value){
                found = true;
                position = index;
            }
            index++;
    }
    return position;
}


bool prime_or_nah(int num){

    for (int i = 2; i < num/2; i++){
    if (num % i == 0){
            return false;
    return true;
}
    }
}

bool happy_or_nah(int num){

    //int nums = 19;
    int digit;
    int sum = 0;
    while (num > 0)
    {
        digit = (num % 10);
        sum += digit * digit;
        num /= 10;

    }
    num = sum;

if(num ==1)
    return true;
return false;
}











