#백준 1246

n,m = input().split()

n = int(n)
m = int(m)


egg_price = []


count = 0
while count < m:
    tmp = int(input())
    egg_price.append(tmp)
    count+=1


egg_price.sort()

egg_forsale = 0

if n>=m:
    egg_forsale = m
else:
    egg_forsale = n


a_idx = m-egg_forsale

tmp = egg_forsale
pf = []


while a_idx < m:
    p = egg_price[a_idx]
    pf.append(p*egg_forsale)
    a_idx+=1
    egg_forsale-=1



max_p = egg_price[m-tmp + pf.index(max(pf))]

print(max_p, max(pf))
