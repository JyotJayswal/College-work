FILE = "students.txt"

def read_students():
    try:
        with open(FILE, "r") as f:
            return [line.strip().split(",") for line in f if line.strip()]
    except FileNotFoundError:
        return []

def write_students(students):
    with open(FILE, "w") as f:
        for s in students:
            f.write(",".join(s) + "\n")

def add_student():
    students = read_students()
    roll = input("Roll No: ")
    if any(s[0] == roll for s in students):
        print("Roll no exists.")
        return
    name = input("Name: ")
    age = input("Age: ")
    dept = input("Dept: ")
    students.append([roll, name, age, dept])
    write_students(students)
    print("Added.")

def view_all():
    students = read_students()
    if not students:
        print("NA")
        return
    for roll, name, age, dept in students:
        print(f"{roll}, {name}, {age}, {dept}")

def search_student():
    roll = input("Roll No: ")
    for s in read_students():
        if s[0] == roll:
            print(f"{s[0]}, {s[1]}, {s[2]}, {s[3]}")
            return
    print("Not found.")

def update_student():
    students = read_students()
    roll = input("Roll No: ")
    for s in students:
        if s[0] == roll:
            s[1] = input("New Name: ")
            s[2] = input("New Age: ")
            s[3] = input("New Dept: ")
            write_students(students)
            print("Updated.")
            return
    print("NA")

def delete_student():
    students = read_students()
    roll = input("Roll No: ")
    new_students = [s for s in students if s[0] != roll]
    if len(new_students) == len(students):
        print("NA")
    else:
        write_students(new_students)
        print("Done")

while True:
    print("\n1. Add\n2. View\n3. Search\n4. Update\n5. Delete\n6. Exit")
    choice = input("Choice: ")
    if choice == "1": add_student()
    elif choice == "2": view_all()
    elif choice == "3": search_student()
    elif choice == "4": update_student()
    elif choice == "5": delete_student()
    elif choice == "6": break
    else: print("NA")
