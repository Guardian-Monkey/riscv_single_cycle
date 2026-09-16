# Simple program which loads two values into memory, adds them, and saves them to a register

.data
value1: .word 4
value2: .word 5


.text
main:
    addi x1, zero, value1
    addi x2, zero, value2
    lw x1, 0(x1)
    lw x2, 0(x2)
    add x3, x1, x2
done:
    jal x30, done # infinite loop; EOP