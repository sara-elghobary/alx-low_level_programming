section .data
    hello db "Hello, Holberton",0x0a  ;

section .text
    global main

    extern printf

main:
    push rbp
    mov rdi, hello        ;
    call printf           ;
    pop rbp

    ; Exit the program
    mov rax, 60            ;
    xor rdi, rdi           ;
    syscall
