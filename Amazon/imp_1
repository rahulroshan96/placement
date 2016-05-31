// Question: Optimal Algorithm needed for finding pairs divisible by a given integer k
/*
Whether the sum of two numbers is divisible by k only depends on their remainders modulo k.

So if k is reasonably small, you can just count how many numbers have each possible remainder and 
compute the number of pairs from that. Assuming k > 0 and all integers nonnegative
*/

unsigned long long combinations(unsigned k, unsigned long long *arr, unsigned n) {
    unsigned long long counts[k] = {0};
    unsigned i;
    for(i = 0; i < n; ++i) {
        ++counts[arr[i]%k];
    }
    // number of pairs where both are divisible by k
    unsigned long long combs = counts[0]*(counts[0]-1)/2;
    for(i = 1; i < (k+1)/2; ++i) {
        combs += counts[i]*counts[k-i];
    }
    if (k == 2*i) {
        combs += counts[i]*(counts[i] - 1)/2;
    }
    return combs;
}
