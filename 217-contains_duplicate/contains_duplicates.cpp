#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;


bool containsDuplicates(vector<int>& nums) {

    std::unordered_set<int> seen;

    for (int num : nums)  {
	if (seen.count(num)) {
	    return true;
	}
	seen.insert(num);
    }
    return false;
}


int main () {

    std::vector<int> nums = {
	1, 2, 3, 3
    };

    cout << "output: " << containsDuplicates(nums) << endl;

    return 0;
}
