#Write a recursive function that reverses the list of numbers that it receives.

print("Enter 5 numbers:")
lst=[int(input()) for lst1 in range(5)]

def reverse(lst):
    lst.sort(reverse=True)
    return(lst)

rev_lst=reverse(lst)
print(f"list of numbers is:{lst}")
print(f"The reverse ordered list is:{rev_lst}")


'''
def reverse_list(lst):
    if len(lst) == 0:
        return []
    else:
        return [lst[-1]] + reverse_list(lst[:-1])

# Main program
numbers = [1, 2, 3, 4, 5]
reversed_numbers = reverse_list(numbers)
print(f"Original list: {numbers}")
print(f"Reversed list: {reversed_numbers}")
'''

'''
print("Enter 5 numbers:")
lst=[int(input()) for lst1 in range(5)]

def reverse(lst,i=0):
    while(i<len(lst)):
        lst[i]=lst[len(lst)-1]
    reverse(lst,i+1)
    return(lst)

rev_lst=reverse(lst)
print(f"The original list:{lst}")
print(f"The reversed list:{rev_lst}")
'''