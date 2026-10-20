int minimumChairs(char* s) {
    int people = 0;
    int maxChairs = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'E') {
            people++;
        } else if (s[i] == 'L') {
            people--;
        }

        if (people > maxChairs) {
            maxChairs = people;
        }
    }

    return maxChairs;
}