n = int(input())

while n is not 0:
    print("PREMIADO" if n % 42 == 0 else "TENTE NOVAMENTE")
    
    n = int(input())