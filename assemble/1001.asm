section .bss
      a: resd 1
      b: resd 1
section .data
      input: db "%d %d", 0
      output: db "%d", 10, 0
section .text
      global main
      extern scanf
      extern printf
main:
      push  rbp
      mov   rdi, input
      mov   rsi, a
      mov   rdx, b
      call  scanf

      mov   rax, [a]
      sub   rax, b
      
      mov   rdi, output
      mov   rsi, rax
      mov   rax, 0
      call  printf

      pop   rbp
      mov   rax, 0
      leave
      ret