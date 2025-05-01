# Define 3 functions fun(), disp() and msg().
# Store them in a list and call them one by one in a loop.

def fun():      #define fun() fuunction
    return("in the fun() function")     #return the following statement
def disp():     #define disp() fuunction
    return("in the disp() function")    #return the following statement
def msg():      #define msg() fuunction
    return("in the msg() function")     #return the following statement

a=fun()     #store fun() in variable named "a"
b=disp()    #store disp() in variable named "b"
c=msg()     #store msg() in variable named "c"
l1=[a,b,c]  #store the variable a,b,c in a list

for i in range(len(l1)):    #use for loop to access the elements of list l1
    print(l1[i])            #function call by the variable names respectively