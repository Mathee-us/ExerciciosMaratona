def fib(n):

    anterior=1
    anant=0

    for i in range(n):
        atual = anterior+anant
        anant=anterior
        anterior=atual
    print(atual)



n = int(input())
fib(n)