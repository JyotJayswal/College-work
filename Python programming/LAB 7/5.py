# Create two dictionaries, one containing grocery items & their prices.
# another containing grocery items & quantity purchased.
# By using the values from these two dictionaries compute the total bill.

price={"rice":120,"oil":180,"milk":32,"flour":60,"maggie":25}
quantity={"rice":5,"oil":2,"milk":4,"flour":10,"maggie":10}
bill=0  #initialise bill amount as zero

for i in price.keys(): # accessing keys of price dictionary 
        bill=(bill)+(price[i]*quantity[i])  #access respective values to do respective multiply & sum

print("Total bill is:",bill)    #print total bill
