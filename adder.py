def add_numbers(num1, num2):
    """
    Adds two numbers and returns the result.

    """
    return num1 + num2


string_result = add_numbers("Hello, ", "world!")
list_result = add_numbers([1, 2, 3], [4, 5, 6])
float_result = add_numbers(3.14, 2.71)

# Print the results
print("String concatenation result:", string_result)
print("List concatenation result:", list_result)
print("Floating-point addition result:", float_result)

