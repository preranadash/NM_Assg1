
def add_numbers(*args, **kwargs):
    """
    - *args (float or int): Variable number of positional arguments.
    - **kwargs (float or int): Variable number of keyword arguments.

    """
    total = sum(args) + sum(kwargs.values())
    return total

# Example usage:
# Uncomment the lines below if you want to test the function
result = add_numbers(5, 10, good=2, bad=4, ugly=6, win=1, dow=2)
print("Result with arbitrary positional and keyword arguments:", result)
