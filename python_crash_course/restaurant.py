class Restaurant:
    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type

    def describe_restaurant(self):
        print(self.restaurant_name, self.cuisine_type)

    def open_restaurant(self):
        print("the restaurant is open")


if __name__ == "__main__":
    re = Restaurant("La papa", "comida rica")
    re.describe_restaurant()
    print(re.cuisine_type)
    re.open_restaurant()
    print(re.restaurant_name)
