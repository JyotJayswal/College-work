# Convert list of temperatures in Fahrenheit degrees to equivalent Celsius degrees.

print("Enter 5 temperatures in degree fahrenheit:")
fah=[int(input(f"temperature{i}:")) for i in range(1,6)]
celsius=[]
print("The temp. in fahrenheit are:",fah)

def fah_to_celsius(fah):
    for i in fah:
        c=int((5/9)*(i-32))
        celsius.append(c)
    return(celsius)

print("The temp. in celsius are:",fah_to_celsius(fah))