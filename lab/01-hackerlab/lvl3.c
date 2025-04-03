int lvl3(long rdi) {
    int eax = rdi + (rdi * 2);
    int cmp = eax - 0x3d9;
    if (cmp <= 0) {
        // +35
        eax = 0x1;
        return eax;
    }
    if (eax - 0xfffffc27 < 0) {
        // +41
        eax = 0x0;
        return eax;
    }
    if ((eax & 0x1) != 0) {
        // +47
        eax = 0x0;
        return eax;
    }
    if (rdi != 0) {
        // +53
        eax = 0x1;
        return eax;
    }
    eax = 0x0;
    return eax;
}