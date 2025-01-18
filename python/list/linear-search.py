arr = [41, 10, 9, 101, 96, 72, 5, 31, 29, 15]

key = int(input("Enter a number to search: "))

index = 0
flag = 0

for i in arr:
    if i == key:
        print(key, "found at", index)
        flag = 1
    
    index += 1

if flag == 0:
    print("Value not found")