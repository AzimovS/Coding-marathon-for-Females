
// To solve following problem itterate ones, and count frequency for each number.
// In the end check which number occurred once.

int lonelyNumber(vector<int> nums) {
        unordered_set<int, int> frequency;
        for (int i = 0; i < nums.size(); i++) {
                frequency[nums[i]]++;
        }

        for (auto element : nums) {
                if (element.second == 1) return element.first;
        }

        return -1;
}

// Another solution based on property of bitwise XOR function. Those properties
// are as following:
// x ^ x = 0
// x ^ 0 = x

int lonelyNumber(vector<int> number) {
        int result = 0;
        for (int n : number) {
                result ^= n;
        }
        return result;
}
