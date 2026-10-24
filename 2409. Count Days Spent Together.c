int countDaysTogether(char* arriveAlice, char* leaveAlice,
                      char* arriveBob, char* leaveBob) {

    int days[] = { 31, 28, 31, 30, 31, 30,
                   31, 31, 30, 31, 30, 31 };

    int am, ad, lm, ld;
    int bm, bd, blm, bld;

    sscanf(arriveAlice, "%d-%d", &am, &ad);
    sscanf(leaveAlice, "%d-%d", &lm, &ld);
    sscanf(arriveBob, "%d-%d", &bm, &bd);
    sscanf(leaveBob, "%d-%d", &blm, &bld);

    int aliceStart = ad;
    int aliceEnd = ld;
    int bobStart = bd;
    int bobEnd = bld;

    for (int i = 0; i < am - 1; i++)
        aliceStart += days[i];

    for (int i = 0; i < lm - 1; i++)
        aliceEnd += days[i];

    for (int i = 0; i < bm - 1; i++)
        bobStart += days[i];

    for (int i = 0; i < blm - 1; i++)
        bobEnd += days[i];

    int start = (aliceStart > bobStart) ? aliceStart : bobStart;
    int end = (aliceEnd < bobEnd) ? aliceEnd : bobEnd;

    if (start > end)
        return 0;

    return end - start + 1;
}