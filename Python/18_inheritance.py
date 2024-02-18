class Animal:
    def __init__(self, name, age):  # ekhane name holo parameter
        self.name = name
        self.age = age

    def walk(self):  # method
        print(self.name+" Walks")


class Dog(Animal):
    # name,age ta parents class er parameter so ekhane attribute hisebe pass kora hoyese
    def __init__(self, name, age):
        super().__init__(name, age)

    def sound(self):
        print(self.name+" barks")


x = Dog("Coco", 1)  # amader parents class 1 ta e jonno 1 deoa hoyese
y = Dog("Alsa", 1)
x.walk()
x.sound()
y.walk()
y.sound()
