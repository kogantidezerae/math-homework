void calculateMean(int* scores, int numScores) {
    double mean = 0;
    for (int i = 0; i < numScores; i++) {
        mean += scores[i];
    }
    mean /= numScores;
    return mean;
}