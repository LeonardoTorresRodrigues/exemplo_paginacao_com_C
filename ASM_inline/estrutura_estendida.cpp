int a = 10, b;
asm(
    "movl %1, %%eax;" // Move o input (%1, que é 'a') para o registrador eax
    "movl %%eax, %0;" // Move o valor de eax para o output (%0, que é 'b')
    : "=r"(b)         /* output (%0) */
    : "r"(a)          /* input (%1) */
    : "%eax"          /* clobbered register (registrador alterado) */
);