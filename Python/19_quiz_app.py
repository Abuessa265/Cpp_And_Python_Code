# ........quiz app python............
q1 = '''What is a currect syntex to output "Hello world"in python?
a)echo("Hello world)
b)p("Hello world")
c)print(Hello world)
d)echo "Hello world
'''

q2 = '''which one is NOT a legal variable name ?
a)my_var
b)my-var
c)_myvar
d)Myvar
'''
q3 = '''What is the correct file extension for python files?
a).pyth
b).pt
c).py
d).pyt
'''

q4 = '''Which method can be used to return a string in upper case letters?
a)upper()
b)toUpperCase()
c)uppercase()
d)upperCase()
'''

q5 = '''Which operator is usrd to multiply numbers?
a)x
b)*
c)#
d)%
'''
# ...........Create dictionnaary...

questions = {
    q1: "c",
    q2: "b",
    q3: "c",
    q4: "a",
    q5: "b"
}
name = input("Enter your Name: ")
print("Hello ", name, "Welcome to the quiz")

score = 0
for i in questions:  # question ke etireate korsi using for loop
    print(i)
    skip_qn = input("Do you want to skip this question (Yes/No) = ")
    if (skip_qn == "Yes" or skip_qn == "yes"):
        continue
    answer = input("Enter the correct answer(a/b/c/d): ")
    if answer == questions[i]:
        print("Correct Answer ,You got 1 point ")
        score = score+1
        print("Corrent score is : ", score)
    else:
        print("Wrong answer ,You lost 1 point")
        score = score-1
        print("Corrent score is : ", score)

    skip_quiz = input("Do you want to skip this quiz (Yes/No) = ")
    if (skip_quiz == "Yes" or skip_quiz == "yes"):
        break

print("Your final score is ", score)
