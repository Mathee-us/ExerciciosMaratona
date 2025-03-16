t = int(input())

while t>0:
    n,k = map(int, input().split())
    money=0
    helped=0
    j = list(map(int, input().split()))
    for i in range(n):

        if j[i]>=k:
            money+=j[i]
        else:
            if money>0 and j[i]==0:
                helped+=1
                money-=1
    print(helped)
    t-=1







