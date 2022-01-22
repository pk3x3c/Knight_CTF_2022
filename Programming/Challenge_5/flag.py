num_1=21525625
num_2=30135875

gcd=0

for i in range(1,num_1+1) and range(1,num_2+1):
    if(num_1 % i ==0 and num_2 % i==0):
        gcd=i
        
string=str(gcd)
SUM=0

for i in string:
    SUM+=int(i)

const=1234
ans=SUM*const

print("final ans for flag is ={}".format(ans))
