#include<iostream>
using namespace std;

bool is_prime(int p) {
    if (p < 2) {
        return false;
    }
    for (int i = 2; i<p; i++){
        if (p % i == 0) {
            return false;
        }
    }
    return true;
}

int prime_sum(int l) {
    int sum = 0;
    for (int i = 2; i < l; i++) {
        if (is_prime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    cout <<"Sum of prim : "<<prime_sum(100) << endl;
    return 0;
}
