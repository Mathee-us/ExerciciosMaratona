def solve():

    n = int(input())
    nums= list(map(int,input().split()))
    nums.sort()
    contpar=0
    impar=[]
    par=[]
    for i in range(n):
        if nums[i] % 2 == 0:
            contpar += 1
            par.append(nums[i])
        else:
            impar.append(nums[i])

    if contpar==len(nums): #se todos sao pares
        print(0)
    elif nums[-1]%2!=0 : #se o maior é impar
        print(contpar)
    else:
        maior_impar=impar[-1]
        num_atual = maior_impar
        for i in range(len(par)):
            if par[i]< num_atual:
                num_atual = maior_impar+par[i]
                maior_impar=num_atual
            else:
                print(contpar+1)
                return
        print(contpar)
        return

t = int(input())
while(t):
    t-=1
    solve()
