def add_numbers(*args, good=1, bad=2, ugly=3):
    """
    *args adds an arbitrary number of numbers and returns the result.

    """
    total = good + bad + ugly + sum(args)
    return total


result = add_numbers(5, 10, 15, good=5, ugly=1)
print("Result with arbitrary arguments and keyword arguments:", result)
"""

If you call the add_numbers function with good=5 and ugly=1,the values for good and ugly will override their default values and 
the function will use these new values during the addition but use the default value for bad,.i.e.,2.

"""
