void lvl8() {
        int eax = 0;
        long rsi;
        scanf("%u", &rsi);
        int edx = 1;
        eax = rsi;
        while (eax > 1)
        {
                eax >>= 1;
                rsi = eax;
                edx++;
                eax = rsi;
        }
        int al = edx == 0xc;
        return al;
}    