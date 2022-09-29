import time

# checks amount of time it takes to run

# first interval
tic = time.perf_counter()

# run random inpit
print("Hello")
x = 4 + 8 * 2 
print(x)
tempList = ["Value", 2, 3, "Value2"]
print(tempList)

# sleps for time.sleep(seconds)
time.sleep(2)

# last interval
toc = time.perf_counter()

# Prints the value in seconds and formatted to 5 decimal places
print(f"Time between computations: {toc-tic:0.5f} seconds\n")
