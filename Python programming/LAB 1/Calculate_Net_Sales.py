# discount=10% of gross sales
# net_sales=gross_sales-discount

gross=float(input("Enter the gross sales units:"))
discount=gross/10
net=gross-discount
print("\nYour gross sales are",float(gross))
print("Your discount is",float(discount))
print("\nYour net sales are",float(net))