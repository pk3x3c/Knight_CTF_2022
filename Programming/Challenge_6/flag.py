
def G_Sum(n):
    if n<0:
        return 0
    else:
        return (1/2**n) + G_Sum(n-1)

if __name__=="__main__":
    print(G_Sum(25))

