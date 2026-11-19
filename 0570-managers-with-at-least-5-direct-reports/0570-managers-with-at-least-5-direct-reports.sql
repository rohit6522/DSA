# Write your MySQL query statement below

select e.name from Employee e join Employee as e1 on
e.id = e1.managerId
group by 
e.id,e.name 
  having count(e1.id) >= 5;