# A list contains tuples containing roll no.,name & age of student.
# Write a python program to create three lists separately for roll no.,name & age.

list=[(2,"madhav",30),(8,"govind",35),(9,"arjun",28),(11,"parth",25),(26,"jyot",20)]
roll=[]
name=[]
age=[]

for item in list:
    roll.append(item[0])

for item in list:
    name.append(item[1])

for item in list:
    age.append(item[2])

print("Roll no.:",roll)
print("Name:",name)
print("Age:",age)