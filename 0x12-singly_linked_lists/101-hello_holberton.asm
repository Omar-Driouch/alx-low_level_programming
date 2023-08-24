section .data
    hello_msg db "Hello, Holberton", 0
    fmt db "%s", 10, 0

section .text
    global main
    extern printf

main:
    sub rsp, 8        
    mov rdi, fmt      
    mov rsi, hello_msg  
    xor rax, rax      
    call printf      
    add rsp, 8        
    ret              
