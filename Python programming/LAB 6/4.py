# Create a list of tuples containing a food item and its price.
# Sort the tuples in descending order by price.

from operator import itemgetter #importing a specific func. (itemgetter) from the built-in operator module in Python.

menu=[("pani puri",20),("Dahiwada",80),("Momos",60),("aloo paratha",100)]

sorted_menu=sorted(menu,key=itemgetter(1),reverse=True)
# sorted(menu,key=lambda x:x[1])

print("Menu sorted from high to low price as shown below:")
for food,price in sorted_menu:
    print(f"{food} : {price}")


'''What is the operator module?
The operator module contains functions that correspond to Python’s built-in operators,
like:
+, -, *, / → add(), sub(), mul(), truediv()

Comparisons like ==, <, > → eq(), lt(), gt()

Item access like item[1] → itemgetter(1)'''

# general syntax for sorted() method.
# sorted(iterable, key=..., reverse=...)

# Where:
# iterable → Your list of tuples.
# key → A function to tell sorted() what to sort by (optional).
# reverse=True → Sorts in descending order (optional)
