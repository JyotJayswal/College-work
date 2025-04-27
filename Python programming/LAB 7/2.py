#Write a program to check whether a dictionary is empty or not.

d_list=[{},{"fruit":"orange"},{"bike":"Ninja H2R"},{}]

for index,dict in enumerate(d_list,start=1):
    if(dict=={}):
        print(f"The d{index} dictionary is empty.")
    else:
        print(f"The d{index} dictionary is non-empty.")


'''
The word enumerate in Python comes from the general English term "to enumerate,"
which means "to list out items one by one, often with numbers."

When looping through a sequence, the position index and corresponding 
value can be retrieved at the same time using the enumerate() function.

enumerate() is a built-in function that adds a counter (index) to an iterable
(like a list, tuple, string, etc.) and returns it as an enumerate object.

This is useful when you want both:
The index (position)
The value (item itself)

'''