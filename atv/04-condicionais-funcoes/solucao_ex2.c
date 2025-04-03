long vezes2(long a);

/* Implementar função solucao_ex2 */

long solucao_ex2(long rdi, long rsi) {
    long rbx;
    rbx = rdi; // mov
    rdi = rsi; // mov

    long rax;
    rax = vezes2(rdi); // call 

    if (rax - rbx > 0) { // cmp
        rbx += rbx; // add
    }
    rax += rbx; // add
    return rax;
}