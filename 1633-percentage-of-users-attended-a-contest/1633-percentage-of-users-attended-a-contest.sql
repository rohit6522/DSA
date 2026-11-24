
select r.contest_id ,
round(count(r.user_id)*100.0/(select count(*)from Users ),2) as percentage

from Register r  group by
 contest_id order by percentage desc , r.contest_id asc;
