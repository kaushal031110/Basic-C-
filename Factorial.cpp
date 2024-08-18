#include <iostream>
using namespace std;
int main() {
int n;
float factorial = 1.0;
cout << "Enter a number: ";
cin >> n;
if (n < 0)
cout << " factorial is:";
else {
for(int i = 1; i <= n; ++i) {
factorial *= i;
}
cout << "Factorial of " << n << " = " << factorial;    
}   
return 0;
}
