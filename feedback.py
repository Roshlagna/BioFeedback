import csv
from turtle import *
from matplotlib import pyplot as plt
from matplotlib import style
import numpy as np

def csvData():
	with open("1.csv", 'rt') as f:
    		csv_reader = csv.reader(f)

    		maxpressure = 0
    		xval = 0
		xreg = 0
		with open("xyData.txt", 'wt') as wl:
    			for line in csv_reader:
			
        			if (line[2]) == "TOCO":
        				for data in line[3:]:
						xval = xval + 1
						if(data == ''):
							next
						elif(int(data) < 25):
							strength = int(data)
							l1Push(strength)
							wl.write(data)
							wl.write('\n')

						elif(int(data) < 50):
							strength = int(data)
							l2Push(strength)
							wl.write(data)
							wl.write('\n')
						elif(int(data) > 70):
							print(data)
							wl.write(data)
							wl.write('\n')
							print("Contraction on the rise and occurring!!")
							if(int(data) in range(97,100)):
								print("Peak contraction here! Showing push strength")
								contraction = int(data)
								wl.write(data)
								wl.write('\n')
								#bio_feedback(contraction) 
        	        			else:
        	        	    			print(data)							
							wl.write(data)
							wl.write('\n')
							        	        		
        			else:
        	    			next
			#print("X value is:", xval)
			#print("data region value is:", xreg)
			#print("The max pressure was", maxpressure)


def l1Push(strength):
	print("Your push strength is at a cool: ", strength)
	
	
def l2Push(strength):
	
	print("A contraction may be on the rise")
	print(strength)
	

def l3Push(strength):
	print("You are entering the contraction")


def graph():
	style.use('ggplot')

	x = np.loadtxt('xyData.txt', unpack = True, delimiter = ',')

	plt.plot(x)
	plt.title('Feedback')
	plt.xlabel('Time')
	plt.ylabel('Pressure')


	plt.show()




csvData()
graph()

