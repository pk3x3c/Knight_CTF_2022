y=2

ans=0

for x in range(1,667):
    xy=str(x)+str(y)
    xy=int(xy)

    ans+=(x*y) + xy

print(ans)
