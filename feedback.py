import csv
from turtle import *
from matplotlib import pyplot as plt
from matplotlib import style
import numpy as np

def graphCSV():
	style.use('ggplot')
	with open("1.csv", 'rt') as f:
    		csv_reader = csv.reader(f)
    
    		for line in csv_reader:
        		if (line[2]) == "TOCO":
        			for data in line[3:]:
        	        		if (data == ''):
        	            			next 
        	        		else:
        	        	    		data = np.loadtxt('1.csv', unpack = True, delimiter = 'TOCO')
        		else:
        	    		next


graphCSV()
style.use('ggplot')
x,y = np.loadtxt('example.txt', unpack = True, delimiter = ',')

plt.plot(x,y)
plt.title('Feedback')
plt.xlabel('Time')
plt.ylabel('Pressure')
plt.show()

