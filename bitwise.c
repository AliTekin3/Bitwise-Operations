#include <stdio.h>

int main() {
    unsigned char a = 12; // 0000 1100
    unsigned char b = 5;  // 0000 0101
    
    // 1. Bitwise AND (&)
    //   0000 1100
    // & 0000 0101
    //   ---------
    //   0000 0100  -> Ondalýk karþýlýðý: 4
    printf("a & b = %d\n", a & b);

    // 2. Bitwise OR (|)
    //   0000 1100
    // | 0000 0101
    //   ---------
    //   0000 1101  -> Ondalýk karþýlýðý: 13
    printf("a | b = %d\n", a | b);

    // 3. Sola Kaydýrma (<<)
    // a = 0000 1100  -> 2 bit sola kaydýrýrsak:
    //     0011 0000  -> Ondalýk karþýlýðý: 48 (12 * 2^2)
    printf("a << 2 = %d\n", a << 2);

    return 0;
}