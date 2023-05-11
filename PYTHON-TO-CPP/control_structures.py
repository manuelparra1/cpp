def overtime_check(hours, pay):
    if hours > 40:
        return (40*pay)+((hours-40)*(pay*1.5))
    else:
        return hours*pay

#  1. Conditional Basics
#     1-a. prompt the user for a day of the week, print out whether the day is Monday or not

print('Day of the week?')
day = input()

if day.lower().strip() == 'monday':
    print("Yes it's Monday.")
else:
    print("It's not Monday")

#     1-b. prompt the user for a day of the week, print out whether the day is a weekday or a weekend

print('What day of the week is it?')
day = input()

if day.lower().strip() in ['saturday','sunday']:
    print("Weekend baby!")
else:
    print("Back to the grind...")

#     1-c. create variables and make up values for
#        1c-I.  the number of hours worked in one week

hours_worked = 52

#        1c-II.  the hourly rate

hourly_rate = 16.50

#        1c-III.  how much the week's paycheck will be

paycheck = overtime_check(hours_worked,hourly_rate)
print("Paycheck: $" + str(paycheck))
print("Hold your horses!\n\nYou have to pay Uncle Sam!")
print("Paycheck AFTER taxes: $" + str(paycheck*.7))

#  2. Loop Basics
#     2a.  While
#         2a-I. Create an integer variable i with a value of 5.
i=5
#         2a-II. Create a while loop that runs so long as i is less than or equal to 15
while i <= 15:
#         2a-III. Each loop iteration, output the current value of i, then increment i by one.
    print(i)
    i+=1
#         2a-IV. Create a while loop that will count by 2's starting 
#             with 0 and ending at 100. Follow each number with a new line.
while i <= 100:
    print(i+"\n")
    i+=2
#         2a-V. Alter your loop to count backwards by 5's from 100 to -10

i=100
while i >= -10:
    print(str(i)+"\n")
    i-=5

#         VI. Create a while loop that starts at 2, 
#             and displays the number squared on each 
#             line while the number is less than 1,000,000.
#             Output should equal:
i=2
while i < 1_000_000:
    print(i)
    i**=2
#         2a-VI. Write a loop that uses print to create 
#             the output shown below
i=100
while i >=5:
    print(i)
    i-=5
#  2b. For Loops
#      2b-I. Write some code that prompts the user for a number,
#            then shows a multiplication table up through 10 
#            for that number.

print('Enter a number: ')
num_mult = int(input())

for i in range(1,11):
    print(str(i) + " x " + str(num_mult) + " = " + str(i*num_mult))
    i+=1

#      2b-II. Create a for loop that uses print to create the output shown below.
#
#      1
#      22
#      333
#      4444
#      55555
#      666666
#      7777777
#      88888888
#      999999999
for i in range(1,10):
    print(str(i)*i)
#  2c. break and continue
#      2c-I. Write a program that prompts the user 
#            for a positive integer. Next write a loop that 
#            prints out the numbers from the number the user 
#            entered down to 1.
count_down = int(input("Enter positive number: "))

while count_down >= 1:
    if int(count_down) < 1:
        break
    print(count_down)
    count_down -= 1

#      2c-II. Prompt the user to enter a positive number and write a 
#             loop that counts from 0 to that number. 
#             (Hints: first make sure that the value the user
#             entered is a valid number, also note that the input 
#             function returns a string, so you'll need to convert 
#             this to a numeric type.)
#
#    N  O  T    D  O   N  E
#

i=1
while i < 50:
    print("Enter a positive + odd number between 1 & 50: ")
    num_input = input()
    
    if (num_input.isdigit and (int(num_input)%2)>0) and (int(num_input) <= 50 and int(num_input) >=1):
        print("correct number!")
    else:
        print("")
        continue
    
    if i == int(num_input):
        print("Yikes! Skipping number: " + num_input)
        i+=1
        continue
    print(i)
    i+=1
#      2c-III. Prompt the user for an odd number between 1 and 50. 
#              Use a loop and a break statement to continue prompting 
#              the user if they enter invalid input. 
#              (Hint: use the isdigit method on strings to determine this). 
#              
#              Your output should look like this:
#
#              Number to skip is: 27
#              
#              Here is an odd number: 1
#              Here is an odd number: 3
#              Here is an odd number: 5
#              Here is an odd number: 7
#              Here is an odd number: 9
#              Here is an odd number: 11
#              Here is an odd number: 13
#              Here is an odd number: 15
#              Here is an odd number: 17
#              Here is an odd number: 19
#              Here is an odd number: 21
#              Here is an odd number: 23
#              Here is an odd number: 25
#              Yikes! Skipping number: 27
#              Here is an odd number: 29
#              Here is an odd number: 31
#              Here is an odd number: 33
#              Here is an odd number: 35
#              Here is an odd number: 37
#              Here is an odd number: 39
#              Here is an odd number: 41
#              Here is an odd number: 43
#              Here is an odd number: 45
#              Here is an odd number: 47
#              Here is an odd number: 49
#  3. FizzBuzz
#     One of the most common interview questions 
#     for entry-level programmers is the FizzBuzz test. Developed by Imran Ghory, 
#     the test is designed to test basic looping and conditional logic skills.
#     Write a program that prints the numbers from 1 to 100.
#     For multiples of three print "Fizz" instead of the number
#     For the multiples of five print "Buzz".
#     For numbers which are multiples of both three and five print "FizzBuzz".

i=1
while i<=100:
    if (i%3==0 and i%5==0):
        print("FizzBuzz")
        i+=1
        continue
    elif i%3==0:
        print("Fizz")
        i+=1
        continue
    elif i%5==0:
        print("Buzz")
        i+=1
        continue
    print(i)
    i+=1

#  4. Display a table of powers
#
#     Prompt the user to enter an integer.
#     Display a table of squares and cubes from 1 to the value entered.
#     Ask if the user wants to continue.
#     Assume that the user will enter valid data.
#     Only continue if the user agrees to.

print("Enter an interger:")
num_in = int(input())

column1="number"
column2="squared"
column3="cubed"

print(f"{column1:5} | {column2:5} | {column3:6}")
print("-"*26)
i=1
while i<=num_in:
    squ=i**2
    cub=i**3
    
    print(f"{i:6} | {squ:7} | {cub:6}")
    i+=1

#  5. Convert given number grades into letter grades.   
#Prompt the user for a numerical grade from 0 to 100.
#Display the corresponding letter grade.
#Prompt the user to continue.
#Assume that the user will enter valid integers for the grades.
#The application should only continue if the user agrees to.
#Grade Ranges:

#A : 100 - 88
#B : 87 - 80
#C : 79 - 67
#D : 66 - 60
#F : 59 - 0
#Bonus

#Edit your grade ranges to include pluses and minuses (ex: 99-100 = A+).#

print("Enter a grade number: \"1-100\"")
num_grd=int(input())
let_grd="Z"
if (num_grd >= 88 and num_grd<=100):
    let_grd = "A"
    print(let_grd)
elif (num_grd >= 80 and num_grd<=87):
    let_grd = "B"
    print(let_grd)
elif (num_grd >= 67 and num_grd<=79):
    let_grd = "C"
    print(let_grd)
elif (num_grd >= 60 and num_grd<=66):
    let_grd = "D"
    print(let_grd)
elif (num_grd >= 0 and num_grd<=59):
    let_grd = "F"
    print(let_grd)

#  6. Create a list of dictionaries where each dictionary 
#     represents a book that you have read. Each dictionary 
#     in the list should have the keys title, author, and 
#     genre. Loop through the list and print out information 
#     about each book.

books = [{"title":"First 20 Minutes","author":"Gretchen Reynolds","genre":"Non-Fiction"},
         {"title":"Harry Potter","author":"J.K. Rowling","genre":"Fiction"},
         {"title":"Variable Star","author":"Robert A. Heinlein","genre":"Sci-Fi"}]
dataList = [{'a': 1}, {'b': 3}, {'c': 5}]

for index in range(len(books)):
    for key in books[index]:
        print(books[index][key])

    print("\n")

#     a. Prompt the user to enter a genre, 
#        then loop through your books list and 
#        print out the titles of all the books 
#        n that genre.

genre_in=input("Enter a genre: ")

print("\n")

for index in range(len(books)):
    if (books[index]["genre"].lower()) == genre_in:
        for key in books[index]:
            print(books[index][key])
