# Delete an element of a tuple.

tpl_1=("Adidas","Nike","Skechers","Campus","Raymond")
l1=list(tpl_1)
l1.remove("Raymond")
tpl_2=tuple(l1)
print("Tuple Before:",tpl_1)
print("Tuple After:",tpl_2)