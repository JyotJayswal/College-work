# A list contains names of Faculty Members.
# Write a program to filter out those names whose length is more than 8 characters.

faculty=["frenky","sharmishtha","dingal","shrikant","suman","rakesh","rajpal","akbar","ajay"]

more_8=list(filter(lambda i:len(i)>8,faculty))  #use filter with lambda to obtain names having length more than 8 char
less_8=list(filter(lambda i:len(i)<8,faculty))  #use filter with lambda to obtain names having length less than 8 char

print(f"list having names whose length is more than 8 characters:{more_8}")
print(f"list having names whose length is less than 8 characters:{less_8}")