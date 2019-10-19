
// Since the rule is that at every iteration number has to be divisible by two
// answer will be any number that is power of two.

string appleGame(int num) {
        while (num != 1) {
                if (num % 2 == 1) return "NO";
                else num = num / 2;
        }
        return "YES";
}

// Since all of the power of two's are represented as one followed by zeros,
// it is enough to apply bitwise AND for num - 1.

string appleGameByBit(int num) {
        if ((num & (num - 1)) == 0) return "YES";
        return "NO";
}
