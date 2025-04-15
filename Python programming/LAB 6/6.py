# Modify an element of a tuple.

tpl_1=("capsicum","fenugreek","carrot","grapes") #creating a tuple
l1=list(tpl_1)  # typecasting a tuple (tpl_1) to list
l1[3]="sprout"  # make a modification in list
tpl_2=tuple(l1) # again, typecasting a list into another tuple as tpl_2
print("Tuple Before:",tpl_1)
print("Tuple After:",tpl_2)


"""
list are mutable/changable.(we can modify a list item into a existing list.)
tuples are immutable/not changable. (we cannot modify a tuple item into a existing tuple.)
""" 