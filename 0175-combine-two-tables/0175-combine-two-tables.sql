/* Write your T-SQL query statement below */

/* As the questions asks to 

Write a solution to report the first name, last name, city 
and state of each person in the Person Table 
Also 
   If the address of a personId is not present in the address table then "show null"


We can use LEFT JOINT here -> It will take desired things from PERSON table (lastname, firstname, ) and city from the ADDRESS table 
 

LEFT JOIN => Everything from LEFT TABLE + 
 */


SELECT p.firstName, p.lastName ,a.city, a.state
FROM Person AS p
LEFT JOIN address AS a
ON p.personID=a.personID;