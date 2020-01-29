def bin(binary):
    binary1 = binary
    decimal, i, n = 0, 0, 0
    while(binary != 0):
        dec = binary % 10
        decimal = decimal + dec * pow(2, i)
        binary = binary//10
        i += 1
    return(decimal)

t=int(input())
while(t>=0):
    t=t-1
    a = input()
    b = input()
    a1 = bin(int(a))
    b1 = bin(int(b))
    counter=0;
    while(b1!=0):
        ta1 = a1^b1
        ta2 = (a1&b1)*2
        a1 = ta1
        b1 = ta2
        counter=counter+1

    print(counter)
    if(t==0):
        break
