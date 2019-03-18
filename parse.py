import csv
 
with open("1.csv", 'rt') as f:
    csv_reader = csv.reader(f)

    maxpressure = 0
    
    for line in csv_reader:
        if (line[2]) == "TOCO":
            for data in line[3:]:
                if (data == ''):
                    next 
                elif (int(data) > maxpressure):
                    maxpressure = int(data)
                    print("Max push is now", maxpressure)
                else:
                    next
        else:
            next
        
