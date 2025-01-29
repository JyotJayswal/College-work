# Convert number 0 to 19 to its equivalent words.
# E.g. 0-->zero, 19-->nineteen.

num=int(input("enter any number between 0 to 19:"))
match(num):
    case 0:print(num,"-->Zero")
    case 1:print(num,"-->One")
    case 2:print(num,"-->Two")      # USING MATCHCASE STATEMENT
    case 3:print(num,"-->Three")
    case 4:print(num,"-->Four")
    case 5:print(num,"-->Five")
    case 6:print(num,"-->Six")
    case 7:print(num,"-->Seven")
    case 8:print(num,"-->Eight")
    case 9:print(num,"-->Nine")
    case 10:print(num,"-->Ten")
    case 11:print(num,"-->Eleven")
    case 12:print(num,"-->Twelve")
    case 13:print(num,"-->Thirteen")
    case 14:print(num,"-->Fourteen")
    case 15:print(num,"-->Fifteen")
    case 16:print(num,"-->Sixteen")
    case 17:print(num,"-->Seventeen")
    case 18:print(num,"-->Eighteen")
    case 19:print(num,"-->Ninteen")

# IT CAN ALSO BE DONE BY USING ELIF STATEMENTS


'''
SYNTAX FOR MATCHCASE-->(SAME AS SWTICHCASE)
match(varriable_name/expression):

case expression/variable_value_1: executable statement
case expression/variable_value_2: executable statement  #no need to use break statement
case expression/variable_value_3: executable statement
.
.
case expression/variable_value_n: executable statement

case_1:executable statement
case_2:executable statement   # _(underscore) is used for forming default case
case_3:executable statement   #in python more than 1 default case can be formed



'''