from restaurant import Restaurant

restaurants = []
restaurants.append(Restaurant("El Inglés", "Comida inglesa"))
restaurants.append(Restaurant("La papa", "Todo con papa"))
restaurants.append(Restaurant("Cena en UGAB", "Comida armenia"))

for obj in restaurants:
    obj.describe_restaurant()
