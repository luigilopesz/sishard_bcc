/* Implementar função solucao_ex4 */

int solucao_ex4(long rdi, int edi) {
    if (rdi - 0x11 <= 0) {
        goto vnttres;
    }
    edi -= 0x41;
    if (edi - 0x1 > 0) {
        goto trntum;
    }
    int eax = rdi - 0x11;
    return eax;
    vnttres:
    eax = 0x12;
    eax -= edi;
    return eax;
    trntum:
    eax = 0;
    return eax;
}