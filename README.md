# JW-YG-YH-final-project
Group Members(Yanjun Guan, Yihua Hao,and Junlong Wu)<br />
Emails of Members(yguan030@ucr.edu, jwu294@ucr.edu ,yhao024@ucr.edu)<br />
Title: BMI calculator<br />
We are going to make an app that can calcuate the BMI（a value derived from the mass and height of a person）of a person. <br />
The reason why it is important and we are interesting is we are interested about what a healthy body should look like. We want to know how to calculate the BMI for a person, and the range of BMI for a healthy person.<br />
We are planning use C++ for our project.<br />
The input of our program is the gender, height and weight for a person, and it will output the BMI for this person.<br />


##Factory pattern by Yihua Hao
First I creat the factory.hpp file, factory class can make strings to base type. 
Then I use CMmakeLish to create a main executable and a test executable. 
My main executable named BMI and take the char*\* argv and the int argc input to main and pass it to the factory. 
So we can run the executable like `./BMI 1 70 1.8` 
We use the first number to choice the function of BMI.
1 = weight(kg)/(height(m))^2
2 = weight(lb) * 703 /(height(in)^2)
the second number is weight.
the third number is height.



