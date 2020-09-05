-- Display a list of the number of each record
SELECT name, COUNT(*) AS NUM FROM second_table GROUP BY score;
