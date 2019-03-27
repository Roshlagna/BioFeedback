import csv
from turtle import *
from matplotlib import pyplot as plt
from matplotlib import style
import numpy as np


def bio_feedback1():
	

	bgcolor("black")
	title("BioFeedback")
	up()
	goto(0,-150)
	down()
	pencolor("white")
	fillcolor("green")
	begin_fill()
	circle(150)
	end_fill()

def bio_feedback(contraction):

	up()
	goto(0,-100)
	down()
	pencolor("white")
	fillcolor("purple")
	begin_fill()
	circle(contraction)
	end_fill()

def graphCSV():
	style.use('ggplot')

	x,y = np.loadtxt('example.txt', unpack = True, delimiter = ',')

	plt.plot(x,y)
	plt.title('Feedback')
	plt.xlabel('Time')
	plt.ylabel('Pressure')


	plt.show()


	
def main_line(): 
	with open("1.csv", 'rt') as f:
    		csv_reader = csv.reader(f)

    		maxpressure = 0
    
    		for line in csv_reader:
        		if (line[2]) == "TOCO":
        			for data in line[3:]:
        	        		if (data == ''):
        	            			next
					elif(int(data) < 25):
						strength = int(data)
						l1Push(strength)
					elif(int(data) < 50):
						strength = int(data)
						maxP = int(maxpressure)
						l2Push(strength)
					elif(int(data) > 70):
						print(data)
						print("Contraction on the rise and occurring!!")
						if(int(data) in range(97,100)):
							print("Peak contraction here! Showing push strength")
							contraction = int(data)
							#bio_feedback(contraction) 
        	        		else:
        	        	    		print(data)
        		else:
        	    		next

#push strength less than 20:
def l1Push(strength):
	print("Your push strength is at a cool: ", strength)
	
	
def l2Push(strength):
	
	print("A contraction may be on the rise")
	print(strength)
	

def l3Push(strength):
	print("You are entering the contraction")




bio_feedback1()
main_line()
