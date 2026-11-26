select
date_format(trans_date,'%Y-%m')as month,country,
count(*)as trans_count,
sum(amount)as trans_total_amount,

sum(
    case 
        when state = 'approved'
            then 1
        else 0
    end

)as approved_count,
SUM(
    CASE
        WHEN state = 'approved' THEN amount
        ELSE 0
    END
) AS approved_total_amount

from Transactions 


 group by date_format(trans_date,'%Y-%m'), country;