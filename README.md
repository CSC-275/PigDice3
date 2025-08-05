# Pig Dice 3.0

## Background
After creating a solution for Pig Dice 2.0, we now have an object oriented solution to the Pig Dice game. The next version of this game will 
enhance the Pig Dice 2.0 game so that it supports a two player game where the players compete against one another to see who can reach 50 points 
in the fewest turns. To accomplish this, you will create a <b>NewGame</b> class that will be derived from the <b>Game</b> class created in the 
Pig Dice 2.0 solution. Derived classes like the <b>NewGame</b> class significantly improve reusability of a program through the principle of 
inheritance. 

You will also learn how to create documentation of the projects architecture to show how the classes in the program are related. This is 
especially useful when you are modifying existing code or adding new objects to provide more features to the existing code base.

"Unified Modeling Language" (UML) is a standard visual notation used to design and document object-oriented programming (OOP) systems, 
allowing developers to graphically represent the structure, behavior, and relationships between different classes and objects within a 
software system.

Class diagrams are a central component of UML, showing the attributes, methods, and relationships between classes within a system. UML clearly
illustrates relationships between classes, including inheritance, association, aggregation, and composition.



## Directions
Create a derived class named NewGame. The NewGame class should include string variables for each players full name, each player's score, and reuse the Game class defined in Pig Dice 2.0. 

<b>Note: Your solution must recreate the <i>exact</i> user interface shown below.</b>

## Interface Prototype Example

### Test Case Output
<pre><b>Let's Play PIG Dice!

* See which player will reach 50 points in the fewest turns.
* Turn ends when you hold or roll a 1.
* If you roll a 1, you lose all points for the turn.
* If you hold, you save all points for the turn.

Enter player1's name: Don Duck
Enter player2's name: Mick Mouse


Don Duck (Score:0) - TURN 1
roll or hold? (r/h): r
Die: 1
Turn over. No score.
Score for turn:0
Don Duck's total score:0

Mick Mouse (Score:0) - TURN 1
roll or hold? (r/h): r
Die: 1
Turn over. No score.
Score for turn:0
Mick Mouse's total score:0

Don Duck (Score:0) - TURN 2
roll or hold? (r/h): r
Die: 5
roll or hold? (r/h): r
Die: 2
roll or hold? (r/h): r
Die: 5
roll or hold? (r/h): r
Die: 2
roll or hold? (r/h): h
Score for turn:14
Don Duck's total score:14

Mick Mouse (Score:0) - TURN 2
roll or hold? (r/h): r
Die: 4
roll or hold? (r/h): r
Die: 2
roll or hold? (r/h): r
Die: 2
roll or hold? (r/h): r
Die: 6
roll or hold? (r/h): h
Score for turn:14
Mick Mouse's total score:14

Don Duck (Score:14) - TURN 3
roll or hold? (r/h): r
Die: 3
roll or hold? (r/h): r
Die: 4
roll or hold? (r/h): r
Die: 4
roll or hold? (r/h): r
Die: 1
Turn over. No score.
Score for turn:0
Don Duck's total score:14

Mick Mouse (Score:14) - TURN 3
roll or hold? (r/h): r
Die: 3
roll or hold? (r/h): r
Die: 6
roll or hold? (r/h): r
Die: 4
roll or hold? (r/h): r
Die: 1
Turn over. No score.
Score for turn:0
Mick Mouse's total score:14

Don Duck (Score:14) - TURN 4
roll or hold? (r/h): r
Die: 1
Turn over. No score.
Score for turn:0
Don Duck's total score:14

Mick Mouse (Score:14) - TURN 4
roll or hold? (r/h): r
Die: 2
roll or hold? (r/h): r
Die: 2
roll or hold? (r/h): r
Die: 6
roll or hold? (r/h): r
Die: 6
roll or hold? (r/h): r
Die: 6
roll or hold? (r/h): h
Score for turn:22
Mick Mouse's total score:36

Don Duck (Score:14) - TURN 5
roll or hold? (r/h): r
Die: 6
roll or hold? (r/h): r
Die: 3
roll or hold? (r/h): r
Die: 6
roll or hold? (r/h): r
Die: 3
roll or hold? (r/h): r
Die: 1
Turn over. No score.
Score for turn:0
Don Duck's total score:14

Mick Mouse (Score:36) - TURN 5
roll or hold? (r/h): r
Die: 1
Turn over. No score.
Score for turn:0
Mick Mouse's total score:36

Don Duck (Score:14) - TURN 6
roll or hold? (r/h): r
Die: 2
roll or hold? (r/h): r
Die: 5
roll or hold? (r/h): r
Die: 5
roll or hold? (r/h): r
Die: 3
roll or hold? (r/h): r
Die: 6
roll or hold? (r/h): r
Die: 5
roll or hold? (r/h): h
Score for turn:26
Don Duck's total score:40

Mick Mouse (Score:36) - TURN 6
roll or hold? (r/h): r
Die: 2
roll or hold? (r/h): r
Die: 6
roll or hold? (r/h): r
Die: 3
roll or hold? (r/h): r
Die: 4
roll or hold? (r/h): h
Score for turn:15
Mick Mouse's total score:51

Congratulations Mick Mouse you're the winner!
You had a final score of 51 points after 6 turns!

THANKS FOR PLAYING!</b></pre>




