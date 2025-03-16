def solve():
    n = int (input())
    nums = list(map(int,input().split()))
    nums.sort()

    while len(nums)!=1:
        a= nums[0]
        b = nums[1]
        c= int((a+b)/2)

        nums.pop(1)
        nums.pop(0)
        nums.append(c)
        nums.sort()
    print(nums[0])


t = int(input())
while t:
    t-=1
    solve()
