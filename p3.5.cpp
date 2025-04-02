/*A data analytics company was tasked with developing a unique digital signature system based on the
concept of "super digits." The system required finding a single-digit representation of a given number
through recursive digit summation. The algorithm was defined as follows:
If the number has only one digit, it is its super digit. Otherwise, the super digit is the super digit of the
sum of its digits, repeated recursively until a single digit is obtained.
The challenge involved an additional complexity—constructing the number by concatenating a given
string representation of an integer multiple times. For example, if the number n was represented as a
string and concatenated k times, the super digit of the resulting number needed to be calculated.
For instance:
Given n = 9875 and k = 4, the number is represented as 9875987598759875.
The sum of digits in this number is calculated recursively until a single digit remains:
9 + 8 + 7 + 5 + 9 + 8 + 7 + 5 + 9 + 8 + 7 + 5 + 9 + 8 + 7 + 5 = 116
1 + 1 + 6 = 8
The super digit is 8.
The system was required to handle large numbers efficiently by leveraging mathematical insights
rather than explicitly constructing large concatenated strings. This case study called for implementing
a recursive solution to calculate the super digit, supported by a mathematical approach to optimize
the handling of repeated sums.*/

#include <iostream>
#include <string>
using namespace std;

// Function to calculate the super digit recursively
int super_digit(int x)
 {

    if (x < 10)
        {
        return x;
    }


    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }

    return super_digit(sum);
}
int main()
{
    int n,k;

    cout<<"enter a number you want superdigit of and also enter repetative number :";
    cin>>n>>k;


    int result ;

    result=super_digit(n);

    int newr=result*k;


    cout<<endl<<endl<<"answer is :"<<super_digit(newr);
    return 0;
}
