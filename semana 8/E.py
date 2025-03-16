n = int(input())
m=[]
maior = 0
for i in range(n):
    l = list(map(int,input().split()))
    m.append(l)
    maior_at = max(l)
    if maior_at>maior:
        maior=maior_at

for i in range(n):
    if maior in m[i]:
        j= m[i].index(maior)
        ii = i

if ii==n-1 and j==n-1:
    print(0)
elif ii==n-1 and j==0:
    print(1)
elif ii==0 and j==0:
    print(2)
else:
    print(3)
