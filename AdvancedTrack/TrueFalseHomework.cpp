
// Find how many different asnwers they have, and substract it from total
// number of questions. Don't forget to multiply it by 10.

int trueFalseHomework(string first, string second) {
        int different = 0;
        for (int i = 0; i < first.size(); i++) {
                if (first[i] != second[i]) different++;
        }
        return first.size() - different;
}
