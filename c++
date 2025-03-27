#include <iostream>

using namespace std;


double harmonic(int n) {
    if (n == 1) 
        return 1.0;
    return 1.0 / n + harmonic(n - 1);
}


double harmonic() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    return harmonic(n);
}

int main() {
    int n;
    cout << "Enter value for n: ";
    cin >> n;
    
    cout<<"question4-";

    cout << "Harmonic number H_" << n << " (recursive): " << harmonic(n) << endl;
    cout<<"question5-";
    cout << "Harmonic number H_n (overloaded function): " << harmonic() << endl;

    return 0;
}
