
def print_fib():
    with open("output/fibinance.txt","w") as file:
         first =0
         second =1
         for _ in range(25):
           file.write(str(first)+"\n")
           next_number=first+second
           first=second
           second=next_number

print_fib()
