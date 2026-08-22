# Write your MySQL query statement below
select pro.product_name, sa.year, sa.price 
from Sales sa
join Product pro
on sa.product_id = pro.product_id;
