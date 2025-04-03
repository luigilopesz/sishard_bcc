/* Implementar função solucao_ex3 */

int solucao_ex3(int rdi, int rsi, int *rdx, int *rcx, int *r8) {
    int eax = 0;
    if (rdi - rsi < 0) {
        eax = 1;
    }
    *rdx = eax; // mov 

    eax = 0;
    if (rdi - rsi == 0) {
        eax = 1;
    }
    *rcx = eax; // mov

    eax = 0;
    if (rdi - rsi > 0) {
        eax = 1;
    }
    *r8 = eax; // mov

    return eax;
}