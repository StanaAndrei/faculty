def print_interval(min_value, max_value):
    if min_value > max_value:
        return

    print(min_value)
    print_interval(min_value + 1, max_value)
