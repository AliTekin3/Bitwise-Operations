#include <stdio.h>

int main() {
     char a = 6; // Binary: 0000 0110
    char b = 3; // Binary: 0000 0011
    
    // 1. Bitwise AND (&)
    //   0000 0110  (6)
    // & 0000 0011  (3)
    //   ---------
    //   0000 0010  -> Ondalık karşılığı: 2
    printf("a & b (AND)  = %d\n", a & b);

    // 2. Bitwise OR (|)
    //   0000 0110  (6)
    // | 0000 0011  (3)
    //   ---------
    //   0000 0111  -> Ondalık karşılığı: 7
    printf("a | b (OR)   = %d\n", a | b);

    // 3. Bitwise XOR (^) -> Bitler farklıysa 1, aynıysa 0 üretir.
    //   0000 0110  (6)
    // ^ 0000 0011  (3)
    //   ---------
    //   0000 0101  -> Ondalık karşılığı: 5
    printf("a ^ b (XOR)  = %d\n", a ^ b);

    // 4. Bitwise NOT (~) -> Tüm bitlerin tersini alır (0->1, 1->0).
    // ~ 0000 0110  (6)
    //   ---------
   // sistemde ondalık karşılığı: 249
    printf("~a    (NOT)  = %d\n", (char)~a);

    return 0;
}
