# Write a program to create three dictionaries & 
# concatenate them to create fourth dictionary.

d1={'car1':"mustang"}       
d2={'car2':"roll royce"}
d3={'car3':"bugatti"}
d4={**d1,**d2,**d3}     #(**) used to unpack the dict. & (*) used to unpack only keys
print(d4)

''' dictionary is a collection of key-value pairs.
    syntax: dict_name:{key1:value1 , key2:value2 , ....}
'''
