int count_factors(int n) {
    int count = 2; // 1 and number itself
    for(int i = 2; i <= (sqrt(n)); i++) { // sqrt(n) for efficiency
        if(n % i == 0) {
            ++count;
            if((n/i) != i) ++count; // checking multiplier of i for dividing n
        }
    }
    return count;
}
