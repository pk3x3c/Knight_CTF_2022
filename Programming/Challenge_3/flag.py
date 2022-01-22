calculation=0
ans=0
reverse_calc=''
for x in range(1,544):
    calculation=(x*(x+1))+(2*(x+1))
    reverse_calc=str(calculation)
    reverse_calc=reverse_calc[::-1]
    reverse_calc=int(reverse_calc)
    if(reverse_calc%4==0):
        ans+=reverse_calc

print(ans)
