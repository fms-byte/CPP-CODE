#include <iostream>

using namespace std;

bool findBreadDistribution(int n, int k, int &M, int &F, int &C) {
    for (M = 1; M <= n; ++M) {
        for (F = 1; F <= n - M; ++F) {
            C = n - M - F;
            if (3 * M + 2 * F + 0.5 * C == k) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n, k;
    //cout << "Enter the total number of people (n): ";
    cin >> n;

    //cout << "Enter the total number of bread (k): ";
    cin >> k;

    int M, F, C;
    if (findBreadDistribution(n, k, M, F, C)) {
        cout << "Solution found: M = " << M << ", F = " << F << ", C = " << C << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}

/* PROBLEM DEFINITION - MY OWN PROBLEM
Time Limit: 1 Sec
Memory Limit: 256 MB
Author: Farhan

There are a total of n people living in a house. The residents have
gathered k pieces of bread for their dinner. The distribution of bread
is based on the following rules:

Each male (denoted as M) consumes 3 pieces of bread.
Each female (denoted as F) consumes 2 pieces of bread.
Each child (denoted as C) consumes 0.5 pieces of bread.

Your task is to find the number of males (M), females (F), and
children (C) in the house such that the total consumption matches
the available bread. Additionally, ensure that there is at least
one person in each category.

Input:

The input contains two integers, n and k (1 ≤ n, k ≤ 100), representing
the total number of people and the total number of bread, respectively.

Output:

If a valid distribution is found, print the values of M, F, and C.
If no valid distribution is possible, print "No solution found."


Examples:

Input: n = 20, k = 20
Output: M = 1, F = 5, C = 14

Input: n = 20, k = 99
Output: No solution found.

Note:

In the first example, there are 1 male, 5 females, and 14 children.
Bread distribution: 1*3 + 5*2 + 14*0.5 = 20 Breads

In the Second example, no valid distribution is possible.

*/