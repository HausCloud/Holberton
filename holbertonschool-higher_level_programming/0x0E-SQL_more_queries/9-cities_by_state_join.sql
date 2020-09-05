-- This is a unhelpful comment.
-- Grab all cities and their corresponding states
SELECT cities.id, cities.name, states.name FROM cities LEFT JOIN states ON cities.state_id = states.id;
