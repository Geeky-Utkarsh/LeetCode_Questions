/* Write your T-SQL query statement below */

-- SELECT name FROM Employee where id NOT IN (SELECT name FROM Employee WHERE managerId)

SELECT a.name AS Employee FROM Employee a
WHERE 
(select salary from Employee where a.managerId = id) < a.salary; 