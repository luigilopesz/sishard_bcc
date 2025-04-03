int lvl4(long rdi, long rsi) {
    long rax = rdi;
    int edx = 0x0;
    edx = rax % rsi; // resto da div fica smepre em edx!
    rax = rax / rsi; // sempre RAX dividido pelo q vc botou, em rax deixa a div e em rdx deixa o resto
    if (edx - 0x2 == 0) {
        // +30
        int eax = 0x1;
        return eax;
    }
    int eax = 0x0;
    return eax;
}