'''
  Write to a file, then read it. Use the shorthand form. Make everything up.
  '''

  with open("students.txt", "w") as student_file:
  student_file.write("File updated")

with open("students.txt") as up_file:
  student_data = up_file.read()
