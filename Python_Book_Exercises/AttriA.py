'''
Code an instance of this class.
Display the value of one of its attributes.
''' 

class Student():
  def __init__(self, age, gender, major):
    self.age = age
    self.gender = gender
    self.major = major

eng_4101 = Student(31, "male", "engineering")

print(eng_4101.major)
