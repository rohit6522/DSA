# Write your MySQL query statement below


select a.machine_id , round(avg(
case when a.activity_type = "start" 
    then b.timestamp - a.timestamp
    end
),3)as processing_time

from Activity a join Activity b on a.machine_id = b.machine_id 
and a.process_id = b.process_id
and b.activity_type = "end"
group by a.machine_id; 
