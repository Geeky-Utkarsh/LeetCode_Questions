/* Write your T-SQL query statement below */

-- SELECT name FROM Employee where id NOT IN (SELECT name FROM Employee WHERE managerId)

SELECT a.name AS Employee FROM Employee AS e INNER JOIN Employee AS a ON e.id=a.managerId WHERE a.salary>e.salary; 