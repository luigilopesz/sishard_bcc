int lvl6() {
    int eax = 0x0; // +30
    int edx;
    int ecx;
    int esi;
    scanf("%d %d %d", &esi, &ecx, &edx);
    eax = edx + (ecx * 1);
    eax += esi;
    // edx > 0x9d sipa
    if (edx <= 0x9d) { // doenca do persa
        // +95
        eax = 0;
        return eax; // deu ruim
    }
    if (ecx <= 0x9d) {
        // +105
        eax = 0;
        return eax;
    }
    if (esi <= 0x9d) {
        // +112
        eax = 0;
        return eax;
    }
    if (eax <= 0x21f) { // queremos isso!!
        // +119
        eax = 1;
        return eax;
    }
    // eax = edx + ecx + esi
}