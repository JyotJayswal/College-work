# Create two dictionaries, one containing grocery items & their prices.
# another containing grocery items & quantity purchased.
# By using the values from these two dictionaries compute the total bill.

price={"rice":120,"oil":180,"milk":32,"flour":60,"maggie":25}
quantity={"rice":5,"oil":2,"milk":4,"flour":10,"maggie":10}
bill=0
for i in price: 
        bill=(bill)+(price[i]*quantity[i])

print("Total bill is:",bill)
