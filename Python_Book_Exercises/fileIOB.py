'''
Read this file. Use shorthand to open it. Make up the variable.
with open("students.txt", "w") as student_file
student_file.write("Smith", "Brown", "Alain")
  '''

  with open("students.txt") as student_file:
  student_data = student_file.read()
