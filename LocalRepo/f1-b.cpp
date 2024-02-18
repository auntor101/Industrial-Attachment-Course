#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 10, 15, 20, 25}; // Example array of numbers
    int sum = 0;
    int count = sizeof(numbers) / sizeof(numbers[0]); // Calculate the number of elements

    for(int i = 0; i < count; i++) {
        sum += numbers[i]; // Summing the numbers
    }

    double average = double(sum) / count; // Calculating the average
    cout << "Average: " << average << endl;

    return 0;
}
