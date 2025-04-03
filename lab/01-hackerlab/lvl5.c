int lvl5(long rdi, long rsi, long *rdx) {
    long rax = rdi + (rdi * 4);
    rax = 0x51 + rax + (rsi * 4);
    int r8b = rax == 0x138aee6; // jeito do felipe 
    int cl = rdi != rsi;
    int test = cl & r8b; // test é AND !!!
    if (test == 0) {
        // +62
        *rdx = 0x1;
    } else {
        *rdx = 0x0;
    }
    int al = rax > 0xda43; // cmp + setg
    int dl = rdi < 0xfffffffffffffff2; // cmp + setl / rdi < -14
    // bit mais fdse de edx é dl
    // "           " de eax é al
    int eax = al & dl;
    return eax;
}
// rax < 5rdi + 4rsi + 81
// 55875 < 5 * (-15) + 4 * rsi + 81
// 55875 < 4rsi + 6
// 55869 / 4 < rsi 
// rsi > 13967 => 14000