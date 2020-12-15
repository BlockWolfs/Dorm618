import time

# get current time stamp
print( time.time())

# get current format time
print( time.ctime())

# get time object . It be used by the program.
t = time.gmtime()
print( t)

# setting format of time
# time control marks 
# abbreviation
t = time.strftime("%Y-%m-%d %H:%M:%S",t)
t = time.strptime(t)
# string format time
# string patterm time
print (t)

# measures time and counter time
print("\n\ntime passing...")
start = time.perf_counter()
time.sleep(3.3)
end = time.perf_counter()
length_time = end - start 
print("length_time is {:.2}s.".format(length_time))











