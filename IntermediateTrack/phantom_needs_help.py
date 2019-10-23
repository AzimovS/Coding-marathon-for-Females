x = input()
temp = None 
count = 0
res = ""
for char in x:
    if temp == None:
        temp = char
        count += 1
    elif(temp == char):
        count += 1
    else:
        if count > 1:
            res += temp + str(count)
            temp = char 
            count = 1
        else:
            res += temp
            temp = char
            count = 1

if count > 1:
    res += temp + str(count)
    temp = char 
    count = 1
else:
    res += temp
    temp = char
    count = 1    

print(res)