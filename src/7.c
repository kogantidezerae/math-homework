int random_number(int min, int max) {
    // Generate a random number between min and max inclusive
    int range = (max - min) + 1;
    return min + (rand() % range);
}
