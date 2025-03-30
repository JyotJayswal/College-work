str1=(input("Enter a string:"))
count_alpha=0
count_num=0
for char in str1:
    if(65<=ord(char)<=90 or 97<=ord(char)<=122):
        count_alpha=count_alpha+1
    else:
        continue
for char in str1:
    if(48<=ord(char)<=57):
        count_num=count_num+1
    else:
        continue

print("the alphabets in str1 is:",count_alpha)
print("the numbers in str1 is:",count_num)