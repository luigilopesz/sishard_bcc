int lvl7(long rdx, long rcx) {
    long rax = 0x0;
    int ecx = 0x0;
    long rsi;
    scanf("%d",&rsi);
    while (rax <= 0xb) {
        rcx += rdx;
        rax += 0x1;
    }
    rdx = 0x5555555555555556;
    rax = rcx;
    rdx *= rdx;
    rcx >>= 0x3f;
    rdx -= rcx;
    int al = rsi - rdx == 0;
    rax = al;
    return rax;
}