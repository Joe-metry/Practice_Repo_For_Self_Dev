first_names = ["BlueRay", "Upchuck", "Lojack",
               "Gizmo", "Do-Rag"]

last_names = ["Zzz", "Burp", "Dogbone", "Droop"]

full_names = []

for i in first_names:
    for j in last_names:
        full_names.append(i + " " + j)
print(full_names)
