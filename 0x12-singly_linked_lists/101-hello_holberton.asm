section .data
    hello_msg db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, format
    mov rsi, hello_msg
    call printf

    pop rbp
    ret
