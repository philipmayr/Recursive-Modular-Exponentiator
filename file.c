// Recursive Modular Exponentiator

#include <stdio.h>

long long exponentiate_modularly(int base, int index, int modulus)
{
    if (index == 0) return 1 % modulus;
    
    long long power = exponentiate_modularly(base, index >> 1, modulus);

    if (index & 1) power = (power * base) % modulus;
    
    power = (power * power) % modulus;
    
    return power;
}

int main()
{
    int base = 2;
    int index = 2;
    int modulus = 2;
    
    long long modulated_power = exponentiate_modularly(base, index, modulus);
    
    printf("%d^%d ≡ %lld (mod %d)", base, index, modulated_power, modulus);
    
    return 0;
}
