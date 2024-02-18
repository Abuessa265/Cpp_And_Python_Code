
'''dictionary_name={
  key:value,
  key:value,
  }'''

person = {
    "first_name": "Abuessa",
    "last_name": "Muzahid",
    "Age": 30
}
print(person)

x = person["first_name"]
print("First name is ", x)


employee_data = {
    # nasted dictonary
    "manager": {
        "name": "Abu Essa",
        "age": 23
    },
    "programmer": {
        "name": "Muzahid",
        "age": 24
    },
    "salary": {
        "manager_salary": 25000,
        "programmer_salary": 30000
    }
}
print("Manager name is : ", employee_data["manager"]["name"],
      "\nManager age is :", employee_data["manager"]["age"],
      "\nManager salary is :", employee_data["salary"]["manager_salary"]
      )
print("\nProgrammer name is : ", employee_data["programmer"]["name"],
      "\nProgrammer age is : ", employee_data["programmer"]["age"],
      "\nProgrammer salary is : ", employee_data["salary"], [
          "programmer_salary"]
      )
