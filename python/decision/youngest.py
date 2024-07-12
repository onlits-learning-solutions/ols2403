ram = input("Enter Ram's age: ")
shyam = input("Enter Shyam's age: ")
ajay = input("Enter Ajay's age: ")

youngest = ram
name = "Ram"

print(name)
print(youngest)

# if(shyam < youngest):
#     youngest = shyam
#     name = "Shyam"

# print(name)
# print(youngest)

if(ajay < youngest):
    youngest = ajay
    name = "Ajay"

print(name)
print(youngest)
print(ajay)
# print(f"{name} is the youngest of all.")