# class create

# class person:
#     first_name = "ABUESSA"
#     last_name = "Muzahid"
#     age = 20


# person_obj = person()  # class object
# firstName = person_obj.first_name
# lastName = person_obj.last_name
# age = person_obj.age

# print("First Name: ", firstName)
# print("Last Name: ", lastName)
# print("Age: ", age)

# ....class with attribute....
# Creating an instance of the class
class student:  # classes atribuite
    def __init__(self, id_number, name, age):  # Attribute, constractor
        self.id_number = id_number
        self.name = name
        self.age = age

    def greet_student(self):  # method
        print("hello " + self.name + ",How are you?")


student1 = student(265, "Abuessa", 23)  # instance
student2 = student(111, "Karim", 24)
student1.greet_student()
x = student1.id_number
y = student1.name
z = student1.age

print("Student one roll no is : ", x)
print("Student one name  is : ", y)
print("Student one age is : ", z, "\n")


student2.greet_student()
print("Student 2 id number is :", student2.id_number)
print("Student 2 name is :", student2.name)
print("Student 2 age is :", student2.age)


# instance are always unique
