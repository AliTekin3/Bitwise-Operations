#include <stdio.h>

int main() {
    unsigned char a = 6; // Binary: 0000 0110
    unsigned char b = 3; // Binary: 0000 0011
    
    // 1. Bitwise AND (&)
    //   0000 0110  (6)
    // & 0000 0011  (3)
    //   ---------
    //   0000 0010  -> Ondalýk karþýlýðý: 2
    printf("a & b (AND)  = %d\n", a & b);

    // 2. Bitwise OR (|)
    //   0000 0110  (6)
    // | 0000 0011  (3)
    //   ---------
    //   0000 0111  -> Ondalýk karþýlýðý: 7
    printf("a | b (OR)   = %d\n", a | b);

    // 3. Bitwise XOR (^) -> Bitler farklýysa 1, aynýysa 0 üretir.
    //   0000 0110  (6)
    // ^ 0000 0011  (3)
    //   ---------
    //   0000 0101  -> Ondalýk karþýlýðý: 5
    printf("a ^ b (XOR)  = %d\n", a ^ b);

    // 4. Bitwise NOT (~) -> Tüm bitlerin tersini alýr (0->1, 1->0).
    // ~ 0000 0110  (6)
    //   ---------
    //   1111 1001  -> Isaretsiz (unsigned char) sistemde ondalýk karþýlýðý: 249
    printf("~a    (NOT)  = %d\n", (unsigned char)~a);

    return 0;
}