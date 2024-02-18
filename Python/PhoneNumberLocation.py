import phonenumbers  # phonenumbers modeule add korlam
from phonenumbers import timezone, geocoder, carrier

number = input("Enter Your Phone Number: ")
phone = phonenumbers.parse(number)
# en means holo phone number ta english e hobe
time = timezone.time_zones_for_number(phone)
sim_details = carrier.name_for_number(phone, "en")
register = geocoder.description_for_number(phone, "en")

print(number)
print(phone)
print(time)
print(sim_details)
print(register)
