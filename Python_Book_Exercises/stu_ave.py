import math

Mark = {
  "Name": "Mark Spark",
  "Quizzes": [89.0, 95.0, 78.0, 90.0],
  "Homework": [89.0, 60.0, 98.0],
  "Recitation": [89.0,90.0, 88.0],
  "Tests": [85.0, 92.0],
}

Selen = {
  "Name": "Selen Jobs",
  "Quizzes": [98.0, 100.0, 95.0, 100.0],
  "Homework": [85.0, 84.0, 90.0],
  "Recitation": [87.0, 89.0, 90.0],
  "Tests": [90.0, 97.0],
}

Shane = {
  "Name": "Shane Taylor",
  "Quizzes": [75.0, 87.0, 95.0, 84.0],
  "Homework": [92.0, 74.0, 99.0],
  "Recitation": [80.0, 83.0, 84.0],
  "Tests": [98.0, 100.0],
}


def student_average(score_input):
  """ This function returns the average of
  student scores pass to it as argument in
  list form. """

  score_total = sum(score_input)
  average_score = score_total/len(score_input)
  return average_score

def call_average(student_data):

  A = student_average(student_data["Quizzes"])
  B =  student_average(student_data["Homework"])
  C = student_average(student_data["Recitation"])
  D = student_average(student_data["Tests"])

  print(student_data["Name"])
  return math.ceil(.2 * A + .1 * B + .3 * C + .4 * D)

print(call_average(Mark))
print(call_average(Shane))
print(call_average(Selen))
