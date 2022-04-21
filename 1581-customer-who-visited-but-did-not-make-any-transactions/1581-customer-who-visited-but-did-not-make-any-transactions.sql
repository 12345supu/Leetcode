# Write your MySQL query statement below
Select customer_id,count(Visits.visit_id) as count_no_trans from Visits where visit_id not in(select Transactions.visit_id from Transactions)
group by customer_id