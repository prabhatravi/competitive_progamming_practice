for _ in range(int(input())):
    n = int(input())
    odds, evens = (n+1)//2, n//2
    print(2*odds*evens)