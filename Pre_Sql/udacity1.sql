/*
  Determine the number of times a particular channel was used in
  the web_events table for each region. Your final table should
  have three columns - the region name, the channel,
  and the number of occurrences. Order your table with the highest
  number of occurrences first.
*/


SELECT r.name region_name, w.channel channel, COUNT(*) channel_freq
  FROM web_events w
  JOIN accounts a
    ON a.id = w.account_id
  JOIN sales_reps s
    ON s.id = a.sales_rep_id
  JOIN region r
    ON r.id = s.region_id
GROUP BY r.name, w.channel
ORDER BY channel_freq DESC;
