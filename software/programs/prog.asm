# Binary Search Program: This program performs a binary search on a sorted array.

# This Processor supports byte-addressable data memory, which means that load and store addresses refer to data mem
# per byte.


.data
array:    .word 2, 5, 8, 12, 16, 23, 38, 56, 72, 91
length:   .word 10
target:   .word 23
result:   .word 0

.text
main:
    # Load array address, length, and target
    addi t0, zero, array
    addi t1, zero, length
    lw   t1, 0(t1) # load length into t1

    addi t2, zero, target
    lw   t2, 0(t2) # load target into t2

    # Initialize binary search variables
    addi t3, zero, 0 # leftmost el of array
    addi t4, t1, -1 # rightmost el of array
    addi t5, zero, -1 # store -1 in t5

search_loop:
    # bgt t3, t4, search_done
    blt  t4, t3, end_prog # left & right ptrs out of order, el not found.

    # find new midpoint b/w ptrs
    add  t6, t3, t4
    srai t6, t6, 1 # division by 2, w/ respect to sign

    slli s1, t6, 2 # multiply midpoint by 4
    add  s1, t0, s1 # index array (t0 is index 0 of array)
    lw   s2, 0(s1) # load value at curr index

    beq  s2, t2, found # if target found, end early
    blt  s2, t2, search_right # if less than target, search right side

    addi t4, t6, -1 # t4 (right ptr) = midpoint - 1
    jal  zero, search_loop # continue searching

search_right:
    addi t3, t6, 1 # t3 (left ptr) = midpoint + 1
    jal  zero, search_loop # continue searching

found:
    addi t5, t6, 0 # save index in array # x30
end_prog:
    jal zero, end_prog