#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3, result;

    result = (a += 2, b += 4, a + b);

    cout << "Final result: " << result << endl;

    return 0;
}
