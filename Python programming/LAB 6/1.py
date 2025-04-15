#A list contains names of boys and girls as its elements.Boy's names are stored as
#tuples.Write a program to find out number of boys and girls in the list.(Hint:use isinstance(ele,tuple))

list=[("aarav",),("hitesh",),("parv",),("jainam",),"aarushi","saraswati","charmi"]
boys_count=0
girls_count=0

for name in list:
    if(isinstance(name,tuple)): #isinstance(ele,tuple)
        boys_count+=1   #boys_count=boys_count+1
    else:
        girls_count+=1

print("Number of boys are:",boys_count)
print("Number of girls are:",girls_count)


'''The isinstance() function in Python is used to check if an object 
is an instance of a specific class or a tuple of classes.

# syntax--> isinstance(object,classinfo)
object: The variable or value you want to check.
classinfo: The class (e.g., int, str, tuple, etc.) or a tuple of classes.'''