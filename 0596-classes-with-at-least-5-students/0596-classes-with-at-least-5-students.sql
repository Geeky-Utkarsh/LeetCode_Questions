# Write your MySQL query statement below

-- Solution -> 1 [GROUP BY + Aggregate Function]
-- SELECT class /* COUNT(class) */ FROM Courses WHERE COUNT(class)>5 GROUP BY class ORDER BY class DESC LIMIT 1; 

SELECT class FROM Courses GROUP BY class HAVING COUNT(class)>=5 ORDER BY COUNT(class) DESC; 