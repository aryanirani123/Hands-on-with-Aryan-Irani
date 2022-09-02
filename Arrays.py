#Arrays in Python 
"""
Array methods used:
1. append()
2. clear()
3. count()
4. pop()
5. remove()
6. sort()

"""

#Array declaration

names = ["Aryan","Neil","zayn"]
print(names)

#Append an element to the array
names.append("Yash")
print(names)

#Remove an element from an array
names.pop(0)
print(names)


#Get the count of an element
print(names.count("Yash"))

#Sorting an Array
numbers = [1,2,4,5,6,2,1,34,78,4,0]
numbers.sort()
print(numbers)

#Clear the Array
names.clear()
print(names)


#Accept elements from the user 
array = []
num_elements = 4
for i in range(4):
    value = input("Enter the element")
    array.append(value)
print(array)

