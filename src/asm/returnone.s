.intel_syntax noprefix
.text
.data
            var DB 10
.globl return_one

return_one:
            mov eax, 5
            ret
