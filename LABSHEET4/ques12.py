def fibonacci(n):
    seq = []
    a, b = 0, 1
    for _ in range(n):
        seq.append(a)
        a, b = b, a + b
    return seq

N = int(input("Enter N: "))
print("Fibonacci sequence:", fibonacci(N))
