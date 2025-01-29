# net_salary=gross+allowance-deduction
# allowance=10% of gross & deduction=3% of gross

gross=float(input("Enter your gross salary:"))
allowance=gross/10
deduction=(gross*3)/100
net=gross+allowance-deduction
print("\nYour gross salary is",float(gross),"rupees")
print("Your allowance is",float(allowance),"rupees")
print("Your deduction is",float(deduction),"rupees")
print("\nYour net salary is",float(net),"rupees")