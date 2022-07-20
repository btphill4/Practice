import csv

businesses = []

with open("/home/brandon/Desktop/business.csv", 'r') as businessFile:
    rows = csv.reader(businessFile, delimiter= ',')
    for r in rows:
        #append(r[0]) get first column, append(r[1]) gets 2nd column, etc
        businesses.append(r[1])
        #print(r)

print(businesses)
#print(businesses[1])