# JW-YG-YH-final-project
Group Members(Yanjun Guan, Yihua Hao,and Junlong Wu)<br />
Emails of Members(yguan030@ucr.edu, jwu294@ucr.edu ,yhao024@ucr.edu)<br />
Title: BMI calculator<br />
We are going to make an app that can calcuate the BMI（a value derived from the mass and height of a person）of a person. <br />
The reason why it is important and we are interesting is we are interested about what a healthy body should look like. We want to know how to calculate the BMI for a person, and the range of BMI for a healthy person.<br />
We are planning use C++ for our project.<br />
The input of our program is the height and weight for a person, and it will output the BMI for this person.<br />
All we need to do is run the program by using the command line ./BMI and the follwing input is the option of two systems(1 for standard system and 2 for metric system) and then you can input your weight and you height.<br />
Sample command line `./BMI 1 60 1.75` which is weight in 60kilogram and height in 1.75meter<br />
Sample command line `./BMI 2 180 70` which is weight in 180lbs and height in 70inches<br />
Please check out the sample input/output screenshot in the files for more details <br />

# Factory pattern by Yihua Hao<br />  
First I creat the factory.hpp file, factory class can make strings to base type. <br />
Then I use CMmakeLish to create a main executable and a test executable. <br />
My main executable named BMI and take the char*\* argv and the int argc input to main and pass it to the factory. <br />
So we can run the executable like `./BMI 1 70 1.8` <br />
We use the first number to choice the function of BMI.<br />
1 = weight(kg)/(height(m))^2<br />
2 = weight(lb) * 703 /(height(in)^2)<br />
the second number is weight.<br />
the third number is height.<br />
I rewrite the calculator class. <br />
I write Metric Calculator and Standard Calculator class as subclasses of calculator class.<br />
I also write a create function of Calculator class, if function choice is 1, then we return a Metric_calculator class pointer, if function choice is 2, we return the Standard_calculator pointer, otherwise return nullptr.<br /> 
![image](https://github.com/jw2670105/JW-YG-YH-final-project/blob/master/2-4.jpg)

# Composite pattern by Junlong Wu<br /> 
I created the hpp file for add, subtract, divide, multiple, and power, so we can directly access them in main.</br>
My partners can also use them for their design partterns.</br>
Then I created the unit tests to test if it is works fine.</br>
Finally I merge it with my partners' work together.

# Decorator pattern by Yanjun Guan<br /> 
I created the base.hpp at frist which contain a vistual function in it
and then I created a decoratot.hpp and its base.hpp 's sub class.<br /> 
After that I created calculator.hpp which calculates the BMI <br />
and also result.hpp is the sub class of decorator.hpp.<br /> 
Also the resutl.hpp will output your BMI index and the reult of your health.<br /> 

# Test
![image](https://github.com/jw2670105/JW-YG-YH-final-project/blob/master/Screen%20Shot%202020-07-23%20at%2001.13.01.png)

# Sample input and output

![image](https://github.com/jw2670105/JW-YG-YH-final-project/blob/master/sample%20input%20output.png)
![image](https://github.com/jw2670105/JW-YG-YH-final-project/blob/master/Screen%20Shot%202020-07-23%20at%2001.14.51.png)
