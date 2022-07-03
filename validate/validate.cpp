#include<iostream>
using namespace std;

int countNumberOfDigits(long number) {
    int count = 0;
    while(number != 0) {
        number = number / 10;
        count++;
    }
    return count;
}
int main() {
    long CCNumber, divisor = 10;
    cout << "Enter Credit Card Number: " << endl;
    cin >> CCNumber;

    long CloneCCNumber = CCNumber;
    int sum = 0;

    // 1st case
    while(CloneCCNumber > 0)
    {
        int lastDigit = CloneCCNumber % 10; // get the last digit
        sum += lastDigit;
        CloneCCNumber /= 100; 
    }

    // 2nd case
    CloneCCNumber = CCNumber;
    CloneCCNumber /= 10;
    while(CloneCCNumber > 0)
    {
        int lastDigit = CloneCCNumber % 10; 
        lastDigit *= 2;
        sum += (lastDigit % 10) + (lastDigit / 10);
        CloneCCNumber /= 100;
    }

    CloneCCNumber = CCNumber;
    int numberOfDigits = countNumberOfDigits(CloneCCNumber);
    // to get first two two digit of a number and the number of digits in number is 6, then we need to divide it by 10000!
    
    // setting up the divisor
    for(int i=0;i<numberOfDigits-2;i++){
        divisor *= 10;
    }

    // cout << numberOfDigits << " " << divisor << " " << CloneCCNumber / divisor;

    int firstDigit = CloneCCNumber / divisor;
    int firstTwoDigits = CloneCCNumber / (divisor / 10);

    // conduct the final checks
    if(sum % 10 == 0) 
    {
        if ((firstTwoDigits == 34 || firstTwoDigits == 37) && (numberOfDigits == 15)) {
            cout << "It is American Express" << endl;
        }
        else if((firstTwoDigits == 51 || firstTwoDigits == 52 || firstTwoDigits == 53 || firstTwoDigits == 54 || firstTwoDigits == 55) && (numberOfDigits == 16)) {
            cout << "It is MasterCard" << endl;
        }
        else if((firstDigit == 4) && (numberOfDigits == 13 || numberOfDigits == 16)) {
            cout << "It is Visa" << endl;
        }
        else {
            cout << "Could not recognize but valid credit card number" << endl;
        }
    }
    else {
        cout << "Invalid Credit Card Number" << endl;
    }
}