def fibonacci(n):
    if n<=1:
       return n
    return fibonacci(n-1)+ fibonacci(n-2)

def print_fib():
    with open("output/fibinance.txt","w") as file:
         for i in range(25):
           file.write(str(fibonacci(i))+"\n")
print_fib()
