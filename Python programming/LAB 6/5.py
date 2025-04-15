# Remove empty tuple(s) from the list of tuples.

l1=[("apple"),(),("banana"),("pineapple"),("cranberries"),(),("blueberries")]
l2=[]
for item in l1:
    if(item!=()):
        l2.append(item)
print(l2)