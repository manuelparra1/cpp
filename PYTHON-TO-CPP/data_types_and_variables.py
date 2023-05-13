# 1. 
# You have rented some movies for your kids: 
# The little mermaid (for 3 days), Brother Bear 
# (for 5 days, they love it), and Hercules (1 day, 
# you don't know yet if they're going to like it). 
# If price for a movie per day is 3 dollars, 
# how much will you have to pay?

price = 3
little_mermaid = price*3
brother_bear = price*5
hercules = price*1

total_cost = little_mermaid + brother_bear + hercules

print('Rental Cost = $' + str(total_cost))

# 2. 
# Suppose you're working as a contractor
# for 3 companies: Google, Amazon and Facebook,
# they pay you a different rate per hour. Google
# pays 400 dollars per hour, Amazon 380, and Facebook 350.
# How much will you receive in payment for this week? 
# You worked 10 hours for Facebook, 6 hours for
# Google and 4 hours for Amazon.

def print_pay_total(rate, hours):
    print("Pay Total: $" + str(rate*hours))

google_pay_rate = 400
amazon_pay_rate = 380
facebook_pay_rate = 350

print_pay_total(facebook_pay_rate, 10)
print_pay_total(google_pay_rate, 6)
print_pay_total(amazon_pay_rate, 4)

# 3. 
# A student can be enrolled to a class only if the 
# class is not full and the class schedule does 
# not conflict with her current schedule.

class_full = True
schedule_conflict = True
if class_full or schedule_conflict:
    print("Can't Enroll")
else:
    print("Just do it!")
    
# 4.
# A product offer can be applied only if people buys 
# more than 2 items, and the offer has not expired.
# Premium members do not need to buy a specific
# amount of products.

def product_offer(pur, exp, prm):
    if premium_member and not exp:
        return True
    elif (purchases > 2) and not exp:
        return True
    else:
        return False

purchases = 4
expired = True
premium_member = True

print(product_offer(premium_member, purchases, expired))

#-----------------------------------------------------------
username = 'codeup'
password = 'notastrongpassword '
#-----------------------------------------------------------
#the password must be at least 5 characters

password_size = len(password) >= 5
print("password test")
print(password_size)

#the username must be no more than 20 characters

username_size = len(username) <= 20
print("username test")
print(username_size)

#the password must not be the same as the username

not_same_check = username != password
print(not_same_check)

#bonus neither the username or password can start or end with whitespace

print("White Space Check")

def white_space_check(user_name, pass_word):
    if (user_name.startswith(" ") or user_name.endswith(" ") or pass_word.startswith(" ") or user_name.endswith(" ")):
        return True
    else:
        return False
print(white_space_check(username, password))
