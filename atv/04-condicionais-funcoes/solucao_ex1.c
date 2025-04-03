/* Implementar função solucao_ex1 */

int solucao_ex1(long rdi, long rsi, long rdx, long rcx) {
    long rax;
    rax = rdi + (1 * rsi); // lea
    rcx = rax + (4 * rdx); // lea 
    rdi = rdi * rdi;  // imul
    rax = rdi + (2 * rsi); // lea
    rdx = rdx + rax; // add
    if (rcx - rdx >= 0) { // cmp
        rax = 1; // setge
    } else {
        rax = 0; // setge
    }
    return rax; // movzbl
}