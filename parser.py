import csv
import time
from turtle import *
from matplotlib import pyplot as plt
from matplotlib import style
import numpy as np
import turtle
def csvData():
	with open("1.csv", 'rt') as f:
    		csv_reader = csv.reader(f)

    		maxpressure = 0
    		xval = 0
		xreg = 0
		with open("xyData.txt", 'wrt') as wl:
    			for line in csv_reader:
        			if (line[2]) == "TOCO":
        				for data in line[3:]:
						xval = xval + 1
						if(data == ''):
							next
						
        	        			else:
							wl.write(data)
							wl.write('\n')
							        	        		
        			else:
        	    			next
			print("X value is:", xval)
			#testFeed()
			
			

def l1Push(strength):
	print("Your push strength is at a cool: ", strength)
	
	
def l2Push(strength):
	
	print("A contraction may be on the rise")
	print(strength)
	

def l3Push(strength):
	print("You are entering the contraction")

def testFeed():
	with open("xyData.txt", 'r') as xy:
		with open("example.txt", 'wrt') as ex:
			xy.seek(99538)
			print("I seeked")
			txtRead = xy.read(6)
			print(txtRead)
			



def graph():
	style.use('ggplot')

	x = np.loadtxt('example.txt', unpack = True, delimiter = ',')

	plt.plot(x)
	plt.title('Feedback')
	plt.xlabel('Time')
	plt.ylabel('Pressure')


	plt.show()


def timing():
	y = -400
	print("Printing a circle every second")		
	x = int(y)
	drawing(x)
	y= y + 100
	time.sleep(1)

def demo():
	with open("example.txt", 'r') as ex:
		x = 0
		y = -500
		i = 1
		num = 0
		pp = 0
		for data, line in enumerate(ex):
			if(data == (4*i)):
				i = i + 1
				num = num + 1
				
				print("Data value is:", int(line))
					
				if(y <= 400):				
					if(int(line) >= 99):	
						pp = int(line)	
						x = int(y)
						drawing(x)
						y= y + 100
				#else:
					#time.sleep(1)
						
				
				#time.sleep(1)
				
		print(num)		
				
	graph()

def demo1():
	with open("example.txt", 'r') as ex:
		x = 0
		y = -600
		i = 1
		for data, line in enumerate(ex):
			if(data == (4*i)):
				print(line)
				i = i+1
				maxPush = 99
				if(int(data) > 99):
					x = 100
					drawing(x)
					x = x + 100
				
				
	
def refresh(x):
	bgcolor("white")
	title("BioFeedback")


def drawing(x):
	window = turtle.Screen()
	turtle.bgcolor("black")
	turtle.title("BioFeedback")
	turtle.speed(3)
	turtle.pensize(3)
	turtle.up()
	turtle.goto(x,-50)
	turtle.down()
	turtle.pencolor("white")
	turtle.fillcolor("green")
	turtle.begin_fill()
	t0 = time.time()
	
	turtle.forward(80)
	turtle.left(90)
	turtle.forward(80)
	turtle.left(90)
	turtle.forward(80)
	turtle.left(90)
	turtle.forward(80)
	turtle.left(90)
	turtle.end_fill()	
	#turtle.bgcolor("white")
	time.sleep(.1)
	print(time.time() - t0)
	#window.exitonclick()

	
	

#csvData()
#testFeed()
#timing()
#graph()
demo()
#drawing()

