; Binary Search Program: This program performs a binary search on a sorted array.

; This Processor supports byte-addressable data memory, which means that load and store addresses refer to data mem
; per byte.


.data
; array:    .word 2, 5, 8, 12, 16, 23, 38, 56, 72, 91
; length:   .word 10
; target:   .word 23

array:  .word 1, 2, 3, 4
length: .word 4
target: .word 3

.text
main:
    ; load the address of the array (will be our "low" ptr in binary search)
    addi x1, x0, array
    ; load the length of the array
    addi x2, x0, length
    lw x2, 0(x2)
    ; calculate the "high" ptr for binary search
    addi x3, x2, -1 # high = length - 1

    ; load the target value
    addi x4, x0, target
    lw x4, 0(x4)

    ; set as "not found"
    addi x30, x0, -1 # -1 will represent that the target value wasn't found
search_loop:
    ; if "high" < "low", end program
    blt x3, x1, end_program

    ; calculate the midpoint
    sub x5, x3, x1 # x5 = high - low
    srli x5, x5, 1 # x5 = x5 / 2
    add x5, x5, x1 # x5 = x5 + low
    slli x5, x5, 2 # x5 = x5 * 4

    ; get the value at the midpoint
    lw x6, 0(x5)

    ; if value at midpoint == target, end program with current index saved at register
    beq x6, x4, found

    ; target value is less than midpoint
    blt x4, x6, less_than
    ; target is greater than midpoint, "low" ptr = midpoint + 1
    addi x1, x6, 1
    jal x0, search_loop
less_than:
    ; "high" ptr = midpoint - 1
    addi x3, x6, -1
    ; loop back to search_loop
    jal x0, search_loop

found:
    add x30, x0, x6 ; x30 = real index of target value; refers to least significant byte within data mem (little endian)
end_program:
    jal x0, end_program