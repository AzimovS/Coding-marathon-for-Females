
// This problem is tricky. But the solutions is as following if you see
// a or b push it to stack. If it is c, then pop two elements, as well as
// check if poped elements are a and b.

bool insertingRule(string s) {
        stack<char> elements;
        for (char c : s) {
                if (c == 'c') {
                        if (elements.size() < 2) return false;
                        char second = elements.top();
                        elements.pop();
                        char first = elements.top();
                        elements.pop();
                        if (first != 'a' || second != 'b') return false;
                } else {
                        elements.push(c);
                }
        }

        if (elements.size() != 0) return false;
        return true;
}
