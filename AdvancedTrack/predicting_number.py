


for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    x=min(a)*max(a)
    l=set()
    d=2
    while d*d<=x:
        if not x%d:
            l.add(d)
            l.add(x//d)
        d+=1
    print(x if l==set(a) else -1)