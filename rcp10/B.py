aux = input()
a = int( aux[0:4])
b = int(aux[5:9])
c = aux[10:11]
ans = 0 
for i in range(a,b+1):
    x = str(i)
    for j in x:
        if(j == c):
            ans+=1
print(ans)
