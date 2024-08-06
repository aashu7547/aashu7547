
import turtle
import colorsys
turtle.setup(800, 600)
turtle.speed(0) 
turtle.bgcolor("black")  
pen = turtle.Turtle()
pen.width(2)
pen.hideturtle()
n = 36
hue = 0

for i in range(360):
    color = colorsys.hsv_to_rgb(hue, 1.0, 1.0) 
    pen.color(color)
    pen.forward(i)
    pen.right(59)
    hue += 1/n
turtle.done()
