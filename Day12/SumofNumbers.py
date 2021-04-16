hash = [0]*100001
for i in range(1,10**5+1):
    hash[i]=i+hash[i-1]
T = int(input())
for j in range(T):
    m,n = list(map(int,input().split(" ")))
    print(hash[n]-hash[m-1])
