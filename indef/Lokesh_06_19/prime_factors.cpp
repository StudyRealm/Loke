/*	By getting factors through this algo, we will only get the prime factors and the prev prime numbers will divide the upcomimg non-prime factors of the given number.
 */

#include <iostream>
using std::cin, std::cout;

void factors(int n) {
    int temp = 2;
    while (temp * temp <= n) {	//checking whether the product of further multiplication stay
			      	//within the number n (initial or modified)

        if (n % temp  == 0) { 	// Checking for factors
            cout << temp <<'\n';
            n /= temp;		// Diving the number to remove the factor
        } else {		
            temp++;
        }
    }
    if (n > 1) {		// Primting out the last prime factor left (i.e. the number left)
				//  after removing every non-prime factor from the number.
        cout << n << '\n';
    }
}

int main() {
	int target;
	cin >> target;
	factors(target);
}

