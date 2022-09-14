#include <iostream>
#include <string>

using namespace std;

string reverseString(string str);
int maxFunction(int a, int b, int c);
int factorial(int n);
int fibonacci(int n);

int main()
{
    string a = reverseString("Hello");
    cout << a << endl;

    int max = maxFunction(3, 20, 7);
    cout << max << endl;

    int fact = factorial(10);
    cout << fact << endl;

    int fib = fibonacci(10);
    cout << fib << endl;
}

string reverseString(string str) {
    int size = str.length();
    char temp;
    int j = size - 1;
    for (int i = 0; i < size/2; i++) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j--;
    }
    return str;
}

int maxFunction(int a, int b, int c) {
    int max;
    if (a >= b) {
        max = a;
    } else {
        max = b;
    }

    if (c > max) {
        max = c;
    }
    return max;
}

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    int a = 1;
    int b = 0;
    int total = 0;
    while (n > 0) {
        total = a + b;
        a = b;
        b = total;
        n--;
    }
    return b;
}
