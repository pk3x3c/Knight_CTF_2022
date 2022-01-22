# Challenge 1
## Keep Calculating

One of our clients needs a command line tool to do some math tasks. Can you create the tool by following pseudo code ?

    Let x = 1
    Let y = 2
    Let answer += (x * y) + xy [here xy = 12]
    Repeat this calculation till you have x = 666
    The final answer will be the flag when x = 666

Flag Format : KCTF{answer_here}

# Challenge 2
## Time Complexity

Find the time complexity of Algorithms.

    procedure max (a1, a2, …, an: integers)
    max := a1
    for i :=2 to n
    if max < a1 then max := ai
    {max is the largest element}

Flag Format: KCTF{θ(...)}

# Challenge 3
## Reverse The Answer

    Let x = 1

    Let calculation = (x*(x+1)) + (2 *(x + 1))

    Let reversed_calc = reversed number of calculation [for example if calculation = 123, reversed_calc will be 321]

    If reversed_calc can be divided by 4 without reminder then answer = answer + reversed_calc

    Repeat all the calculations until you have x = 543

    The final answer will be the flag when x = 543

Flag Format : KCTF{answer_here}

# Challenge 4
## Square Sum

Have you ever heard the term "The sum of two squares"?

It's like the following :

4 = 0^2 + 2^2
8 = 2^2 + 2^2
16 = 0^2 + 4^2
----------------------------
5002 = 39^2 + 59^2 => 49^2 + 51^2 => 51^2 + 49^2 => 59^2 + 39^2

And so on. In the example of 16, if we add the square of 0 & 4 we get 16. So here we are getting two values 0 & 4. So that's the answer.

So write a program & find out the two values of 25000. Conditions are the following :

* Remove the duplicates
* Pick the third one


Flag Format : KCTF{0,1}

# Challenge 5
## Something In Common

Find the GCD of the following numbers and add up the all integers of that GCD and multiply with 1234.
Number 1: 21525625
Number 2: 30135875

Example: The GCD of 50 & 75 is 25.
Here, 2 + 5 = 7
So, the flag will be 7 x 1234 = 8638.

Flag Format: KCTF{8638}

# Challenge 6
## Find The Number

What would be the output if we input 25 in the function that is shown in the flowchart?
![image](https://user-images.githubusercontent.com/53575624/150631636-9f034830-ccf7-4d2f-a976-2a53f5c203a7.png)

Flag Format: KCTF{X.xxxxxxxxxxxxxxxx}

# Challenge 7
## Run The Program

Can you run the attached program ?

* File is present in challenge 7 folder. For solving this challenge I manually solved using basics of assembly.

Flag Format : KCTF{sOmeThingHer3}

# Challenge 8
## Loop In A Loop

We use the file to verify our flags. Can you retrieve it?

The file give is present in challenge 8 folder.

Flag Format: KCTF{Fl4g_H3re}
