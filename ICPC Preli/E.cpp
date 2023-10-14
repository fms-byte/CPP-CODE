#include <iostream>
#include <vector>
using namespace std;

long long countNonBeautifulSubarrays(vector<int>& arr) {
	int n = arr.size();
	long long result = 0;
	int cur_count = 1;

	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1]) {
			cur_count++;
		} else {
			result += (static_cast<long long>(cur_count) * (cur_count + 1)) / 2;
			cur_count = 1;
		}
	}

	result += (static_cast<long long>(cur_count) * (cur_count + 1)) / 2;
	long long total_subarrays = (static_cast<long long>(n) * (n + 1)) / 2;
	long long beautiful_subarrays = result;

	return total_subarrays - beautiful_subarrays;
}

int main() {
	int T;
	cin >> T;

	for (int caseNum = 1; caseNum <= T; caseNum++) {
		int N;
		cin >> N;
		vector<int> A(N);
		for (int i = 0; i < N; i++) {
			cin >> A[i];
		}
		long long non_beautiful_count = countNonBeautifulSubarrays(A);
		cout << "Case " << caseNum << ": " << non_beautiful_count << endl;
	}

	return 0;
}