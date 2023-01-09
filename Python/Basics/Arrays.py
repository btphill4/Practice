# Arrays

# Methods
# append()	Adds an element at the end of the list
# clear()	Removes all the elements from the list
# copy()	Returns a copy of the list
# count()	Returns the number of elements with the specified value
# extend()	Add the elements of a list (or any iterable), to the end of the current list
# index()	Returns the index of the first element with the specified value
# insert()	Adds an element at the specified position
# pop()	Removes the element at the specified position
# remove()	Removes the first item with the specified value
# reverse()	Reverses the order of the list
# sort()	Sorts the list


#Create Arrays
from cgi import test


dogs = ["pugs", "german_shepards" , "labs"]
numbersInt = [0, 1, 2, 3, 4, 5, 6]
doublesInt = [0.0, 0.5, 1.0, 1.5, 2.0, 2.5]

#access array elemnts
x = numbersInt[1]


print(numbersInt)
print("x = numbersInt[1] = " , x)
print("numbersInt is size: ", len(numbersInt))
print("dogs[1] = ", dogs[1])


#add elements to arrays via append
numbersInt.append(7)

print("numbersInt.append(7) = ", numbersInt)


#removing elements from array via pop(index number)
newNumbersInt = numbersInt
newNumbersInt.pop(3)

print("newNumbersInt.pop(3) = ", newNumbersInt)


#removing specific elements via remove("elementName")
newNumbersInt.remove(6)
newDogs = dogs
newDogs.remove("german_shepards")

print("newNumbersInt.remove(6) = ", newNumbersInt)
print("newDogs.remove('german_shepards') = ", newDogs)


# add elements in a loop
testLoop = []
for i in range(5):
    testLoop.append(i)
print(testLoop)