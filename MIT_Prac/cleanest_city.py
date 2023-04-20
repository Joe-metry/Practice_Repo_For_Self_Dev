cleanest_city = input("Enter city name:\n")
cleanest_Lower = cleanest_city.lower()
cleanest_cities = ["cheyenne", "santa fe",
                   "tucson", "great falls", "honolulu"]
found = False
for j in cleanest_cities:
    if j == cleanest_Lower:
        cleanest = cleanest_Lower.title()

        print(f'{cleanest} is one of the cleanest cities!')
        found = True

if not found:
    cleanest = cleanest_Lower.title()
    print(f'Sadly {cleanest} is not in the top 5 cleanest cities in the USA.')
